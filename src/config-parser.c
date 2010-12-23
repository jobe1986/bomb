#include <stdlib.h>
#ifndef lint
#ifdef __unused
__unused
#endif
static char const 
yyrcsid[] = "$FreeBSD: src/usr.bin/yacc/skeleton.c,v 1.37 2003/02/12 18:03:55 davidc Exp $";
#endif
#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYLEX yylex()
#define YYEMPTY -1
#define yyclearin (yychar=(YYEMPTY))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING() (yyerrflag!=0)
#if defined(__cplusplus) || __STDC__
static int yygrowstack(void);
#else
static int yygrowstack();
#endif
#define YYPREFIX "yy"
#line 26 "config-parser.y"
#include <stdio.h>
#include <string.h>
#include "malloc.h"
#include "config.h"

int yydebug=0;
void *tmp;        /* Variable to temporarily hold nodes before insertion to list */

#line 84 "config-parser.y"
typedef union 
{
        int number;
        char *string;
} YYSTYPE;
#line 39 "config-parser.c"
#define YYERRCODE 256
#define ALERT 257
#define AWAY 258
#define BAN_UNKNOWN 259
#define BLACKLIST 260
#define CHANNEL 261
#define CONNREGEX 262
#define DNS_FDLIMIT 263
#define DNSBL_FROM 264
#define DNSBL_TO 265
#define EXEMPT 266
#define FD 267
#define INVITE 268
#define IRC 269
#define KLINE 270
#define KEY 271
#define MASK 272
#define MAX_READ 273
#define MODE 274
#define NAME 275
#define NEGCACHE 276
#define NICK 277
#define NICKSERV 278
#define OPER 279
#define OPM 280
#define OPTIONS 281
#define PASSWORD 282
#define PERFORM 283
#define PIDFILE 284
#define PORT 285
#define PROTOCOL 286
#define PROTOCOLTYPE 287
#define REALNAME 288
#define REPLY 289
#define SCANLOG 290
#define SCANNER 291
#define SENDMAIL 292
#define SERVER 293
#define TARGET_IP 294
#define TARGET_PORT 295
#define TARGET_STRING 296
#define TARGET_URL 297
#define TIMEOUT 298
#define TYPE 299
#define USERNAME 300
#define USER 301
#define VHOST 302
#define WHITELIST 303
#define NUMBER 304
#define STRING 305
const short yylhs[] = {                                        -1,
    0,    0,    1,    1,    1,    1,    1,    1,    3,    8,
    8,    8,    9,    9,    9,    9,    9,   10,   11,   12,
   13,    2,   14,   14,   15,   15,   15,   15,   15,   15,
   15,   15,   15,   15,   15,   15,   15,   15,   15,   15,
   16,   18,   21,   19,   20,   22,   23,   29,   24,   25,
   26,   27,   28,   17,   31,   30,   32,   32,   33,   33,
   33,   34,   35,   36,   37,    5,   38,   38,   39,   39,
   39,   40,   41,   42,    6,   43,   43,   44,   44,   44,
   44,   44,   44,   44,   44,   44,   44,   44,   45,   46,
   48,   50,   51,   47,   49,   53,   54,   52,    4,   55,
   55,   55,   56,   56,   56,   56,   56,   57,   58,   59,
   61,   60,   62,   62,   62,   63,   63,   63,   63,   63,
   63,   63,   63,   64,   67,   65,   66,   69,   68,   70,
   71,   71,   71,   72,    7,   73,   73,   73,   74,   74,
   75,
};
const short yylen[] = {                                         2,
    0,    2,    1,    1,    1,    1,    1,    1,    5,    0,
    2,    1,    1,    1,    1,    1,    1,    4,    4,    4,
    4,    5,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    4,    4,    4,    4,    4,    4,    4,    4,    4,    4,
    4,    4,    4,    4,    0,    6,    2,    1,    1,    1,
    1,    4,    4,    4,    0,    6,    2,    1,    1,    1,
    1,    4,    4,    0,    6,    2,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    4,    4,
    4,    4,    4,    4,    4,    4,    4,    6,    5,    0,
    2,    1,    1,    1,    1,    1,    1,    4,    4,    4,
    0,    6,    0,    2,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    4,    4,    4,    4,    4,    4,    5,
    0,    2,    1,    4,    5,    0,    2,    1,    1,    1,
    4,
};
const short yydefred[] = {                                      1,
    0,    0,    0,    0,    0,    2,    3,    4,    5,    6,
    7,    8,    0,    0,    0,    0,    0,    0,    0,    0,
  140,    0,    0,  138,  139,   40,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   24,   25,   26,   27,   28,   29,   30,   31,   32,
   33,   34,   35,   36,   37,   38,   39,    0,  107,    0,
    0,    0,    0,  102,  103,  104,  105,  106,    0,   17,
    0,    0,    0,    0,    0,   12,   13,   14,   15,   16,
    0,    0,    0,    0,  137,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   23,    0,    0,    0,    0,    0,  101,    0,    0,    0,
    0,    0,    0,   11,   71,    0,    0,    0,   68,   69,
   70,   88,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   77,   78,   79,   80,   81,   82,   83,
   84,   85,   86,   87,    0,  135,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   22,    0,    0,    0,    0,   99,    0,    0,    0,    0,
    0,    9,    0,    0,    0,   67,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   76,  141,   41,
   54,   42,   43,   44,   45,   46,   47,   48,   49,   50,
   51,   52,   53,    0,    0,    0,    0,   58,   59,   60,
   61,  108,  109,  110,  123,    0,    0,    0,    0,    0,
    0,    0,    0,  115,  116,  117,  118,  119,  120,  121,
  122,   20,   18,   19,   21,    0,    0,   66,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   75,    0,
    0,    0,    0,   57,    0,    0,    0,    0,    0,    0,
    0,    0,  114,   72,   73,   94,   97,   89,    0,   91,
   95,   93,   92,   96,   90,    0,    0,    0,   56,    0,
    0,    0,    0,    0,    0,  133,    0,    0,  112,    0,
   64,   63,   62,  128,  129,  125,  124,    0,    0,  132,
  126,  127,   98,    0,  130,  134,
};
const short yydgoto[] = {                                       1,
    6,    7,    8,    9,   10,   11,   12,   75,   76,   77,
   78,   79,   80,   41,   42,   43,   44,   45,   46,   47,
   48,   49,   50,   51,   52,   53,   54,   55,   56,   57,
   58,  207,  208,  209,  210,  211,   13,  118,  119,  120,
  121,   14,  133,  134,  135,  136,  137,  138,  139,  140,
  141,  142,  143,  144,   63,   64,   65,   66,   67,   68,
   69,  223,  224,  225,  226,  227,  228,  229,  230,  231,
  285,  286,   23,   24,   25,
};
const short yysindex[] = {                                      0,
 -238, -103, -101,  -94,  -90,    0,    0,    0,    0,    0,
    0,    0, -267, -245, -242, -221, -252, -240,  -84,  -76,
    0,  -10, -114,    0,    0,    0,   -6,   -2,    2,    5,
    7,    8,    9,   13,   14,   15,   16,   17,   19,   21,
  -93,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -178,    0,   24,
   25,   26, -110,    0,    0,    0,    0,    0, -172,    0,
   28,   29,   30,   36,  -65,    0,    0,    0,    0,    0,
 -246, -202, -207,   40,    0, -204, -203, -201, -200, -199,
 -198, -197, -196, -195, -193, -192, -191, -190, -189,   44,
    0,  -11, -188, -187, -186,   61,    0,   -1, -183, -181,
 -180, -179,   65,    0,    0,   66,   67, -116,    0,    0,
    0,    0,   68,   69,   70,   74,   76,   78,   80,   83,
   84,   87, -124,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  100,    0,  101,  102,  105,  108,
  109,  124,  128,  129,  134,  135,  137,  138,  140,  142,
    0, -250,  143,  144,  145,    0, -251,  146,  147,  149,
  151,    0,  -92,  -91,  153,    0,  -89,  -88,  -87,  -70,
  -85,  -83,  -82,  -81,  -78,  -77,  163,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  166,  168,  169, -118,    0,    0,    0,
    0,    0,    0,    0,    0,  170,  171,  172,  173,  112,
  175,  176, -123,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  179,  180,    0,  181,  182,
  183,  185,  186,  187,  188,  189,  190,  191,    0,  -61,
  -54,  -53,  194,    0,  -50,  -49,  -48,  -47,  -45,  -44,
  -42,  197,    0,    0,    0,    0,    0,    0,  -41,    0,
    0,    0,    0,    0,    0,  201,  205,  206,    0,  207,
  208,  209,  210,  211, -125,    0,  212,  214,    0,  215,
    0,    0,    0,    0,    0,    0,    0,  -35,  216,    0,
    0,    0,    0,  217,    0,    0,
};
const short yyrindex[] = {                                      0,
 -274,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  152,   18, -122,  155,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   18,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   22,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  156,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  158,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,
};
const short yygindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,  203,    0,
    0,    0,    0,    0,  243,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   79,    0,    0,    0,    0,    0,  167,    0,
    0,    0,    0,  154,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  225,    0,    0,    0,    0,
    0,    0,   71,    0,    0,    0,    0,    0,    0,    0,
    0,    4,    0,  267,    0,
};
#define YYTABLESIZE 294
const short yytable[] = {                                     299,
  187,  262,  100,   59,  215,  216,  253,  217,  175,  115,
   84,   60,   61,   21,  106,   70,   74,  204,  218,   15,
  205,   16,   71,  219,  206,  116,   65,    2,   17,   22,
    3,  100,   18,   19,   26,   72,   27,  220,   81,   62,
   28,    4,    5,   73,  117,   20,   82,  221,   29,   74,
   83,  222,   30,  122,   86,   31,   32,   33,   87,  113,
   34,   35,   88,   36,  123,   89,   37,   90,   91,   92,
  124,   38,  125,   93,   94,   95,   96,   97,   39,   98,
   40,   99,  102,  126,  103,  104,  105,  108,  109,  110,
  111,  127,  128,  129,  130,  131,  112,  145,  146,  132,
  147,  148,  161,  149,  150,  151,  152,  153,  154,  155,
  156,  162,  157,  158,  159,  160,  163,  164,  165,  166,
  168,  167,  169,  172,  170,  171,  173,  174,  177,  178,
  179,  122,  215,  216,  180,  217,  181,  100,  182,  115,
  183,   21,  123,  184,  185,   59,  218,  186,  124,  204,
  125,  219,  205,   60,   61,  116,  206,   22,  189,  190,
  191,  126,   26,  192,   27,  220,  193,  194,   28,  127,
  128,  129,  130,  131,  117,  221,   29,  132,  284,  222,
   30,   62,  195,   31,   32,   33,  196,  197,   34,   35,
   70,   36,  198,  199,   37,  200,  201,   71,  202,   38,
  203,  212,  213,  214,  232,  233,   39,  234,   40,  235,
   72,  238,  236,  237,  239,  240,  242,  241,   73,  243,
  244,  249,  245,  246,   74,  247,  250,  248,  251,  252,
  255,  256,  257,  258,  259,  260,  261,  264,  265,  266,
  267,  268,  269,  276,  270,  271,  272,  273,  274,  275,
  277,  278,  279,  280,  281,  289,  282,  283,  284,  291,
  287,  288,  290,  292,  293,  294,  295,  296,  297,  304,
  301,  298,  302,  303,  305,  306,  136,  114,   55,   10,
  113,  111,  131,  101,  176,  254,  188,  107,  300,   85,
    0,    0,    0,  263,
};
const short yycheck[] = {                                     125,
  125,  125,  125,  256,  256,  257,  125,  259,  125,  256,
  125,  264,  265,  256,  125,  256,  291,  268,  270,  123,
  271,  123,  263,  275,  275,  272,  301,  266,  123,  272,
  269,  125,  123,  301,  256,  276,  258,  289,  123,  292,
  262,  280,  281,  284,  291,  291,  123,  299,  270,  290,
   61,  303,  274,  256,   61,  277,  278,  279,   61,  125,
  282,  283,   61,  285,  267,   61,  288,   61,   61,   61,
  273,  293,  275,   61,   61,   61,   61,   61,  300,   61,
  302,   61,  261,  286,   61,   61,   61,  260,   61,   61,
   61,  294,  295,  296,  297,  298,   61,  305,   59,  302,
  305,  305,   59,  305,  305,  305,  305,  305,  305,  305,
  304,  123,  305,  305,  305,  305,  305,  305,  305,   59,
  304,  123,  304,   59,  305,  305,   61,   61,   61,   61,
   61,  256,  256,  257,   61,  259,   61,  260,   61,  256,
   61,  256,  267,   61,   61,  256,  270,   61,  273,  268,
  275,  275,  271,  264,  265,  272,  275,  272,   59,   59,
   59,  286,  256,   59,  258,  289,   59,   59,  262,  294,
  295,  296,  297,  298,  291,  299,  270,  302,  304,  303,
  274,  292,   59,  277,  278,  279,   59,   59,  282,  283,
  256,  285,   59,   59,  288,   59,   59,  263,   59,  293,
   59,   59,   59,   59,   59,   59,  300,   59,  302,   59,
  276,   59,  305,  305,  304,  304,  287,  305,  284,  305,
  304,   59,  305,  305,  290,  304,   61,  305,   61,   61,
   61,   61,   61,   61,  123,   61,   61,   59,   59,   59,
   59,   59,   58,  305,   59,   59,   59,   59,   59,   59,
  305,  305,   59,  304,  304,   59,  305,  305,  304,   59,
  305,  304,  304,   59,   59,   59,   59,   59,   59,  305,
   59,   61,   59,   59,   59,   59,  125,   75,  261,  125,
  125,  260,  125,   41,  118,  207,  133,   63,  285,   23,
   -1,   -1,   -1,  223,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 305
#if YYDEBUG
const char * const yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"':'","';'",0,"'='",0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ALERT",
"AWAY","BAN_UNKNOWN","BLACKLIST","CHANNEL","CONNREGEX","DNS_FDLIMIT",
"DNSBL_FROM","DNSBL_TO","EXEMPT","FD","INVITE","IRC","KLINE","KEY","MASK",
"MAX_READ","MODE","NAME","NEGCACHE","NICK","NICKSERV","OPER","OPM","OPTIONS",
"PASSWORD","PERFORM","PIDFILE","PORT","PROTOCOL","PROTOCOLTYPE","REALNAME",
"REPLY","SCANLOG","SCANNER","SENDMAIL","SERVER","TARGET_IP","TARGET_PORT",
"TARGET_STRING","TARGET_URL","TIMEOUT","TYPE","USERNAME","USER","VHOST",
"WHITELIST","NUMBER","STRING",
};
const char * const yyrule[] = {
"$accept : config",
"config :",
"config : config config_items",
"config_items : irc_entry",
"config_items : options_entry",
"config_items : opm_entry",
"config_items : user_entry",
"config_items : scanner_entry",
"config_items : exempt_entry",
"options_entry : OPTIONS '{' options_items '}' ';'",
"options_items :",
"options_items : options_items options_item",
"options_items : options_item",
"options_item : options_negcache",
"options_item : options_pidfile",
"options_item : options_dns_fdlimit",
"options_item : options_scanlog",
"options_item : error",
"options_negcache : NEGCACHE '=' NUMBER ';'",
"options_pidfile : PIDFILE '=' STRING ';'",
"options_dns_fdlimit : DNS_FDLIMIT '=' NUMBER ';'",
"options_scanlog : SCANLOG '=' STRING ';'",
"irc_entry : IRC '{' irc_items '}' ';'",
"irc_items : irc_items irc_item",
"irc_items : irc_item",
"irc_item : irc_away",
"irc_item : irc_connregex",
"irc_item : irc_kline",
"irc_item : irc_nick",
"irc_item : irc_nickserv",
"irc_item : irc_mode",
"irc_item : irc_oper",
"irc_item : irc_password",
"irc_item : irc_port",
"irc_item : irc_realname",
"irc_item : irc_server",
"irc_item : irc_username",
"irc_item : irc_vhost",
"irc_item : irc_perform",
"irc_item : channel_entry",
"irc_item : error",
"irc_away : AWAY '=' STRING ';'",
"irc_kline : KLINE '=' STRING ';'",
"irc_mode : MODE '=' STRING ';'",
"irc_nick : NICK '=' STRING ';'",
"irc_nickserv : NICKSERV '=' STRING ';'",
"irc_oper : OPER '=' STRING ';'",
"irc_password : PASSWORD '=' STRING ';'",
"irc_perform : PERFORM '=' STRING ';'",
"irc_port : PORT '=' NUMBER ';'",
"irc_realname : REALNAME '=' STRING ';'",
"irc_server : SERVER '=' STRING ';'",
"irc_username : USERNAME '=' STRING ';'",
"irc_vhost : VHOST '=' STRING ';'",
"irc_connregex : CONNREGEX '=' STRING ';'",
"$$1 :",
"channel_entry : $$1 CHANNEL '{' channel_items '}' ';'",
"channel_items : channel_items channel_item",
"channel_items : channel_item",
"channel_item : channel_name",
"channel_item : channel_key",
"channel_item : channel_invite",
"channel_name : NAME '=' STRING ';'",
"channel_key : KEY '=' STRING ';'",
"channel_invite : INVITE '=' STRING ';'",
"$$2 :",
"user_entry : $$2 USER '{' user_items '}' ';'",
"user_items : user_items user_item",
"user_items : user_item",
"user_item : user_mask",
"user_item : user_scanner",
"user_item : error",
"user_mask : MASK '=' STRING ';'",
"user_scanner : SCANNER '=' STRING ';'",
"$$3 :",
"scanner_entry : $$3 SCANNER '{' scanner_items '}' ';'",
"scanner_items : scanner_items scanner_item",
"scanner_items : scanner_item",
"scanner_item : scanner_name",
"scanner_item : scanner_vhost",
"scanner_item : scanner_fd",
"scanner_item : scanner_target_ip",
"scanner_item : scanner_target_port",
"scanner_item : scanner_target_url",
"scanner_item : scanner_target_string",
"scanner_item : scanner_protocol",
"scanner_item : scanner_timeout",
"scanner_item : scanner_max_read",
"scanner_item : error",
"scanner_name : NAME '=' STRING ';'",
"scanner_vhost : VHOST '=' STRING ';'",
"scanner_target_ip : TARGET_IP '=' STRING ';'",
"scanner_target_url : TARGET_URL '=' STRING ';'",
"scanner_target_string : TARGET_STRING '=' STRING ';'",
"scanner_fd : FD '=' NUMBER ';'",
"scanner_target_port : TARGET_PORT '=' NUMBER ';'",
"scanner_timeout : TIMEOUT '=' NUMBER ';'",
"scanner_max_read : MAX_READ '=' NUMBER ';'",
"scanner_protocol : PROTOCOL '=' PROTOCOLTYPE ':' NUMBER ';'",
"opm_entry : OPM '{' opm_items '}' ';'",
"opm_items :",
"opm_items : opm_items opm_item",
"opm_items : opm_item",
"opm_item : opm_dnsbl_from",
"opm_item : opm_dnsbl_to",
"opm_item : opm_sendmail",
"opm_item : opm_blacklist_entry",
"opm_item : error",
"opm_dnsbl_from : DNSBL_FROM '=' STRING ';'",
"opm_dnsbl_to : DNSBL_TO '=' STRING ';'",
"opm_sendmail : SENDMAIL '=' STRING ';'",
"$$4 :",
"opm_blacklist_entry : $$4 BLACKLIST '{' blacklist_items '}' ';'",
"blacklist_items :",
"blacklist_items : blacklist_items blacklist_item",
"blacklist_items : blacklist_item",
"blacklist_item : blacklist_name",
"blacklist_item : blacklist_type",
"blacklist_item : blacklist_whitelist",
"blacklist_item : blacklist_kline",
"blacklist_item : blacklist_ban_unknown",
"blacklist_item : blacklist_alert",
"blacklist_item : blacklist_reply",
"blacklist_item : error",
"blacklist_name : NAME '=' STRING ';'",
"blacklist_kline : KLINE '=' STRING ';'",
"blacklist_type : TYPE '=' STRING ';'",
"blacklist_whitelist : WHITELIST '=' NUMBER ';'",
"blacklist_alert : ALERT '=' NUMBER ';'",
"blacklist_ban_unknown : BAN_UNKNOWN '=' NUMBER ';'",
"blacklist_reply : REPLY '{' blacklist_reply_items '}' ';'",
"blacklist_reply_items :",
"blacklist_reply_items : blacklist_reply_items blacklist_reply_item",
"blacklist_reply_items : blacklist_reply_item",
"blacklist_reply_item : NUMBER '=' STRING ';'",
"exempt_entry : EXEMPT '{' exempt_items '}' ';'",
"exempt_items :",
"exempt_items : exempt_items exempt_item",
"exempt_items : exempt_item",
"exempt_item : exempt_mask",
"exempt_item : error",
"exempt_mask : MASK '=' STRING ';'",
};
#endif
#if YYDEBUG
#include <stdio.h>
#endif
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH 10000
#endif
#endif
#define YYINITSTACKSIZE 200
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short *yyss;
short *yysslim;
YYSTYPE *yyvs;
int yystacksize;
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack()
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;
    i = yyssp - yyss;
    newss = yyss ? (short *)realloc(yyss, newsize * sizeof *newss) :
      (short *)malloc(newsize * sizeof *newss);
    if (newss == NULL)
        return -1;
    yyss = newss;
    yyssp = newss + i;
    newvs = yyvs ? (YYSTYPE *)realloc(yyvs, newsize * sizeof *newvs) :
      (YYSTYPE *)malloc(newsize * sizeof *newvs);
    if (newvs == NULL)
        return -1;
    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab

