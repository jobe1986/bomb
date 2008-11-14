/* A Bison parser, made from config-parser.y, by GNU bison 1.75.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON	1

/* Pure parsers.  */
#define YYPURE	0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AWAY = 258,
     BAN_UNKNOWN = 259,
     BLACKLIST = 260,
     CHANNEL = 261,
     CONNREGEX = 262,
     DNS_FDLIMIT = 263,
     DNSBL_FROM = 264,
     DNSBL_TO = 265,
     EXEMPT = 266,
     FD = 267,
     INVITE = 268,
     IRC = 269,
     KLINE = 270,
     KEY = 271,
     MASK = 272,
     MAX_READ = 273,
     MODE = 274,
     NAME = 275,
     NEGCACHE = 276,
     NICK = 277,
     NICKSERV = 278,
     OPER = 279,
     OPM = 280,
     OPTIONS = 281,
     PASSWORD = 282,
     PERFORM = 283,
     PIDFILE = 284,
     PORT = 285,
     PROTOCOL = 286,
     PROTOCOLTYPE = 287,
     REALNAME = 288,
     REPLY = 289,
     SCANLOG = 290,
     SCANNER = 291,
     SENDMAIL = 292,
     SERVER = 293,
     TARGET_IP = 294,
     TARGET_PORT = 295,
     TARGET_STRING = 296,
     TARGET_URL = 297,
     TIMEOUT = 298,
     TYPE = 299,
     USERNAME = 300,
     USER = 301,
     VHOST = 302,
     NUMBER = 303,
     STRING = 304
   };
#endif
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
#define NUMBER 303
#define STRING 304




/* Copy the first part of user declarations.  */
#line 25 "config-parser.y"

#include <stdio.h>
#include <string.h>
#include "malloc.h"
#include "config.h"

int yydebug=0;
void *tmp;        /* Variable to temporarily hold nodes before insertion to list */



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#ifndef YYSTYPE
#line 83 "config-parser.y"
typedef union {
        int number;
        char *string;
} yystype;
/* Line 193 of /usr/local/share/bison/yacc.c.  */
#line 187 "config-parser.c"
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif

#ifndef YYLTYPE
typedef struct yyltype
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} yyltype;
# define YYLTYPE yyltype
# define YYLTYPE_IS_TRIVIAL 1
#endif

/* Copy the second part of user declarations.  */


