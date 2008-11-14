# Before `make install' is performed this script should be runnable with
# `make test'. After `make install' it should work as `perl test.pl'

#########################

# change 'tests => 1' to 'tests => last_test_to_print';
$^W = 1;

use strict;
use Test;
BEGIN { 
   $ENV{LD_LIBRARY_PATH} = "../src/.libs"; # you didn't see this hack right?
   plan tests => 9;
};

use OPM; 

ok(1);

OPM->fatal_errors;
my $scan = new OPM or die "loading OPM";

ok(2);

$scan->addtype(OPM->TYPE_HTTP, 80);
$scan->addtype(OPM->TYPE_HTTP, 3128);
$scan->addtype(OPM->TYPE_HTTP, 8080);
$scan->addtype(OPM->TYPE_SOCKS4, 1080);
$scan->addtype(OPM->TYPE_SOCKS5, 1080);
$scan->addtype(OPM->TYPE_HTTPPOST, 3128);

$scan->config(OPM->CONFIG_SCAN_IP, "203.56.139.100");
$scan->config(OPM->CONFIG_SCAN_PORT, 6667);
$scan->config(OPM->CONFIG_TARGET_STRING, "*** Looking up your hostname...");

ok(3);

$scan->callback(OPM->CALLBACK_END, sub {
      my($scan, $remote, $val) = @_;
      print "end callback " . $remote->ip . "\n";
      $remote->free;

      ok(7);
   } );
$scan->callback(OPM->CALLBACK_OPENPROXY, sub {
      my($scan, $remote, $val) = @_;
      print "openproxy callback: " . $remote->addr . "\n";
   } );
$scan->callback(OPM->CALLBACK_NEGFAIL, sub {
      my($scan, $remote, $val) = @_;
      if($remote->ip eq "127.0.0.1") {
         print "Ended 127.0.0.1\n";
         $scan->end($remote);
      }
      print "negfail callback " . $remote->addr . "\n";
   } );
$scan->callback(OPM->CALLBACK_TIMEOUT, sub {
      my($scan, $remote, $val) = @_;
      print "timeout callback " . $remote->addr . "\n";
   } );
$scan->callback(OPM->CALLBACK_ERROR, sub {
      my($scan, $remote, $val) = @_;
      print "error callback " . $remote->addr . "\n";
   } );

ok(4);

unless(exists $ENV{OPEN_PROXY}) {
   print "The rest of the tests require a valid open proxy; run\n";
   print "OPEN_PROXY=\"127.0.0.1\" make test\n";
   print "Where 127.0.0.1 is an open proxy\n";
   exit;
}

my $remote1 = OPM->new($ENV{OPEN_PROXY});
my $remote2 = OPM->new("127.0.0.1");

ok(5) if ref $remote1 and ref $remote2;

$scan->scan($remote1);
$scan->scan($remote2);

ok(6);

print "Wait..\n";
$scan->cycle;
sleep 1;
$scan->cycle;
sleep 1;
$scan->cycle;

ok(8);
$scan = undef;

ok(9);

