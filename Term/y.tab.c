/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "HH.y"

    #include <stdio.h>
    #include "ast.h"
    Node *Root;
	
	int yylex(void);
    int yyerror(char *msg);


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

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "HH.y"
{
    char *sval;
    int ival;
    Node *pval;
}
/* Line 193 of yacc.c.  */
#line 167 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 180 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
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
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  138

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,     2,     2,    35,     2,    37,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    34,    33,
      40,     2,    41,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    15,    22,    26,
      28,    33,    40,    45,    50,    53,    54,    57,    61,    63,
      67,    70,    72,    79,    86,    96,   104,   109,   112,   115,
     117,   120,   121,   124,   125,   127,   131,   135,   141,   144,
     150,   157,   163,   168,   170,   174,   176,   180,   182,   184,
     186,   188,   190,   195,   200,   202,   204,   206,   208,   210,
     212,   214
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    44,    -1,    45,    49,    -1,    49,    -1,
      46,    45,    -1,    46,    -1,    61,    64,    29,    50,    30,
      47,    -1,    31,    53,    32,    -1,    33,    -1,    64,    29,
      52,    30,    -1,    21,    29,    50,    34,    58,    30,    -1,
       6,    31,    53,    32,    -1,    61,    64,    35,    50,    -1,
      61,    64,    -1,    -1,    61,    58,    -1,    64,    35,    52,
      -1,    64,    -1,    54,    33,    53,    -1,    54,    33,    -1,
      51,    -1,     9,    29,    58,    30,    57,    55,    -1,    56,
      12,    29,    58,    30,    57,    -1,    13,    29,    58,    33,
      58,    33,    58,    30,    57,    -1,    13,    29,    64,    34,
      64,    30,    57,    -1,    22,    29,    58,    30,    -1,     7,
      58,    -1,     8,    58,    -1,    57,    -1,    10,    57,    -1,
      -1,    11,    54,    -1,    -1,    58,    -1,    31,    53,    32,
      -1,    58,    28,    59,    -1,    58,    36,    60,    34,    60,
      -1,    24,    60,    -1,    58,    37,    25,    29,    30,    -1,
      58,    37,    26,    29,    62,    30,    -1,    58,    37,    27,
      29,    30,    -1,    58,    38,    58,    39,    -1,    59,    -1,
      59,    23,    60,    -1,    60,    -1,    29,    58,    30,    -1,
      52,    -1,    48,    -1,    14,    -1,    15,    -1,    16,    -1,
      61,    38,    62,    39,    -1,    17,    40,    61,    41,    -1,
      18,    -1,     3,    -1,    19,    -1,    63,    -1,     4,    -1,
       5,    -1,    62,    -1,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    24,    24,    26,    27,    29,    30,    32,    35,    36,
      38,    39,    42,    45,    46,    47,    49,    51,    52,    55,
      56,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      69,    70,    72,    73,    76,    77,    79,    80,    81,    82,
      83,    84,    85,    86,    88,    89,    91,    92,    93,    95,
      96,    97,    98,    99,   100,   103,   104,   105,   108,   109,
     112,   113
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINTEGER", "TRUE", "FALSE", "MAINFUNC",
  "YIELD", "RETURN", "IF", "ELSE", "DO", "WHILE", "FOR", "INT", "BOOLEAN",
  "CHAR", "LIST", "STRING", "tSTRING", "tID", "LAMBDA", "SHORTFUNC",
  "MIDOP", "PREFIXOP", "VECTOROP", "VECTOROP2", "YIELDOP", "ASSIGNOP",
  "'('", "')'", "'{'", "'}'", "';'", "':'", "','", "'?'", "'.'", "'['",
  "']'", "'<'", "'>'", "$accept", "Start", "Prg", "FuncDecls", "FuncDecl",
  "FuncDeclEnd", "tFunc", "MainFunc", "ParameterList", "VarDecl", "ids",
  "Statements", "Statement", "IfBack", "DoState", "StateTemp", "Exp",
  "Exp2", "Temp", "Type", "Literal", "BooleanLiteral", "id", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    40,
      41,   123,   125,    59,    58,    44,    63,    46,    91,    93,
      60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    47,    47,
      48,    48,    49,    50,    50,    50,    51,    52,    52,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    56,    56,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    59,    60,    60,    60,    61,
      61,    61,    61,    61,    61,    62,    62,    62,    63,    63,
      64,    64
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     6,     3,     1,
       4,     6,     4,     4,     2,     0,     2,     3,     1,     3,
       2,     1,     6,     6,     9,     7,     4,     2,     2,     1,
       2,     0,     2,     0,     1,     3,     3,     5,     2,     5,
       6,     5,     4,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    49,    50,    51,     0,    54,     0,     2,     0,
       6,     4,     0,    33,     0,     1,     3,     5,    55,    58,
      59,    56,    61,     0,    60,    57,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,    33,    48,    21,    47,
       0,     0,     0,    29,    34,    43,    45,     0,    18,     0,
       0,    15,    27,    28,     0,    32,     0,    15,     0,    38,
       0,     0,    12,    20,     0,     0,     0,     0,     0,     0,
      16,     0,     0,    53,    52,     0,     0,     0,     0,    18,
       0,     0,    46,    35,    19,     0,    36,     0,     0,     0,
       0,     0,    44,     0,    18,    17,     0,    14,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    42,    10,
      33,     9,     7,    15,    31,     0,     0,     0,     0,    37,
      39,     0,    41,     0,    13,     0,    22,     0,     0,    11,
      23,    40,     8,    30,     0,    25,     0,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,     8,     9,    10,   112,    37,    11,    75,    38,
      39,    40,    41,   126,    42,    43,    44,    45,    46,    47,
      24,    25,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int16 yypact[] =
{
     170,     7,   -92,   -92,   -92,   -32,   -92,    48,   -92,     6,
     237,   -92,    50,   132,   237,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,    12,   -92,   -92,    21,   154,   154,    23,
     132,    31,    42,    43,   161,   154,   132,   -92,   -92,   -92,
      47,    52,    74,   -92,    28,    66,   -92,    20,    39,   -12,
      51,   237,    28,    28,   154,   -92,   154,   237,   154,   -92,
     167,    63,   -92,   103,    67,   161,   161,   104,   154,   161,
      28,    79,    79,   -92,   -92,    70,    50,   178,   134,   -16,
      69,   181,   -92,   -92,   -92,   154,    66,    71,    80,    97,
      99,   163,   -92,   108,    98,   -92,   -11,   107,    73,   154,
      79,   154,   -92,   192,   161,   114,    12,   125,   -92,   -92,
     132,   -92,   -92,   237,   150,   198,   138,   209,    73,   -92,
     -92,   139,   -92,   145,   -92,    73,   -92,   154,    73,   -92,
     -92,   -92,   -92,   -92,   212,   -92,    73,   -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,   -92,   169,   -92,   -92,   -92,   180,   -52,   -92,
     -36,   -30,   162,   -92,   -92,   -91,   -26,   128,   -23,     0,
     -19,   -92,    -9
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -34
static const yytype_int16 yytable[] =
{
      12,    52,    53,    26,    50,    80,    61,   114,    14,    60,
      12,    59,     1,    71,    49,    18,    19,    20,   100,    72,
     110,    70,   111,    18,    19,    20,    23,   130,    77,    73,
      78,    21,    81,    84,   133,    93,    95,   135,    13,    21,
      22,    32,    91,    87,    34,   137,    92,    79,    15,    35,
      51,    76,    54,    18,    19,    20,    65,    76,    23,   103,
      56,   124,    94,    94,    66,    67,    68,    97,    71,    21,
      22,    57,    58,   115,    72,   117,    18,    19,    20,    62,
     123,   119,    18,    19,    20,    63,    64,   121,    23,    69,
      74,   116,    21,    22,    32,    83,    85,    34,    21,    22,
      96,   134,    35,   101,    36,   104,    18,    19,    20,   105,
      27,    28,    29,    76,    30,   -33,    31,     2,     3,     4,
       5,     6,    21,    22,    32,    33,   106,    34,   107,    88,
      89,    90,    35,    72,    36,    18,    19,    20,   109,    27,
      28,    29,   113,    30,   120,    31,     2,     3,     4,     5,
       6,    21,    22,    32,    33,   122,    34,    18,    19,    20,
     125,    35,    65,    36,    18,    19,    20,    99,   128,   131,
      66,    67,    68,    21,    22,    32,     1,   132,    34,    17,
      21,    22,    32,    35,     2,     3,     4,     5,     6,    16,
      35,    65,    55,    86,     0,    65,     0,    82,     0,    66,
      67,    68,   108,    66,    67,    68,    65,     0,    98,    65,
       0,   102,     0,     0,    66,    67,    68,    66,    67,    68,
      65,     0,   118,     0,     0,     0,    65,     0,    66,    67,
      68,   127,     0,     0,    66,    67,    68,    65,     0,   129,
      65,     0,   136,     0,     0,    66,    67,    68,    66,    67,
      68,     2,     3,     4,     5,     6
};

static const yytype_int16 yycheck[] =
{
       0,    27,    28,    12,    23,    57,    36,    98,    40,    35,
      10,    34,     6,    29,    14,     3,     4,     5,    34,    35,
      31,    47,    33,     3,     4,     5,    38,   118,    54,    41,
      56,    19,    58,    63,   125,    71,    72,   128,    31,    19,
      20,    21,    68,    66,    24,   136,    69,    56,     0,    29,
      29,    51,    29,     3,     4,     5,    28,    57,    38,    85,
      29,   113,    71,    72,    36,    37,    38,    76,    29,    19,
      20,    29,    29,    99,    35,   101,     3,     4,     5,    32,
     110,   104,     3,     4,     5,    33,    12,   106,    38,    23,
      39,   100,    19,    20,    21,    32,    29,    24,    19,    20,
      30,   127,    29,    34,    31,    34,     3,     4,     5,    29,
       7,     8,     9,   113,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    29,    24,    29,    25,
      26,    27,    29,    35,    31,     3,     4,     5,    30,     7,
       8,     9,    35,    11,    30,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    30,    24,     3,     4,     5,
      10,    29,    28,    31,     3,     4,     5,    33,    30,    30,
      36,    37,    38,    19,    20,    21,     6,    32,    24,    10,
      19,    20,    21,    29,    14,    15,    16,    17,    18,     9,
      29,    28,    30,    65,    -1,    28,    -1,    30,    -1,    36,
      37,    38,    39,    36,    37,    38,    28,    -1,    30,    28,
      -1,    30,    -1,    -1,    36,    37,    38,    36,    37,    38,
      28,    -1,    30,    -1,    -1,    -1,    28,    -1,    36,    37,
      38,    33,    -1,    -1,    36,    37,    38,    28,    -1,    30,
      28,    -1,    30,    -1,    -1,    36,    37,    38,    36,    37,
      38,    14,    15,    16,    17,    18
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    14,    15,    16,    17,    18,    43,    44,    45,
      46,    49,    61,    31,    40,     0,    49,    45,     3,     4,
       5,    19,    20,    38,    62,    63,    64,     7,     8,     9,
      11,    13,    21,    22,    24,    29,    31,    48,    51,    52,
      53,    54,    56,    57,    58,    59,    60,    61,    64,    61,
      62,    29,    58,    58,    29,    54,    29,    29,    29,    60,
      58,    53,    32,    33,    12,    28,    36,    37,    38,    23,
      58,    29,    35,    41,    39,    50,    61,    58,    58,    64,
      50,    58,    30,    32,    53,    29,    59,    60,    25,    26,
      27,    58,    60,    52,    64,    52,    30,    64,    30,    33,
      34,    34,    30,    58,    34,    29,    29,    29,    39,    30,
      31,    33,    47,    35,    57,    58,    64,    58,    30,    60,
      30,    62,    30,    53,    50,    10,    55,    33,    30,    30,
      57,    30,    32,    57,    58,    57,    30,    57
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


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
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
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

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 24 "HH.y"
    {Root = (yyvsp[(1) - (1)].pval);}
    break;

  case 3:
#line 26 "HH.y"
    {(yyval.pval) = new Prog((yyvsp[(1) - (2)].pval), (yyvsp[(2) - (2)].pval));}
    break;

  case 4:
#line 27 "HH.y"
    {(yyval.pval) = (yyvsp[(1) - (1)].pval);}
    break;

  case 5:
#line 29 "HH.y"
    {(yyval.pval) = new FuncDecls((yyvsp[(1) - (2)].pval), (yyvsp[(2) - (2)].pval));}
    break;

  case 6:
#line 30 "HH.y"
    {(yyval.pval) = (yyvsp[(1) - (1)].pval);}
    break;

  case 7:
#line 32 "HH.y"
    {(yyval.pval) = new FuncDecl((yyvsp[(1) - (6)].pval),(yyvsp[(2) - (6)].pval),(yyvsp[(4) - (6)].pval),(yyvsp[(6) - (6)].pval));}
    break;

  case 8:
#line 35 "HH.y"
    {(yyval.pval) = (yyvsp[(2) - (3)].pval);}
    break;

  case 9:
#line 36 "HH.y"
    {(yyval.pval) = NULL;}
    break;

  case 10:
#line 38 "HH.y"
    {(yyval.pval) = new Func((yyvsp[(1) - (4)].pval),(yyvsp[(3) - (4)].pval));}
    break;

  case 11:
#line 39 "HH.y"
    {(yyval.pval) = new Lambda((yyvsp[(3) - (6)].pval),(yyvsp[(5) - (6)].pval)); }
    break;

  case 12:
#line 42 "HH.y"
    {(yyval.pval) = new MainFunc((yyvsp[(3) - (4)].pval));}
    break;

  case 13:
#line 45 "HH.y"
    {(yyval.pval) = new ParameterList((yyvsp[(1) - (4)].pval),(yyvsp[(2) - (4)].pval),(yyvsp[(4) - (4)].pval));}
    break;

  case 14:
#line 46 "HH.y"
    {(yyval.pval) = new ParameterList((yyvsp[(1) - (2)].pval),(yyvsp[(2) - (2)].pval));}
    break;

  case 15:
#line 47 "HH.y"
    {(yyval.pval) = NULL; }
    break;

  case 16:
#line 49 "HH.y"
    {(yyval.pval) = new VarDecl((yyvsp[(1) - (2)].pval), (yyvsp[(2) - (2)].pval));}
    break;

  case 17:
#line 51 "HH.y"
    {(yyval.pval) = new Ids((yyvsp[(1) - (3)].pval),(yyvsp[(3) - (3)].pval));}
    break;

  case 18:
#line 52 "HH.y"
    {(yyval.pval) = new Ids((yyvsp[(1) - (1)].pval));}
    break;

  case 19:
#line 55 "HH.y"
    {(yyval.pval) = new Statements((yyvsp[(1) - (3)].pval),(yyvsp[(3) - (3)].pval)); }
    break;

  case 20:
#line 56 "HH.y"
    {(yyval.pval) = new Statements((yyvsp[(1) - (2)].pval)); }
    break;

  case 21:
#line 59 "HH.y"
    {(yyval.pval) = (yyvsp[(1) - (1)].pval);}
    break;

  case 22:
#line 60 "HH.y"
    {(yyval.pval) = new If_Else_Statement((yyvsp[(3) - (6)].pval),(yyvsp[(5) - (6)].pval),(yyvsp[(6) - (6)].pval)); }
    break;

  case 23:
#line 61 "HH.y"
    {(yyval.pval) = new Do_While_Statement((yyvsp[(1) - (6)].pval),(yyvsp[(4) - (6)].pval),(yyvsp[(6) - (6)].pval));}
    break;

  case 24:
#line 62 "HH.y"
    {(yyval.pval) = new For_Statement((yyvsp[(3) - (9)].pval),(yyvsp[(5) - (9)].pval),(yyvsp[(7) - (9)].pval),(yyvsp[(9) - (9)].pval));}
    break;

  case 25:
#line 63 "HH.y"
    {(yyval.pval) = new For_Statement((yyvsp[(3) - (7)].pval),(yyvsp[(5) - (7)].pval),(yyvsp[(7) - (7)].pval));}
    break;

  case 26:
#line 64 "HH.y"
    {(yyval.pval) = new SFunc_Statement((yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].pval));}
    break;

  case 27:
#line 65 "HH.y"
    {(yyval.pval) = new Yield_Statement((yyvsp[(2) - (2)].pval));}
    break;

  case 28:
#line 66 "HH.y"
    {(yyval.pval) = new Return_Statement((yyvsp[(2) - (2)].pval));}
    break;

  case 29:
#line 67 "HH.y"
    {(yyval.pval) = (yyvsp[(1) - (1)].pval);}
    break;

  case 30:
#line 69 "HH.y"
    {(yyval.pval) = (yyvsp[(2) - (2)].pval); }
    break;

  case 31:
#line 70 "HH.y"
    {(yyval.pval) = NULL; }
    break;

  case 32:
#line 72 "HH.y"
    {(yyval.pval) = (yyvsp[(2) - (2)].pval);}
    break;

  case 33:
#line 73 "HH.y"
    {(yyval.pval) = NULL; }
    break;

  case 34:
#line 76 "HH.y"
    {(yyval.pval) = (yyvsp[(1) - (1)].pval); }
    break;

  case 35:
#line 77 "HH.y"
    {(yyval.pval) = (yyvsp[(2) - (3)].pval);}
    break;

  case 36:
#line 79 "HH.y"
    {(yyval.pval) = new BiOp((yyvsp[(1) - (3)].pval),(yyvsp[(2) - (3)].sval),(yyvsp[(3) - (3)].pval));}
    break;

  case 37:
#line 80 "HH.y"
    {(yyval.pval) = new TriOp((yyvsp[(1) - (5)].pval),(yyvsp[(3) - (5)].pval),(yyvsp[(5) - (5)].pval));}
    break;

  case 38:
#line 81 "HH.y"
    {(yyval.pval) = new PrefixOp((yyvsp[(1) - (2)].sval),(yyvsp[(2) - (2)].pval));}
    break;

  case 39:
#line 82 "HH.y"
    {(yyval.pval) = new VectorOp((yyvsp[(1) - (5)].pval),(yyvsp[(3) - (5)].sval));}
    break;

  case 40:
#line 83 "HH.y"
    {(yyval.pval) = new VectorOp((yyvsp[(1) - (6)].pval),(yyvsp[(3) - (6)].sval),(yyvsp[(5) - (6)].pval));}
    break;

  case 41:
#line 84 "HH.y"
    {(yyval.pval) = new Yield((yyvsp[(1) - (5)].pval),(yyvsp[(3) - (5)].sval));}
    break;

  case 42:
#line 85 "HH.y"
    {(yyval.pval) = new Select((yyvsp[(1) - (4)].pval),(yyvsp[(3) - (4)].pval));}
    break;

  case 43:
#line 86 "HH.y"
    {(yyval.pval) = (yyvsp[(1) - (1)].pval);}
    break;

  case 44:
#line 88 "HH.y"
    {(yyval.pval) = new BiOp((yyvsp[(1) - (3)].pval),(yyvsp[(2) - (3)].sval),(yyvsp[(3) - (3)].pval));}
    break;

  case 45:
#line 89 "HH.y"
    {(yyval.pval) = (yyvsp[(1) - (1)].pval);}
    break;

  case 46:
#line 91 "HH.y"
    {(yyval.pval) = new Tuple((yyvsp[(2) - (3)].pval));}
    break;

  case 47:
#line 92 "HH.y"
    {(yyval.pval) = (yyvsp[(1) - (1)].pval);}
    break;

  case 48:
#line 93 "HH.y"
    {(yyval.pval) = (yyvsp[(1) - (1)].pval);}
    break;

  case 49:
#line 95 "HH.y"
    {(yyval.pval) = new Type((yyvsp[(1) - (1)].sval));}
    break;

  case 50:
#line 96 "HH.y"
    {(yyval.pval) = new Type((yyvsp[(1) - (1)].sval));}
    break;

  case 51:
#line 97 "HH.y"
    {(yyval.pval) = new Type((yyvsp[(1) - (1)].sval));}
    break;

  case 52:
#line 98 "HH.y"
    {(yyval.pval) = new Array((yyvsp[(1) - (4)].pval),(yyvsp[(3) - (4)].pval));}
    break;

  case 53:
#line 99 "HH.y"
    {(yyval.pval) = new List((yyvsp[(1) - (4)].sval),(yyvsp[(3) - (4)].pval));}
    break;

  case 54:
#line 100 "HH.y"
    {(yyval.pval) = new Type((yyvsp[(1) - (1)].sval));}
    break;

  case 55:
#line 103 "HH.y"
    {(yyval.pval) = new Num((yyvsp[(1) - (1)].ival));}
    break;

  case 56:
#line 104 "HH.y"
    {(yyval.pval) = new String((yyvsp[(1) - (1)].sval));}
    break;

  case 57:
#line 105 "HH.y"
    {(yyval.pval) = (yyvsp[(1) - (1)].pval);}
    break;

  case 58:
#line 108 "HH.y"
    {(yyval.pval) = new Bool((yyvsp[(1) - (1)].sval));}
    break;

  case 59:
#line 109 "HH.y"
    {(yyval.pval) = new Bool((yyvsp[(1) - (1)].sval));}
    break;

  case 60:
#line 112 "HH.y"
    {(yyval.pval) = (yyvsp[(1) - (1)].pval);}
    break;

  case 61:
#line 113 "HH.y"
    {(yyval.pval) = new Id((yyvsp[(1) - (1)].sval));}
    break;


/* Line 1267 of yacc.c.  */
#line 1811 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 116 "HH.y"

int main() {yyparse(); printTree(Root); symbol_Gen(Root); mainInit(); code_Gen(Root); return 0;}
int yyerror(char *s) { printf("Error: %s\n", s); }

