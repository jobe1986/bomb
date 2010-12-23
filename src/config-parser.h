#ifndef YYERRCODE
#define YYERRCODE 256
#endif

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
typedef union 
{
        int number;
        char *string;
} YYSTYPE;
extern YYSTYPE yylval;