/* Line 213 of /usr/local/share/bison/yacc.c.  */
#line 208 "config-parser.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];	\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  2
#define YYLAST   284

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  75
/* YYNRULES -- Number of rules. */
#define YYNRULES  138
/* YYNRULES -- Number of states. */
#define YYNSTATES  298

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(X) \
  ((unsigned)(X) <= YYMAXUTOK ? yytranslate[X] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    52,
       2,    53,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    25,    26,    29,    31,    33,    35,    37,    39,    41,
      46,    51,    56,    61,    67,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     100,   102,   104,   109,   114,   119,   124,   129,   134,   139,
     144,   149,   154,   159,   164,   169,   174,   175,   182,   185,
     187,   189,   191,   193,   198,   203,   208,   209,   216,   219,
     221,   223,   225,   227,   232,   237,   238,   245,   248,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   270,
     272,   277,   282,   287,   292,   297,   302,   307,   312,   317,
     324,   330,   331,   334,   336,   338,   340,   342,   344,   346,
     351,   356,   361,   362,   369,   370,   373,   375,   377,   379,
     381,   383,   385,   387,   392,   397,   402,   407,   413,   414,
     417,   419,   424,   430,   431,   434,   436,   438,   440
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
      56,     0,    -1,    -1,    56,    57,    -1,    65,    -1,    58,
      -1,   109,    -1,    89,    -1,    95,    -1,   126,    -1,    26,
      50,    59,    51,    52,    -1,    -1,    59,    60,    -1,    60,
      -1,    61,    -1,    62,    -1,    63,    -1,    64,    -1,     1,
      -1,    21,    53,    48,    52,    -1,    29,    53,    49,    52,
      -1,     8,    53,    48,    52,    -1,    35,    53,    49,    52,
      -1,    14,    50,    66,    51,    52,    -1,    66,    67,    -1,
      67,    -1,    68,    -1,    81,    -1,    69,    -1,    71,    -1,
      72,    -1,    70,    -1,    73,    -1,    74,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    80,    -1,    75,    -1,
      82,    -1,     1,    -1,     3,    53,    49,    52,    -1,    15,
      53,    49,    52,    -1,    19,    53,    49,    52,    -1,    22,
      53,    49,    52,    -1,    23,    53,    49,    52,    -1,    24,
      53,    49,    52,    -1,    27,    53,    49,    52,    -1,    28,
      53,    49,    52,    -1,    30,    53,    48,    52,    -1,    33,
      53,    49,    52,    -1,    38,    53,    49,    52,    -1,    45,
      53,    49,    52,    -1,    47,    53,    49,    52,    -1,     7,
      53,    49,    52,    -1,    -1,    83,     6,    50,    84,    51,
      52,    -1,    84,    85,    -1,    85,    -1,    86,    -1,    87,
      -1,    88,    -1,    20,    53,    49,    52,    -1,    16,    53,
      49,    52,    -1,    13,    53,    49,    52,    -1,    -1,    90,
      46,    50,    91,    51,    52,    -1,    91,    92,    -1,    92,
      -1,    93,    -1,    94,    -1,     1,    -1,    17,    53,    49,
      52,    -1,    36,    53,    49,    52,    -1,    -1,    96,    36,
      50,    97,    51,    52,    -1,    97,    98,    -1,    98,    -1,
      99,    -1,   100,    -1,   104,    -1,   101,    -1,   105,    -1,
     102,    -1,   103,    -1,   108,    -1,   106,    -1,   107,    -1,
       1,    -1,    20,    53,    49,    52,    -1,    47,    53,    49,
      52,    -1,    39,    53,    49,    52,    -1,    42,    53,    49,
      52,    -1,    41,    53,    49,    52,    -1,    12,    53,    48,
      52,    -1,    40,    53,    48,    52,    -1,    43,    53,    48,
      52,    -1,    18,    53,    48,    52,    -1,    31,    53,    32,
      54,    48,    52,    -1,    25,    50,   110,    51,    52,    -1,
      -1,   110,   111,    -1,   111,    -1,   112,    -1,   113,    -1,
     114,    -1,   115,    -1,     1,    -1,     9,    53,    49,    52,
      -1,    10,    53,    49,    52,    -1,    37,    53,    49,    52,
      -1,    -1,   116,     5,    50,   117,    51,    52,    -1,    -1,
     117,   118,    -1,   118,    -1,   119,    -1,   121,    -1,   120,
      -1,   122,    -1,   123,    -1,     1,    -1,    20,    53,    49,
      52,    -1,    15,    53,    49,    52,    -1,    44,    53,    49,
      52,    -1,     4,    53,    48,    52,    -1,    34,    50,   124,
      51,    52,    -1,    -1,   124,   125,    -1,   125,    -1,    48,
      53,    49,    52,    -1,    11,    50,   127,    51,    52,    -1,
      -1,   127,   128,    -1,   128,    -1,   129,    -1,     1,    -1,
      17,    53,    49,    52,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,    94,    94,    95,    98,    98,    99,   100,   101,   102,
     108,   110,   110,   111,   114,   114,   115,   116,   117,   120,
     125,   131,   136,   144,   146,   146,   149,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   166,   172,   178,   184,   190,   196,   202,   208,
     216,   221,   227,   233,   239,   245,   255,   254,   272,   272,
     275,   275,   276,   279,   287,   295,   306,   305,   322,   322,
     325,   325,   326,   329,   339,   352,   351,   399,   399,   402,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     414,   421,   428,   435,   442,   458,   464,   470,   476,   482,
     501,   503,   503,   504,   507,   507,   508,   509,   510,   513,
     519,   525,   534,   533,   553,   553,   554,   557,   557,   558,
     559,   560,   561,   564,   571,   578,   589,   595,   597,   597,
     598,   601,   619,   621,   621,   622,   625,   625,   628
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AWAY", "BAN_UNKNOWN", "BLACKLIST", 
  "CHANNEL", "CONNREGEX", "DNS_FDLIMIT", "DNSBL_FROM", "DNSBL_TO", 
  "EXEMPT", "FD", "INVITE", "IRC", "KLINE", "KEY", "MASK", "MAX_READ", 
  "MODE", "NAME", "NEGCACHE", "NICK", "NICKSERV", "OPER", "OPM", 
  "OPTIONS", "PASSWORD", "PERFORM", "PIDFILE", "PORT", "PROTOCOL", 
  "PROTOCOLTYPE", "REALNAME", "REPLY", "SCANLOG", "SCANNER", "SENDMAIL", 
  "SERVER", "TARGET_IP", "TARGET_PORT", "TARGET_STRING", "TARGET_URL", 
  "TIMEOUT", "TYPE", "USERNAME", "USER", "VHOST", "NUMBER", "STRING", 
  "'{'", "'}'", "';'", "'='", "':'", "$accept", "config", "config_items", 
  "options_entry", "options_items", "options_item", "options_negcache", 
  "options_pidfile", "options_dns_fdlimit", "options_scanlog", 
  "irc_entry", "irc_items", "irc_item", "irc_away", "irc_kline", 
  "irc_mode", "irc_nick", "irc_nickserv", "irc_oper", "irc_password", 
  "irc_perform", "irc_port", "irc_realname", "irc_server", "irc_username", 
  "irc_vhost", "irc_connregex", "channel_entry", "@1", "channel_items", 
  "channel_item", "channel_name", "channel_key", "channel_invite", 
  "user_entry", "@2", "user_items", "user_item", "user_mask", 
  "user_scanner", "scanner_entry", "@3", "scanner_items", "scanner_item", 
  "scanner_name", "scanner_vhost", "scanner_target_ip", 
  "scanner_target_url", "scanner_target_string", "scanner_fd", 
  "scanner_target_port", "scanner_timeout", "scanner_max_read", 
  "scanner_protocol", "opm_entry", "opm_items", "opm_item", 
  "opm_dnsbl_from", "opm_dnsbl_to", "opm_sendmail", "opm_blacklist_entry", 
  "@4", "blacklist_items", "blacklist_item", "blacklist_name", 
  "blacklist_kline", "blacklist_type", "blacklist_ban_unknown", 
  "blacklist_reply", "blacklist_reply_items", "blacklist_reply_item", 
  "exempt_entry", "exempt_items", "exempt_item", "exempt_mask", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     123,   125,    59,    61,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      58,    59,    59,    59,    60,    60,    60,    60,    60,    61,
      62,    63,    64,    65,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    83,    82,    84,    84,
      85,    85,    85,    86,    87,    88,    90,    89,    91,    91,
      92,    92,    92,    93,    94,    96,    95,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   110,   110,   111,   111,   111,   111,   111,   112,
     113,   114,   116,   115,   117,   117,   117,   118,   118,   118,
     118,   118,   118,   119,   120,   121,   122,   123,   124,   124,
     124,   125,   126,   127,   127,   127,   128,   128,   129
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       5,     0,     2,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     4,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     6,
       5,     0,     2,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     0,     6,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     5,     0,     2,
       1,     4,     5,     0,     2,     1,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       2,    66,     1,     0,     0,     0,     0,     3,     5,     4,
       7,     0,     8,     0,     6,     9,     0,     0,     0,     0,
       0,     0,   137,     0,     0,   135,   136,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    28,    31,    29,    30,    32,
      33,    39,    34,    35,    36,    37,    38,    27,    40,     0,
     108,     0,     0,     0,     0,   103,   104,   105,   106,   107,
       0,    18,     0,     0,     0,     0,     0,    13,    14,    15,
      16,    17,     0,     0,     0,     0,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,   102,     0,
       0,     0,     0,     0,     0,    12,    72,     0,     0,     0,
      69,    70,    71,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    82,    84,
      85,    81,    83,    87,    88,    86,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,   100,     0,     0,
       0,     0,     0,    10,     0,     0,     0,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
     138,    42,    55,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,    59,
      60,    61,    62,   109,   110,   111,   122,     0,     0,     0,
       0,     0,     0,   116,   117,   119,   118,   120,   121,    21,
      19,    20,    22,     0,     0,    67,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,    58,     0,     0,     0,   128,     0,     0,   115,    73,
      74,    95,    98,    90,     0,    92,    96,    94,    93,    97,
      91,     0,     0,     0,    57,     0,     0,     0,     0,     0,
     130,     0,   113,     0,    65,    64,    63,   126,   124,   123,
       0,     0,   129,   125,    99,     0,   127,   131
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     7,     8,    76,    77,    78,    79,    80,    81,
       9,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,   208,
     209,   210,   211,   212,    10,    11,   119,   120,   121,   122,
      12,    13,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,    14,    64,    65,    66,    67,    68,
      69,    70,   222,   223,   224,   225,   226,   227,   228,   279,
     280,    15,    24,    25,    26
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -43
static const short yypact[] =
{
     -43,    99,   -43,   -41,   -40,   -35,   -31,   -43,   -43,   -43,
     -43,   -15,   -43,     6,   -43,   -43,    23,   114,     2,    44,
      -7,    -2,   -43,    28,    76,   -43,   -43,   -43,    29,    30,
      31,    33,    37,    38,    39,    43,    47,    48,    49,    52,
      53,    55,    -1,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,    81,
     -43,    56,    63,    65,    61,   -43,   -43,   -43,   -43,   -43,
     109,   -43,    70,    73,    75,    77,    68,   -43,   -43,   -43,
     -43,   -43,    24,   131,    82,    87,   -43,    85,    91,    96,
      97,   101,   104,   105,   106,   107,   100,   108,   111,   115,
     116,   117,   -43,   113,   118,   119,   126,   124,   -43,   127,
     110,   132,   130,   133,   129,   -43,   -43,   134,   135,    71,
     -43,   -43,   -43,   -43,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,    16,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   147,   -43,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   -43,   -12,   162,   163,   164,   -43,    34,   165,
     166,   167,   168,   -43,   172,   173,   171,   -43,   176,   177,
     178,   194,   179,   181,   182,   183,   185,   186,   184,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   187,   188,   189,     0,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   190,   191,   192,
     180,   193,    60,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   195,   196,   -43,   197,   198,   199,   112,
     200,   201,   202,   203,   204,   205,   -43,   209,   210,   211,
     212,   -43,   213,   214,   216,   218,   219,   215,   -43,   -43,
     -43,   -43,   -43,   -43,   221,   -43,   -43,   -43,   -43,   -43,
     -43,   220,   222,   223,   -43,   224,   225,   226,   217,   -18,
     -43,   227,   -43,   228,   -43,   -43,   -43,   -43,   -43,   -43,
     232,   230,   -43,   -43,   -43,   231,   -43,   -43
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
     -43,   -43,   -43,   -43,   -43,   208,   -43,   -43,   -43,   -43,
     -43,   -43,   229,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -25,   -43,   -43,   -43,   -43,   -43,   -43,    66,   -43,   -43,
     -43,   -43,   -43,    50,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   122,   -43,   -43,   -43,
     -43,   -43,   -43,    12,   -43,   -43,   -43,   -43,   -43,   -43,
     -42,   -43,   -43,   238,   -43
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, parse error.  */
#define YYTABLE_NINF -134
static const short yytable[] =
{
      27,   205,    28,    60,   206,   -56,    29,  -101,   207,    16,
      17,    61,    62,   205,    30,    18,   206,   123,    31,    19,
     207,    32,    33,    34,    22,   116,    35,    36,   124,    37,
     278,    20,    38,   291,   125,   216,   126,    39,   217,    63,
      23,   117,    21,    82,    40,    71,    41,   127,    83,   218,
     101,   250,    72,  -101,   219,   128,   129,   130,   131,   132,
     118,   216,    60,   133,   217,    73,  -112,   188,   220,    71,
      61,    62,   116,    74,  -133,   218,    72,    22,   221,    75,
     219,    84,    87,    88,    89,  -114,    90,   103,   117,    73,
      91,    92,    93,    23,   220,   -11,    94,    74,    63,     2,
      95,    96,    97,    75,   221,    98,    99,   118,   100,   104,
       3,   257,   107,     4,   109,    27,   105,    28,   106,   114,
     -56,    29,   176,   110,     5,     6,   111,    85,   112,    30,
     113,   146,   123,    31,   148,   -75,    32,    33,    34,   147,
     149,    35,    36,   124,    37,   150,   151,    38,   157,   125,
     152,   126,    39,   153,   154,   155,   156,   158,   169,    40,
     159,    41,   127,   163,   160,   161,   264,   164,   165,   162,
     128,   129,   130,   131,   132,   166,   167,   168,   133,   171,
     170,   173,   172,   251,   189,   177,   108,   174,   175,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   213,   214,   215,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   239,   238,   240,   241,
     255,   242,   243,   244,   258,   245,   246,   292,     0,     0,
     247,   248,   249,   252,   253,   254,   256,   259,   260,   261,
     262,   263,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   275,    86,   276,   274,   277,   278,   282,   281,   283,
     290,   102,   284,     0,   285,   286,   287,   288,   289,   293,
     294,   295,   296,   297,   115
};

static const short yycheck[] =
{
       1,    13,     3,     1,    16,     6,     7,     5,    20,    50,
      50,     9,    10,    13,    15,    50,    16,     1,    19,    50,
      20,    22,    23,    24,     1,     1,    27,    28,    12,    30,
      48,    46,    33,    51,    18,     1,    20,    38,     4,    37,
      17,    17,    36,    50,    45,     1,    47,    31,    50,    15,
      51,    51,     8,    51,    20,    39,    40,    41,    42,    43,
      36,     1,     1,    47,     4,    21,     5,    51,    34,     1,
       9,    10,     1,    29,    51,    15,     8,     1,    44,    35,
      20,    53,    53,    53,    53,    51,    53,     6,    17,    21,
      53,    53,    53,    17,    34,    51,    53,    29,    37,     0,
      53,    53,    53,    35,    44,    53,    53,    36,    53,    53,
      11,    51,    51,    14,     5,     1,    53,     3,    53,    51,
       6,     7,    51,    53,    25,    26,    53,    51,    53,    15,
      53,    49,     1,    19,    49,    36,    22,    23,    24,    52,
      49,    27,    28,    12,    30,    49,    49,    33,    48,    18,
      49,    20,    38,    49,    49,    49,    49,    49,    48,    45,
      49,    47,    31,    50,    49,    49,    54,    49,    49,    52,
      39,    40,    41,    42,    43,    49,    52,    50,    47,    49,
      48,    52,    49,   208,   134,   119,    64,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    49,    49,    52,    48,    48,    32,    49,    49,    48,
      50,    49,    49,    48,   222,    49,    52,   279,    -1,    -1,
      53,    53,    53,    53,    53,    53,    53,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    49,    49,
      49,    48,    24,    49,    52,    49,    48,    52,    49,    48,
      53,    42,    52,    -1,    52,    52,    52,    52,    52,    52,
      52,    49,    52,    52,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    56,     0,    11,    14,    25,    26,    57,    58,    65,
      89,    90,    95,    96,   109,   126,    50,    50,    50,    50,
      46,    36,     1,    17,   127,   128,   129,     1,     3,     7,
      15,    19,    22,    23,    24,    27,    28,    30,    33,    38,
      45,    47,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       1,     9,    10,    37,   110,   111,   112,   113,   114,   115,
     116,     1,     8,    21,    29,    35,    59,    60,    61,    62,
      63,    64,    50,    50,    53,    51,   128,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    51,    67,     6,    53,    53,    53,    51,   111,     5,
      53,    53,    53,    53,    51,    60,     1,    17,    36,    91,
      92,    93,    94,     1,    12,    18,    20,    31,    39,    40,
      41,    42,    43,    47,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    49,    52,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    48,    49,    49,
      49,    49,    52,    50,    49,    49,    49,    52,    50,    48,
      48,    49,    49,    52,    53,    53,    51,    92,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    51,    98,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    13,    16,    20,    84,    85,
      86,    87,    88,    52,    52,    52,     1,     4,    15,    20,
      34,    44,   117,   118,   119,   120,   121,   122,   123,    52,
      52,    52,    52,    49,    49,    52,    48,    48,    49,    32,
      49,    48,    49,    49,    48,    49,    52,    53,    53,    53,
      51,    85,    53,    53,    53,    50,    53,    51,   118,    52,
      52,    52,    52,    52,    54,    52,    52,    52,    52,    52,
      52,    49,    49,    49,    52,    48,    49,    49,    48,   124,
     125,    49,    52,    48,    52,    52,    52,    52,    52,    52,
      53,    51,   125,    52,    52,    49,    52,    52
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)           \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#define YYLEX	yylex ()

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*-----------------------------.
| Print this symbol on YYOUT.  |
`-----------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yysymprint (FILE* yyout, int yytype, YYSTYPE yyvalue)
#else
yysymprint (yyout, yytype, yyvalue)
    FILE* yyout;
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyout, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyout, yytoknum[yytype], yyvalue);
# endif
    }
  else
    YYFPRINTF (yyout, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyout, ")");
}
#endif /* YYDEBUG. */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
#if defined (__STDC__) || defined (__cplusplus)
yydestruct (int yytype, YYSTYPE yyvalue)
#else
yydestruct (yytype, yyvalue)
    int yytype;
    YYSTYPE yyvalue;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvalue;

  switch (yytype)
    {
      default:
        break;
    }
}



/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of parse errors so far.  */
int yynerrs;


int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with.  */

  if (yychar <= 0)		/* This means end of input.  */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more.  */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

      /* We have to keep this `#if YYDEBUG', since we use variables
	 which are defined only if `YYDEBUG' is set.  */
      YYDPRINTF ((stderr, "Next token is "));
      YYDSYMPRINT ((stderr, yychar1, yylval));
      YYDPRINTF ((stderr, "\n"));
    }

  /* If the proper action on seeing token YYCHAR1 is to reduce or to
     detect an error, take that action.  */
  yyn += yychar1;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yychar1)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];



#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn - 1, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] >= 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif
  switch (yyn)
    {
        case 19:
#line 121 "config-parser.y"
    {
   OptionsItem->negcache = yyvsp[-1].number;
}
    break;

  case 20:
#line 126 "config-parser.y"
    {
   MyFree(OptionsItem->pidfile);
   OptionsItem->pidfile = DupString(yyvsp[-1].string);
}
    break;

  case 21:
#line 132 "config-parser.y"
    {
   OptionsItem->dns_fdlimit = yyvsp[-1].number;
}
    break;

  case 22:
#line 137 "config-parser.y"
    {
   MyFree(OptionsItem->scanlog);
   OptionsItem->scanlog = DupString(yyvsp[-1].string);
}
    break;

  case 42:
#line 167 "config-parser.y"
    {
   MyFree(IRCItem->away);
   IRCItem->away = DupString(yyvsp[-1].string);
}
    break;

  case 43:
#line 173 "config-parser.y"
    {
   MyFree(IRCItem->kline);
   IRCItem->kline = DupString(yyvsp[-1].string);
}
    break;

  case 44:
#line 179 "config-parser.y"
    {
   MyFree(IRCItem->mode);
   IRCItem->mode = DupString(yyvsp[-1].string);
}
    break;

  case 45:
#line 185 "config-parser.y"
    {
   MyFree(IRCItem->nick);
   IRCItem->nick = DupString(yyvsp[-1].string);
}
    break;

  case 46:
#line 191 "config-parser.y"
    {
   MyFree(IRCItem->nickserv);
   IRCItem->nickserv = DupString(yyvsp[-1].string);
}
    break;

  case 47:
#line 197 "config-parser.y"
    {
   MyFree(IRCItem->oper);
   IRCItem->oper = DupString(yyvsp[-1].string);
}
    break;

  case 48:
#line 203 "config-parser.y"
    {
   MyFree(IRCItem->password);
   IRCItem->password = DupString(yyvsp[-1].string);
}
    break;

  case 49:
#line 209 "config-parser.y"
    {
   node_t *node;
   node = node_create(DupString(yyvsp[-1].string));

   list_add(IRCItem->performs, node);
}
    break;

  case 50:
#line 217 "config-parser.y"
    {
   IRCItem->port = yyvsp[-1].number;
}
    break;

  case 51:
#line 222 "config-parser.y"
    {
   MyFree(IRCItem->realname);
   IRCItem->realname = DupString(yyvsp[-1].string);
}
    break;

  case 52:
#line 228 "config-parser.y"
    {
   MyFree(IRCItem->server);
   IRCItem->server = DupString(yyvsp[-1].string);
}
    break;

  case 53:
#line 234 "config-parser.y"
    {
   MyFree(IRCItem->username);
   IRCItem->username = DupString(yyvsp[-1].string);
}
    break;

  case 54:
#line 240 "config-parser.y"
    {
   MyFree(IRCItem->vhost);
   IRCItem->vhost = DupString(yyvsp[-1].string);
}
    break;

  case 55:
#line 246 "config-parser.y"
    {
   MyFree(IRCItem->connregex);
   IRCItem->connregex = DupString(yyvsp[-1].string);
}
    break;

  case 56:
#line 255 "config-parser.y"
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

  case 63:
#line 280 "config-parser.y"
    {
   struct ChannelConf *item = tmp;

   MyFree(item->name);
   item->name = DupString(yyvsp[-1].string);
}
    break;

  case 64:
#line 288 "config-parser.y"
    {
   struct ChannelConf *item = tmp;

   MyFree(item->key);
   item->key = DupString(yyvsp[-1].string);
}
    break;

  case 65:
#line 296 "config-parser.y"
    {
   struct ChannelConf *item = tmp;

   MyFree(item->invite);
   item->invite = DupString(yyvsp[-1].string);
}
    break;

  case 66:
#line 306 "config-parser.y"
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

  case 73:
#line 330 "config-parser.y"
    {
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString(yyvsp[-1].string));

   list_add(item->masks, node);
}
    break;

  case 74:
#line 340 "config-parser.y"
    {
   struct UserConf *item = (struct UserConf *) tmp;

   node_t *node;
   node = node_create((void *) DupString(yyvsp[-1].string));

   list_add(item->scanners, node);
}
    break;

  case 75:
#line 352 "config-parser.y"
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

  case 90:
#line 415 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->name);
   item->name = DupString(yyvsp[-1].string);
}
    break;

  case 91:
#line 422 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->vhost);
   item->vhost = DupString(yyvsp[-1].string);
}
    break;

  case 92:
#line 429 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->target_ip);
   item->target_ip = DupString(yyvsp[-1].string);
}
    break;

  case 93:
#line 436 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   MyFree(item->target_url);
   item->target_url = DupString(yyvsp[-1].string);
}
    break;

  case 94:
#line 443 "config-parser.y"
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

  case 95:
#line 459 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->fd = yyvsp[-1].number;
}
    break;

  case 96:
#line 465 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->target_port = yyvsp[-1].number;
}
    break;

  case 97:
#line 471 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->timeout = yyvsp[-1].number;
}
    break;

  case 98:
#line 477 "config-parser.y"
    {
   struct ScannerConf *item = (struct ScannerConf *) tmp;
   item->max_read = yyvsp[-1].number;
}
    break;

  case 99:
#line 483 "config-parser.y"
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

  case 109:
#line 514 "config-parser.y"
    {
   MyFree(OpmItem->dnsbl_from);
   OpmItem->dnsbl_from = DupString(yyvsp[-1].string);
}
    break;

  case 110:
#line 520 "config-parser.y"
    {
   MyFree(OpmItem->dnsbl_to);
   OpmItem->dnsbl_to = DupString(yyvsp[-1].string);
}
    break;

  case 111:
#line 526 "config-parser.y"
    {
   MyFree(OpmItem->sendmail);
   OpmItem->sendmail = DupString(yyvsp[-1].string);
}
    break;

  case 112:
#line 534 "config-parser.y"
    {
   node_t *node;
   struct BlacklistConf *item;

   item = MyMalloc(sizeof *item);

   item->name = DupString("");
   item->kline = DupString("");
   item->ban_unknown = 0;
   item->type = A_BITMASK;
   item->reply = list_create();

   node = node_create(item);
   list_add(OpmItem->blacklists, node);

   tmp = (void *) item;
}
    break;

  case 123:
#line 564 "config-parser.y"
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->name);
   item->name = DupString(yyvsp[-1].string);
}
    break;

  case 124:
#line 571 "config-parser.y"
    {
   struct BlacklistConf *item = tmp;

   MyFree(item->kline);
   item->kline = DupString(yyvsp[-1].string);
}
    break;

  case 125:
#line 578 "config-parser.y"
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

  case 126:
#line 589 "config-parser.y"
    {
   struct BlacklistConf *item = tmp;

   item->ban_unknown = yyvsp[-1].number;
}
    break;

  case 131:
#line 602 "config-parser.y"
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

  case 138:
#line 629 "config-parser.y"
    {
   node_t *node;
   node = node_create(DupString(yyvsp[-1].string));

   list_add(ExemptItem->masks, node);
}
    break;


    }

/* Line 1016 of /usr/local/share/bison/yacc.c.  */
#line 1799 "config-parser.c"

  yyvsp -= yylen;
  yyssp -= yylen;


#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyssp > yyss)
	    {
	      YYDPRINTF ((stderr, "Error: popping "));
	      YYDSYMPRINT ((stderr,
			    yystos[*yyssp],
			    *yyvsp));
	      YYDPRINTF ((stderr, "\n"));
	      yydestruct (yystos[*yyssp], *yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yydestruct (yychar1, yylval);
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDPRINTF ((stderr, "Error: popping "));
      YYDSYMPRINT ((stderr,
		    yystos[*yyssp], *yyvsp));
      YYDPRINTF ((stderr, "\n"));

      yydestruct (yystos[yystate], *yyvsp);
      yyvsp--;
      yystate = *--yyssp;


#if YYDEBUG
      if (yydebug)
	{
	  short *yyssp1 = yyss - 1;
	  YYFPRINTF (stderr, "Error: state stack now");
	  while (yyssp1 != yyssp)
	    YYFPRINTF (stderr, " %d", *++yyssp1);
	  YYFPRINTF (stderr, "\n");
	}
#endif
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 636 "config-parser.y"


