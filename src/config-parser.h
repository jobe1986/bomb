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

#ifndef BISON_CONFIG_PARSER_H
# define BISON_CONFIG_PARSER_H

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




#ifndef YYSTYPE
#line 83 "config-parser.y"
typedef union {
        int number;
        char *string;
} yystype;
/* Line 1281 of /usr/local/share/bison/yacc.c.  */
#line 143 "config-parser.h"
# define YYSTYPE yystype
#endif

extern YYSTYPE yylval;


#endif /* not BISON_CONFIG_PARSER_H */

