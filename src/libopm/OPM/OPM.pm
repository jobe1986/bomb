package OPM;

use 5.005;
use strict;
use vars qw/@ISA $VERSION $AUTOLOAD/;
use Carp;

require Exporter;
require DynaLoader;

@ISA = qw(Exporter DynaLoader);

$VERSION = '0.01';

sub AUTOLOAD {
   # This AUTOLOAD is used to 'autoload' constants from the constant()
   # XS function.  If a constant is not found then control is passed
   # to the AUTOLOAD in AutoLoader.

   my $constname;
   ($constname = $AUTOLOAD) =~ s/.*:://;
   croak "& not defined" if $constname eq 'constant';
   my $val = constant($constname, 0);
   if ($! != 0) {
	   croak "Your vendor has not defined OPM macro $constname";
   }

   {
      no strict 'refs';
      # Fixed between 5.005_53 and 5.005_61
      if ($] >= 5.00561) {
         *$AUTOLOAD = sub () { $val };
      }
      else {
         *$AUTOLOAD = sub { $val };
      }
   }
   goto &$AUTOLOAD;
}

bootstrap OPM $VERSION;

# Preloaded methods go here.

sub new {
   my $package = shift;
   if(@_) {
      return _remote_create(@_);
   }else{
      my $scan = _create();
      return $scan unless ref $scan;
      
      # It looks bad if we segfault easily, this just means we'll sit in an
      # infinite loop...
      $scan->config(OPM->CONFIG_FD_LIMIT, 512);
      $scan->config(OPM->CONFIG_MAX_READ, 4096);
      $scan->config(OPM->CONFIG_TIMEOUT,  30);

      return $scan;
   }
}

sub fatal_errors {
   OPM::_fatal_errors();
}

package OPM::Scan;

sub config {
   my($scanner, $type, $var) = @_;
   if($var =~ /^\d+$/) {
      $scanner->_config_int($type, $var);
   }else{
      $scanner->_config_string($type, $var);
   }
}

package OPM::Remote;

sub addr {
   my $remote = shift;
   return $remote->ip . ':' . $remote->port;
}

#package OPM::Error;

1;
__END__

=head1 NAME

OPM - Perl interface to libopm open proxy scanning library

=head1 INTRODUCTION

This is the perl API to the libopm open proxy scanning library. It is written
in perl XS and interfaces with the C code. The API is very similar to the C API
if you need further explaination of anything in this document reading the
libopm-api.txt file that comes with libopm might provide answers.

=head1 SYNOPSIS

  use OPM;
  OPM->fatal_errors; # croak on errors

  my $scan = OPM->new; # new scanner
  my $remote = OPM->new("127.0.0.1"); # new remote IP to scan
  $scan->scan($remote); # Scans it

=head1 CONSTANTS

Constants are accessed by using OPM->NAME_OF_CONSTANT, for example if in the C
API the constant is OPM_TYPE_HTTP it would become OPM->TYPE_HTTP.

=head1 METHODS

=head2 new

With no arguments this creates a new scan object (an object inpackage
OPM::Scan), or if given an IP address as an argument this will create a new
remote object (OPM::Remote).

=head3 Examples

   my $scan = OPM->new; # a new scanner

   my $remote = new OPM("127.0.0.1"); # a new remote object

(Note the 'new OPM' and 'OPM->new' are exactly the same, as usual with perl
there is more than one way to do the same thing).

Currently all methods except new must be used with an object, either a scan
object (OPM::Scan) or a remote object (OPM::Remote). These are created with the
new method described above.

=head1 Methods of OPM::Scan


=head2 addtype

Adds a protocol and port to be scanned using this scanner. The same as the
C API function. Returns an OPM::Error object.

=head3 Example

   $scan->addtype(OPM->TYPE_HTTP, 8080);

=head2 scan

Queues a remote ready to be scanned. Returns an OPM::Error object.

=head3 Example

   $scan->scan($remote);

=head2 callback

Adds a callback, to be called when a particular event occurs.
Returns an OPM::Error object.

=head3 Examples

   $scan->callback(OPM->CALLBACK_OPENPROXY, \&reference);

   $scan->callback(OPM->CALLBACK_OPENPROXY, sub {
      my($scan, $remote, $val) = @_;
      # Do something good here..
   } );

=head2 cycle

Cycles through all remotes and pending scans, running callbacks as needed. This
is intended to take as little time as possible, the application really needs to
sleep() or similar to save CPU.

=head2 active

Returns the current number of active and pending scans for the scan object, can
be used to decide when it is safe to end the program.

=head2 config

Sets a config variable, see the C API docs for more details. Returns an OPM::Error object.

=head3 Examples

   $scan->config(OPM->CONFIG_SCAN_PORT, 6667);

   $scan->config(OPM->CONFIG_TARGET_STRING, "something ircd sends");

=head2 end

Ends all scans and queued scans on a remote object.

=head3 Example

   $scan->end($remote);

=head2 endscan

Ends all active scans on a remote object.

=head3 Example

   $scan->endscan($remote);

=head1 Methods of OPM::Remote

OPM::Remote contains some methods which access the details in the struct rather
than being equivilants of libopm C functions. They are ip, port, protocol and bytes_read.

=head2 ip

This returns the IP address associated with the OPM::Remote object

=head2 protocol, port, bytes_read

Used in callbacks these return details of the current protocol and port
found open or closed on the OPM::Remote object. protocol returns a textual
representation of the protocol. Possible values are currently HTTP, SOCKS4,
SOCKS5, WINGATE, ROUTER, HTTPPOST.

=head2 addtype

The same as $scan->addtype, but adds the type only to the specific remote
(used before the remote is sent to be scanned with $scan->scan).
Returns an OPM::Error object.

=head1 OPM::Error

The return values of methods that can fail is blessed into OPM::Error. To check
the type of error progmaticly the return value is used as a scalar reference,
else to get a textual version the string method is called.

=head3 Example

   my $error = $scan->scan($remote);
   if($$error != OPM->SUCCESS) {
      print "An error occured: " . $error->string . "\n";
   }

=head2 string
Returns a textual representaion of the error.

=head1 Differences in C and Perl APIs

The main difference between the C and Perl API is that in the Perl API the
functions are exposed as methods on objects rather than functions. A function
called opm_remote_something will be called by calling $remote->something.
opm_something mostly translates to $scan->something, apart from creating new
objects.

In the C API you need to perform memory management by calling opm_free, in the
Perl API this is handled automatically. When the object is no longer referenced 
it is freed (when DESTORY is called on the object internally opm_free is
called). Note that you should still call $remote->free in the CALLBACK_END
callback.

Constants are also accessed differently, see above for an explaination.

=head1 AUTHOR

David Leadbeater E<lt>dg@blitzed.orgE<gt>

=head1 SEE ALSO

libopm-api.txt

=cut