#ifndef YYPARSE_PARAM
#if defined(__cplusplus) || __STDC__
#define YYPARSE_PARAM_ARG void
#define YYPARSE_PARAM_DECL
#else	/* ! ANSI-C/C++ */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif	/* ANSI-C/C++ */
#else	/* YYPARSE_PARAM */
#ifndef YYPARSE_PARAM_TYPE
#define YYPARSE_PARAM_TYPE void *
#endif
#if defined(__cplusplus) || __STDC__
#define YYPARSE_PARAM_ARG YYPARSE_PARAM_TYPE YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else	/* ! ANSI-C/C++ */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL YYPARSE_PARAM_TYPE YYPARSE_PARAM;
#endif	/* ANSI-C/C++ */
#endif	/* ! YYPARSE_PARAM */

int
yyparse (YYPARSE_PARAM_ARG)
    YYPARSE_PARAM_DECL
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate])) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#if defined(lint) || defined(__GNUC__)
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#if defined(lint) || defined(__GNUC__)
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 18:
#line 123 "config-parser.y"
{
   OptionsItem->negcache = yyvsp[-1].number;
}
break;
case 19:
#line 128 "config-parser.y"
{
   MyFree(OptionsItem->pidfile);
   OptionsItem->pidfile = DupString(yyvsp[-1].string);
}
break;
case 20:
#line 134 "config-parser.y"
{
   OptionsItem->dns_fdlimit = yyvsp[-1].number;
}
break;
case 21:
#line 139 "config-parser.y"
{
   MyFree(OptionsItem->scanlog);
   OptionsItem->scanlog = DupString(yyvsp[-1].string);
}
break;
case 41:
#line 169 "config-parser.y"
{
   MyFree(IRCItem->away);
   IRCItem->away = DupString(yyvsp[-1].string);
}
break;
case 42:
#line 175 "config-parser.y"
{
   MyFree(IRCItem->kline);
   IRCItem->kline = DupString(yyvsp[-1].string);
}
break;
case 43:
#line 181 "config-parser.y"
{
   MyFree(IRCItem->mode);
   IRCItem->mode = DupString(yyvsp[-1].string);
}
break;
case 44:
#line 187 "config-parser.y"
{
   MyFree(IRCItem->nick);
   IRCItem->nick = DupString(yyvsp[-1].string);
}
break;
case 45:
#line 193 "config-parser.y"
{
   MyFree(IRCItem->nickserv);
   IRCItem->nickserv = DupString(yyvsp[-1].string);
}
break;
case 46:
#line 199 "config-parser.y"
{
   MyFree(IRCItem->oper);
   IRCItem->oper = DupString(yyvsp[-1].string);
}
break;
case 47:
#line 205 "config-parser.y"
{
   MyFree(IRCItem->password);
   IRCItem->password = DupString(yyvsp[-1].string);
}
break;
case 48:
#line 211 "config-parser.y"
{
   node_t *node;
   node = node_create(DupString(yyvsp[-1].string));

   list_add(IRCItem->performs, node);
}
break;
case 49:
#line 219 "config-parser.y"
{
   IRCItem->port = yyvsp[-1].number;
}
break;
case 50:
#line 224 "config-parser.y"
{
   MyFree(IRCItem->realname);
   IRCItem->realname = DupString(yyvsp[-1].string);
}
break;
case 51:
#line 230 "config-parser.y"
{
   MyFree(IRCItem->server);
   IRCItem->server = DupString(yyvsp[-1].string);
}
break;
case 52:
#line 236 "config-parser.y"
{
   MyFree(IRCItem->username);
   IRCItem->username = DupString(yyvsp[-1].string);
}
break;
case 53:
#line 242 "config-parser.y"
{
   MyFree(IRCItem->vhost);
   IRCItem->vhost = DupString(yyvsp[-1].string);
}
break;
case 54:
#line 248 "config-parser.y"
{
   MyFree(IRCItem->connregex);
   IRCItem->connregex = DupString(yyvsp[-1].string);
}
break;
case 55:
#line 257 "config-parser.y"
{
   node_t *node;
   struct ChannelConf *item;

   item = MyMalloc(sizeof *item);

   item->name = DupString("");
   item->key = DupString("");
   item->invite = DupString("");

   node = node_create(item);
   list_add(IRCItem->channels, node);

   tmp = (void *) item;
}
break;
case 62:
#line 282 "config-parser.y"
{
   struct ChannelConf *item = tmp;

   MyFree(item->name);
   item->name = DupString(yyvsp[-1].string);
}
break;
case 63:
#line 290 "config-parser.y"
{
   struct ChannelConf *item = tmp;

   MyFree(item->key);
   item->key = DupString(yyvsp[-1].string);
}
break;
case 64:
#line 298 "config-parser.y"
{
   struct ChannelConf *item = tmp;

   MyFree(item->invite);
   item->invite = DupString(yyvsp[-1].string);
}
break;
case 65:
#line 308 "config-parser.y"
{
   node_t *node;
   struct UserConf *item;

   item = MyMalloc(sizeof *item);

   item->masks = list_create();
   item->scanners = list_create();

   node = node_create(item);
   list_add(UserItemList, node);

   tmp = (void *) item; 
}
break;
case 72:
#line 332 "config-parser.y"
{
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString(yyvsp[-1].string));

   list_add(item->masks, node);
}
break;
case 73:
#line 342 "config-parser.y"
{
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString(yyvsp[-1].string));

   list_add(item->scanners, node);
}
break;
case 74:
#line 354 "config-parser.y"
{
   node_t *node;
   struct ScannerConf *item, *olditem;

   item = MyMalloc(sizeof *item);

   /* Setup ScannerConf defaults */
   item->name = DupString("undefined");

	if(LIST_SIZE(ScannerItemList) > 0)
	{
	   olditem = ScannerItemList->tail->data;

		item->vhost = DupString(olditem->vhost);
		item->fd = olditem->fd;
		item->target_ip = DupString(olditem->target_ip);
		item->target_port = olditem->target_port;
		item->target_url = DupString(olditem->target_url);
		item->timeout = olditem->timeout;
		item->max_read = olditem->max_read;

		item->target_string = olditem->target_string;
		item->target_string_created = 0;
	}
	else
	{
	   item->vhost = DupString("0.0.0.0");
      item->fd = 512;
      item->target_ip = DupString("127.0.0.1");
      item->target_port = 6667;
      item->target_url = DupString("http://localhost/bopmcheck.txt");
      item->timeout = 30;
      item->max_read = 4096;
		
		item->target_string = list_create();
		item->target_string_created = 1;
	}
	
   item->protocols = list_create();

   node = node_create(item);

   list_add(ScannerItemList, node);
   tmp = (void *) item;
}
break;
case 89:
#line 417 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->name);
   item->name = DupString(yyvsp[-1].string);
}
break;
case 90:
#line 424 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->vhost);
   item->vhost = DupString(yyvsp[-1].string);
}
break;
case 91:
#line 431 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->target_ip);
   item->target_ip = DupString(yyvsp[-1].string);
}
break;
case 92:
#line 438 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->target_url);
   item->target_url = DupString(yyvsp[-1].string);
}
break;
case 93:
#line 445 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;

   node_t *node;
   node = node_create(yyvsp[-1].string);

	if(item->target_string_created == 0)
	{
	   item->target_string = list_create();
		item->target_string_created = 1;
	}

   list_add(item->target_string, node);
}
break;
case 94:
#line 461 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->fd = yyvsp[-1].number;
}
break;
case 95:
#line 467 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->target_port = yyvsp[-1].number;
}
break;
case 96:
#line 473 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->timeout = yyvsp[-1].number;
}
break;
case 97:
#line 479 "config-parser.y"
{
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->max_read = yyvsp[-1].number;
}
break;
case 98:
#line 485 "config-parser.y"
{
   struct ProtocolConf *item;
   struct ScannerConf  *item2;

   node_t *node;
 
   item = MyMalloc(sizeof *item);
   item->type = yyvsp[-3].number;
   item->port = yyvsp[-1].number;

   item2 = (struct ScannerConf *) tmp;

   node = node_create(item);
   list_add(item2->protocols, node);
}
break;
case 108:
#line 516 "config-parser.y"
{
   MyFree(OpmItem->dnsbl_from);
   OpmItem->dnsbl_from = DupString(yyvsp[-1].string);
}
break;
case 109:
#line 522 "config-parser.y"
{
   MyFree(OpmItem->dnsbl_to);
   OpmItem->dnsbl_to = DupString(yyvsp[-1].string);
}
break;
case 110:
#line 528 "config-parser.y"
{
   MyFree(OpmItem->sendmail);
   OpmItem->sendmail = DupString(yyvsp[-1].string);
}
break;
case 111:
#line 536 "config-parser.y"
{
   node_t *node;
   struct BlacklistConf *item;

   item = MyMalloc(sizeof *item);

   item->name = DupString("");
   item->kline = DupString("");
   item->ban_unknown = 0;
   item->whitelist = 0;
   item->alert = 1;
   item->type = A_BITMASK;
   item->reply = list_create();

   node = node_create(item);
   list_add(OpmItem->blacklists, node);

   tmp = (void *) item;
}
break;
case 124:
#line 570 "config-parser.y"
{
   struct BlacklistConf *item = tmp;

   MyFree(item->name);
   item->name = DupString(yyvsp[-1].string);
}
break;
case 125:
#line 577 "config-parser.y"
{
   struct BlacklistConf *item = tmp;

   MyFree(item->kline);
   item->kline = DupString(yyvsp[-1].string);
}
break;
case 126:
#line 584 "config-parser.y"
{
   struct BlacklistConf *item = tmp;
   
   if(strcmp("A record bitmask", yyvsp[-1].string) == 0)
      item->type = A_BITMASK;
   else if(strcmp("A record reply", yyvsp[-1].string) == 0)
      item->type = A_REPLY;
   else
      yyerror("Unknown blacklist type defined");
}
break;
case 127:
#line 595 "config-parser.y"
{
   struct BlacklistConf *item = tmp;

   item->whitelist = yyvsp[-1].number;
}
break;
case 128:
#line 601 "config-parser.y"
{
    struct BlacklistConf *item = tmp;

    item->alert = yyvsp[-1].number;
}
break;
case 129:
#line 607 "config-parser.y"
{
   struct BlacklistConf *item = tmp;

   item->ban_unknown = yyvsp[-1].number;
}
break;
case 134:
#line 620 "config-parser.y"
{
   struct BlacklistReplyConf *item;
   struct BlacklistConf *blacklist = tmp;
   node_t *node;

   item = MyMalloc(sizeof *item);

   item->number = yyvsp[-3].number;
   item->type = DupString(yyvsp[-1].string);

   node = node_create(item);
   list_add(blacklist->reply, node);
}
break;
case 141:
#line 647 "config-parser.y"
{
   node_t *node;
   node = node_create(DupString(yyvsp[-1].string));

   list_add(ExemptItem->masks, node);
}
break;
#line 1171 "config-parser.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
