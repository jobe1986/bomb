#!/usr/bin/perl
# A basic open proxy checker based on libopm and the OPM perl module
# Reads a file on stdin and returns if the proxies are open

# Basic protocol: (>> sent to bopchecker, << recived from bopchker).
# >> ip.ad.re.ss
# << ip.ad.re.ss open port,portN protocol,protocolN 
# << ip.ad.re.ss closed
# << ip.ad.re.ss error string
#
# You can also specify additional ports and protocols to test:
#  >> ip.ad.re.ss [default] [port_list] [protocol_list]
# Or use UNKNOWN as a protocol to try every protocol on that port:
#  >> ip.ad.re.ss [port] UNKNOWN
#
# Examples:
#
# Test all the default ports/protocols on 1.2.3.4
# >> 1.2.3.4 default
#
# Test only HTTP CONNECT on port 5678 of host 1.2.3.4
# >> 1.2.3.4 5678 HTTP
#
# Test all default ports/protocols, plus every protocol on port 5678
# >> 1.2.3.4 default 5678 UNKNOWN

use strict;
use IO::Select;
use OPM;

$SIG{PIPE} = 'IGNORE';

# Buffer of input from STDIN
my $buffer;
# Temp. storage of ports proxies are open on
my %open;
# Number of open proxies found
my $numopen;

my $select = new IO::Select ( \*STDIN );

my $scan = OPM->new or die("Error loading OPM");

sub add_default {
   my $remote = shift;

# Common ports are: 80, 3128, 8080
# Less common: 81, 8000, 8888, 6588
# Quite rare: 8002, 8081 + many others

# Common + Less common

   for(80, 81, 1182, 3128, 4480, 6588, 8000, 8080) {
      $remote->addtype(OPM->TYPE_HTTP, $_);
      $remote->addtype(OPM->TYPE_HTTPPOST, $_);
   }

   for(889, 25318) {
      $remote->addtype(OPM->TYPE_HTTP, $_);
   }

   for(555, 5121, 8548) {
       $remote->addtype(OPM->TYPE_HTTPPOST, $_);
   }

   for(889, 1080, 1180, 4914, 6826, 7198, 7366, 9036) {
       $remote->addtype(OPM->TYPE_SOCKS4, $_);
   }

# These seem to be even more common than port 1080, at least on IRCnet :(
   for(1080, 1813, 4438, 5104, 5113, 5262, 5634, 6552, 6561, 7464, 7810, 8130, 8148, 8175, 8520, 8814, 9100, 9186, 9447, 9578, 25791) {
       $remote->addtype(OPM->TYPE_SOCKS5, $_);
   }

   $remote->addtype(OPM->TYPE_ROUTER, 23);

   for(23, 1181) {
       $remote->addtype(OPM->TYPE_WINGATE, $_);
   }
}

# local interface to bind to
$scan->config(OPM->CONFIG_BIND_IP, "212.32.4.26");

# XXX: make configurable           "quorn.blitzed.org"
$scan->config(OPM->CONFIG_SCAN_IP, "212.32.4.26");
$scan->config(OPM->CONFIG_SCAN_PORT, 16667);
$scan->config(OPM->CONFIG_TARGET_STRING, "proxy check k thx");

$scan->callback(OPM->CALLBACK_END, \&callback_end);
$scan->callback(OPM->CALLBACK_OPENPROXY, \&callback_openproxy);

MAIN: while(1) {
   for my $sock($select->can_read(0.5)) {
      my $tmp;
      if(sysread($sock, $tmp, 1024) == 0) {
         last MAIN;
      }
      $buffer .= $tmp;

      while($buffer =~ s/^([^\n]+)\n//) {
         my($remote, $proxy, $proxyip);
         $proxy = $1;

         ($proxyip) = $proxy =~ /^([^ ]+)/;
         $remote = OPM->new($proxyip);
         
         if($proxy !~ / / or $proxy =~ s/ default//) {
            add_default($remote);
         }

         if($proxy =~ / (.+) (.+)$/) {
            my @ports = split ',', $1;
            my @types = split ',', $2;

            for(0 .. $#ports) {
# Make protocol 'UNKNOWN' be a shortcut for all protocols.
               if ($types[$_] eq 'UNKNOWN') {
                   my $p = $_;
                   for('HTTP','HTTPPOST','SOCKS4','SOCKS5','ROUTER','WINGATE') {
                       $remote->addtype(OPM::constant("TYPE_$_", 0), $p);
                   }
                   next;
               }

               unless(OPM::constant("TYPE_$types[$_]", 0)) {
                  print "$proxyip error Unknown protocol type ($types[$_])\n";
                  next;
               }
               $remote->addtype(
                     OPM::constant("TYPE_$types[$_]", 0), $ports[$_]);
            }
	 }

         my $error = $scan->scan($remote);
         if($$error != OPM->SUCCESS) {
            print "$proxyip error " . $error->string . "\n";
         }
      }
   }
   $scan->cycle;
}

while($scan->active) {
   sleep 1;
   $scan->cycle;
}

exit $numopen;


sub callback_openproxy {
   my($scan, $remote, $val) = @_;
   push @{$open{$remote->ip}}, [$remote->port, $remote->protocol];
}

sub callback_end {
   my($scan, $remote, $val) = @_;
   my $ip = $remote->ip;

   if(exists $open{$ip}) {
      printf("%s open %s %s\n", $ip,
         join(",", map { $_->[0] } @{$open{$ip}}),
         join(",", map { $_->[1] } @{$open{$ip}}));
      delete $open{$ip};
      $numopen++;
   }else{
      print "$ip closed\n";
   }

   $remote->free;
}

