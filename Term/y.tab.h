/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tINTEGER = 258,
     TRUE = 259,
     FALSE = 260,
     MAINFUNC = 261,
     YIELD = 262,
     RETURN = 263,
     IF = 264,
     ELSE = 265,
     DO = 266,
     WHILE = 267,
     FOR = 268,
     INT = 269,
     BOOLEAN = 270,
     CHAR = 271,
     LIST = 272,
     STRING = 273,
     tSTRING = 274,
     tID = 275,
     LAMBDA = 276,
     SHORTFUNC = 277,
     MIDOP = 278,
     PREFIXOP = 279,
     VECTOROP = 280,
     VECTOROP2 = 281,
     YIELDOP = 282,
     ASSIGNOP = 283
   };
#endif
/* Tokens.  */
#define tINTEGER 258
#define TRUE 259
#define FALSE 260
#define MAINFUNC 261
#define YIELD 262
#define RETURN 263
#define IF 264
#define ELSE 265
#define DO 266
#define WHILE 267
#define FOR 268
#define INT 269
#define BOOLEAN 270
#define CHAR 271
#define LIST 272
#define STRING 273
#define tSTRING 274
#define tID 275
#define LAMBDA 276
#define SHORTFUNC 277
#define MIDOP 278
#define PREFIXOP 279
#define VECTOROP 280
#define VECTOROP2 281
#define YIELDOP 282
#define ASSIGNOP 283




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "HH.y"
{
    char *sval;
    int ival;
    Node *pval;
}
/* Line 1529 of yacc.c.  */
#line 111 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

