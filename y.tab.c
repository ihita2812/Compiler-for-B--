
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "BMM_Parser.y"

        #include <stdio.h>
        #include <string.h>
        void yyerror(const char *str);
        int yylex(void);
        int yywrap(void);
        int CurrentState=0;
        int LineNumber= 0;
        int GoSub = 0;
        int VarStatus[286];
        //function that returns the mapped index of a variable
        int VarIndex(char *str);
        //function that sets the type of a variable to the respective type.
        int TypeSet(int ind, char str1);
        //function that checks whether variable called 'str' is of 'type'. [0 for ture, 1 for false]
        int TypeCheck(int ind, int type);
        FILE *yyin;


/* Line 189 of yacc.c  */
#line 93 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LINE_NO = 258,
     STR_LITERAL = 259,
     LOGICAL_OP = 260,
     NUM_LITERAL = 261,
     FLOAT_LITERAL = 262,
     DIM_VAR = 263,
     OBRACE = 264,
     CBRACE = 265,
     VAR_NAME = 266,
     FUN_NAME = 267,
     ENDL = 268,
     RELATIONAL_OP = 269,
     PRINT = 270,
     DATA = 271,
     INPUT = 272,
     LET = 273,
     GOTO = 274,
     GOSUB = 275,
     REM = 276,
     DIM = 277,
     IF = 278,
     THEN = 279,
     FOR = 280,
     TO = 281,
     STEP = 282,
     NEXT = 283,
     RETURN = 284,
     STOP = 285,
     END = 286,
     DEF = 287,
     TYPE = 288,
     EQ_OP = 289,
     SPACE = 290,
     COMMA = 291,
     SEMICOLON = 292
   };
#endif
/* Tokens.  */
#define LINE_NO 258
#define STR_LITERAL 259
#define LOGICAL_OP 260
#define NUM_LITERAL 261
#define FLOAT_LITERAL 262
#define DIM_VAR 263
#define OBRACE 264
#define CBRACE 265
#define VAR_NAME 266
#define FUN_NAME 267
#define ENDL 268
#define RELATIONAL_OP 269
#define PRINT 270
#define DATA 271
#define INPUT 272
#define LET 273
#define GOTO 274
#define GOSUB 275
#define REM 276
#define DIM 277
#define IF 278
#define THEN 279
#define FOR 280
#define TO 281
#define STEP 282
#define NEXT 283
#define RETURN 284
#define STOP 285
#define END 286
#define DEF 287
#define TYPE 288
#define EQ_OP 289
#define SPACE 290
#define COMMA 291
#define SEMICOLON 292




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 209 "y.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   216

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNRULES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    40,    38,     2,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      43,     2,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    42,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    16,    20,    22,
      24,    26,    28,    30,    32,    34,    36,    38,    40,    43,
      45,    47,    49,    51,    53,    55,    57,    59,    61,    63,
      65,    68,    70,    72,    73,    74,    80,    85,    87,    89,
      91,    93,    94,   100,   101,   107,   108,   116,   117,   128,
     129,   135,   140,   142,   143,   149,   153,   155,   156,   158,
     160,   162,   164,   166,   168,   170,   171,   176,   178,   179,
     180,   185,   186,   191,   192,   197,   198,   203,   204,   209,
     210,   216,   217,   221,   222,   228,   229,   233,   234,   242,
     243,   257,   258,   268,   272,   276,   280,   284,   288,   292,
     295,   299,   303,   305,   307,   309,   311
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    47,    -1,    49,    47,    -1,    49,    -1,
      48,    -1,     3,    35,    31,    -1,     3,    35,    50,    -1,
      54,    -1,    62,    -1,    60,    -1,    58,    -1,    65,    -1,
      68,    -1,    76,    -1,    92,    -1,    90,    -1,    82,    -1,
      30,    13,    -1,    86,    -1,    88,    -1,    84,    -1,    95,
      -1,    96,    -1,    97,    -1,    99,    -1,     6,    -1,     7,
      -1,     4,    -1,    52,    -1,    11,    53,    -1,     8,    -1,
      33,    -1,    -1,    -1,    55,    16,    35,    56,    13,    -1,
      57,    36,    35,    56,    -1,    57,    -1,     4,    -1,     6,
      -1,     7,    -1,    -1,    59,    18,    35,    76,    13,    -1,
      -1,    61,    22,    35,     8,    13,    -1,    -1,    63,    32,
      35,    12,    73,    96,    13,    -1,    -1,    64,    32,    35,
      12,     9,    52,    10,    73,    96,    13,    -1,    -1,    66,
      17,    35,    67,    13,    -1,    67,    36,    35,    52,    -1,
      52,    -1,    -1,    69,    15,    35,    70,    13,    -1,    72,
      71,    70,    -1,    72,    -1,    -1,    36,    -1,    37,    -1,
      52,    -1,    96,    -1,     6,    -1,     7,    -1,     4,    -1,
      -1,    74,    75,    34,    75,    -1,    35,    -1,    -1,    -1,
      77,    52,    73,     6,    -1,    -1,    78,    52,    73,    96,
      -1,    -1,    79,    52,    73,     4,    -1,    -1,    80,    52,
      73,    52,    -1,    -1,    81,    52,    73,     7,    -1,    -1,
      83,    20,    35,     6,    13,    -1,    -1,    85,    29,    13,
      -1,    -1,    87,    19,    35,     6,    13,    -1,    -1,    89,
      21,    13,    -1,    -1,    91,    23,    35,    97,    24,     6,
      13,    -1,    -1,    93,    25,    35,    76,    35,    26,    35,
      96,    35,    27,    35,    96,    13,    -1,    -1,    94,    25,
      35,    76,    35,    26,    35,    96,    13,    -1,    28,    11,
      13,    -1,    51,    38,    51,    -1,    51,    39,    51,    -1,
      51,    40,    51,    -1,    51,    41,    51,    -1,    51,    42,
      51,    -1,    39,    51,    -1,     9,    51,    10,    -1,    51,
      98,    51,    -1,    14,    -1,    43,    -1,    44,    -1,    34,
      -1,    51,     5,    51,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    40,    45,    46,    49,    57,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    83,    84,    85,    86,    87,    88,    89,
      92,   102,   110,   115,   126,   126,   130,   131,   134,   135,
     136,   141,   141,   152,   152,   163,   163,   168,   168,   177,
     177,   183,   184,   189,   189,   196,   197,   198,   201,   202,
     205,   206,   207,   208,   209,   216,   216,   218,   219,   222,
     222,   236,   236,   247,   247,   258,   258,   286,   286,   301,
     301,   309,   309,   322,   322,   330,   330,   339,   339,   348,
     348,   353,   353,   360,   370,   371,   372,   373,   374,   375,
     376,   379,   381,   382,   383,   384,   387
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LINE_NO", "STR_LITERAL", "LOGICAL_OP",
  "NUM_LITERAL", "FLOAT_LITERAL", "DIM_VAR", "OBRACE", "CBRACE",
  "VAR_NAME", "FUN_NAME", "ENDL", "RELATIONAL_OP", "PRINT", "DATA",
  "INPUT", "LET", "GOTO", "GOSUB", "REM", "DIM", "IF", "THEN", "FOR", "TO",
  "STEP", "NEXT", "RETURN", "STOP", "END", "DEF", "TYPE", "EQ_OP", "SPACE",
  "COMMA", "SEMICOLON", "'+'", "'-'", "'*'", "'/'", "'^'", "'<'", "'>'",
  "$accept", "program", "lines", "end_line", "line", "stmt", "expr", "var",
  "var2", "data_stmt", "$@1", "values", "value", "var_def_stmt", "$@2",
  "dim_def_stmt", "$@3", "fun_def_stmt", "$@4", "$@5", "in_stmt", "$@6",
  "variable_names", "out_stmt", "$@7", "things", "delimiter", "thing",
  "eq_stmt", "$@8", "space_eqs", "assign_stmt", "@9", "@10", "@11", "@12",
  "@13", "fun_call_stmt", "$@14", "return_call_stmt", "$@15", "goto_stmt",
  "$@16", "comment_stmt", "$@17", "control_stmt", "$@18", "iterative_stmt",
  "$@19", "$@20", "next_stmt", "num_expr", "rel_expr", "rel_op",
  "log_expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    43,    45,
      42,    47,    94,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    48,    49,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    51,    51,    51,    51,    51,
      52,    52,    53,    53,    55,    54,    56,    56,    57,    57,
      57,    59,    58,    61,    60,    63,    62,    64,    62,    66,
      65,    67,    67,    69,    68,    70,    70,    70,    71,    71,
      72,    72,    72,    72,    72,    74,    73,    75,    75,    77,
      76,    78,    76,    79,    76,    80,    76,    81,    76,    83,
      82,    85,    84,    87,    86,    89,    88,    91,    90,    93,
      92,    94,    92,    95,    96,    96,    96,    96,    96,    96,
      96,    97,    98,    98,    98,    98,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     0,     0,     5,     4,     1,     1,     1,
       1,     0,     5,     0,     5,     0,     7,     0,    10,     0,
       5,     4,     1,     0,     5,     3,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     1,     0,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       5,     0,     3,     0,     5,     0,     3,     0,     7,     0,
      13,     0,     9,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     1,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     5,     4,    69,     1,     3,     0,
       0,     6,     7,     8,     0,    11,     0,    10,     0,     9,
       0,     0,    12,     0,    13,     0,    14,     0,     0,     0,
       0,     0,    17,     0,    21,     0,    19,     0,    20,     0,
      16,     0,    15,     0,     0,    22,     0,    18,     0,     0,
       0,     0,     0,     0,     0,    31,    33,    65,    65,    65,
      65,    65,     0,     0,     0,     0,     0,     0,     0,    93,
       0,    69,     0,     0,     0,     0,    57,    32,    30,     0,
      68,     0,     0,     0,     0,     0,    82,     0,    86,     0,
      69,    69,    38,    39,    40,     0,    37,     0,     0,    65,
       0,    52,     0,    28,    26,    27,     0,     0,     0,    29,
       0,    56,    23,    24,    25,    70,    67,     0,    28,    26,
      27,    29,    23,    74,    76,    78,     0,     0,    23,    24,
       0,     0,    35,     0,    42,    44,     0,     0,    50,     0,
       0,    99,     0,   102,   105,     0,     0,     0,     0,     0,
     103,   104,     0,    54,    58,    59,    57,    68,    80,    84,
       0,     0,     0,     0,    23,     0,     0,   100,   106,    94,
      95,    96,    97,    98,   101,    55,    66,     0,     0,     0,
      36,    46,    65,    51,    88,     0,     0,     0,    23,    23,
      23,     0,    92,    48,     0,     0,    23,    90
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    12,   108,   121,    78,    13,
      14,    95,    96,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   102,    24,    25,   110,   156,   111,    79,    80,
     117,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,   128,   113,   152,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -89
static const yytype_int16 yypact[] =
{
      12,   -14,    26,   -89,   -89,    12,   126,   -89,   -89,    30,
      32,   -89,   -89,   -89,    27,   -89,    56,   -89,    24,   -89,
      18,    43,   -89,    59,   -89,    75,   -89,     6,     6,     6,
       6,     6,   -89,    71,   -89,    73,   -89,    85,   -89,    86,
     -89,   109,   -89,    81,    84,   -89,    98,   -89,    93,    99,
     100,   101,   102,   103,   115,   -89,   119,   -89,   -89,   -89,
     -89,   -89,   118,   120,   124,   147,   127,   128,   129,   -89,
      88,   -89,   153,   154,   155,     6,    16,   -89,   -89,   159,
     133,    92,   165,     6,   163,   166,   -89,   167,   -89,    92,
     -89,   -89,   -89,   -89,   -89,   158,   138,   162,   164,   -89,
     169,   -89,    76,    -2,     0,     3,    92,    92,    39,    15,
     168,    -7,    50,   -89,   -89,   -89,   -89,   142,   -89,   -89,
     -89,   -89,   105,   -89,   -89,   -89,   170,   171,   -89,   156,
     144,   150,   -89,   151,   -89,   -89,    92,     6,   -89,   152,
      28,    79,    92,   -89,   -89,    92,    92,    92,    92,    92,
     -89,   -89,    92,   -89,   -89,   -89,    16,   133,   -89,   -89,
     176,   172,   173,    88,   175,   179,     6,   -89,    39,    79,
      79,    83,    83,    83,    39,   -89,   -89,   177,   157,   160,
     -89,   -89,   -89,   -89,   -89,    92,    92,    92,   161,   178,
     180,   174,   -89,   -89,   181,    92,   184,   -89
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -89,   -89,   189,   -89,   -89,   -89,   -88,   -27,   -89,   -89,
     -89,    37,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,    46,   -89,   -89,   -52,   -89,
      47,   -59,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -71,   114,   -89,   -89
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -90
static const yytype_int16 yytable[] =
{
      57,    58,    59,    60,    61,   112,    81,    82,    83,    84,
     122,   -64,    97,   -62,    55,     1,   -63,    56,   140,   141,
     103,     6,   104,   105,    55,   106,     7,    56,   -60,   154,
     155,   130,   131,   142,   -64,   -64,   -62,   -62,   167,   -63,
     -63,    46,   143,    48,   142,    47,    50,   136,   101,   109,
      51,   -60,   -60,   143,   168,   107,   124,   169,   170,   171,
     172,   173,   144,   -61,   174,   164,   145,   146,   147,   148,
     149,   150,   151,   144,    49,    52,    53,   145,   146,   147,
     148,   149,   150,   151,   142,   112,   -61,   -61,   142,   138,
      54,    62,    92,   143,    93,    94,   118,   143,   119,   120,
      55,   106,    63,    56,    64,   -72,    67,    65,   -72,    68,
     165,    69,   139,   144,   188,   189,   190,   144,   -72,   147,
     148,   149,   150,   151,   196,   149,   150,   151,    70,   109,
     187,   107,    66,    86,    71,    72,    73,    74,    75,   183,
     -72,   -53,   -34,   -49,   -41,   -83,   -79,   -85,   -43,   -87,
      76,   -89,    77,    85,     9,   -81,    10,    11,   -45,    87,
      88,    98,    89,    90,    91,   115,    99,   100,   116,   123,
     125,   132,   126,   127,   133,   134,   157,   135,   137,   161,
     160,   153,   177,   158,   159,   162,   163,   166,   181,   182,
     184,   192,   185,   193,     8,   186,   191,   197,   178,   179,
     180,   194,   175,   129,   176,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   195
};

static const yytype_int16 yycheck[] =
{
      27,    28,    29,    30,    31,    76,    58,    59,    60,    61,
      81,    13,    71,    13,     8,     3,    13,    11,   106,   107,
       4,    35,     6,     7,     8,     9,     0,    11,    13,    36,
      37,    90,    91,     5,    36,    37,    36,    37,    10,    36,
      37,    11,    14,    16,     5,    13,    22,    99,    75,    76,
      32,    36,    37,    14,   142,    39,    83,   145,   146,   147,
     148,   149,    34,    13,   152,   136,    38,    39,    40,    41,
      42,    43,    44,    34,    18,    32,    17,    38,    39,    40,
      41,    42,    43,    44,     5,   156,    36,    37,     5,    13,
      15,    20,     4,    14,     6,     7,     4,    14,     6,     7,
       8,     9,    29,    11,    19,     0,    25,    21,     3,    25,
     137,    13,    36,    34,   185,   186,   187,    34,    13,    40,
      41,    42,    43,    44,   195,    42,    43,    44,    35,   156,
     182,    39,    23,    13,    35,    35,    35,    35,    35,   166,
      35,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      35,    25,    33,    35,    28,    29,    30,    31,    32,    35,
      13,     8,    35,    35,    35,     6,    12,    12,    35,     4,
       7,    13,     6,     6,    36,    13,    34,    13,     9,    35,
      24,    13,     6,    13,    13,    35,    35,    35,    13,    10,
      13,    13,    35,    13,     5,    35,    35,    13,    26,    26,
     163,    27,   156,    89,   157,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    46,    47,    48,    49,    35,     0,    47,    28,
      30,    31,    50,    54,    55,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    68,    69,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    11,    13,    16,    18,
      22,    32,    32,    17,    15,     8,    11,    52,    52,    52,
      52,    52,    20,    29,    19,    21,    23,    25,    25,    13,
      35,    35,    35,    35,    35,    35,    35,    33,    53,    73,
      74,    73,    73,    73,    73,    35,    13,    35,    13,    35,
      35,    35,     4,     6,     7,    56,    57,    76,     8,    12,
      12,    52,    67,     4,     6,     7,     9,    39,    51,    52,
      70,    72,    96,    97,    99,     6,    35,    75,     4,     6,
       7,    52,    96,     4,    52,     7,     6,     6,    96,    97,
      76,    76,    13,    36,    13,    13,    73,     9,    13,    36,
      51,    51,     5,    14,    34,    38,    39,    40,    41,    42,
      43,    44,    98,    13,    36,    37,    71,    34,    13,    13,
      24,    35,    35,    35,    96,    52,    35,    10,    51,    51,
      51,    51,    51,    51,    51,    70,    75,     6,    26,    26,
      56,    13,    10,    52,    13,    35,    35,    73,    96,    96,
      96,    35,    13,    13,    27,    35,    96,    13
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 34 "BMM_Parser.y"
    {
                CurrentState = 6;
                printf("identified program\n");
        }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 41 "BMM_Parser.y"
    {
                CurrentState = 7;
                printf("identified lines\n");
        }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 50 "BMM_Parser.y"
    {
                CurrentState = 5;
                LineNumber = (yyvsp[(1) - (3)]);
                printf("identified endline\n");
        }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 58 "BMM_Parser.y"
    {
                LineNumber = (yyvsp[(1) - (3)]);
                CurrentState = 8;
                printf("%d\n",(yyvsp[(1) - (3)]));
                printf("identified line\n");
        }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 93 "BMM_Parser.y"
    {
                printf("%d : %d\n", (yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));
                (yyval) = (yyvsp[(1) - (2)]);
                printf("varbefore typeset %d\n", (yyval));
                TypeSet((yyval), (yyvsp[(2) - (2)]));
                printf("varafter typeset %d\n", (yyval));
                printf("%d is type ",VarStatus[(yyvsp[(1) - (2)])]);
                {printf("wazoo\n");}
        }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 103 "BMM_Parser.y"
    {       
                (yyval) = (yyvsp[(1) - (1)]);
                TypeSet((yyval), '%');
                {printf("wazoo2\n");}
        }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 111 "BMM_Parser.y"
    {
                (yyval)=(yyvsp[(1) - (1)]);
        }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 115 "BMM_Parser.y"
    {
                (yyval)='%'; {printf("erased\n");}
        }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 126 "BMM_Parser.y"
    { CurrentState = 2; }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 141 "BMM_Parser.y"
    {
                printf("hello i let'd\n");
                CurrentState = 4;
        }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 146 "BMM_Parser.y"
    {printf("hello i let'd\n");}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 152 "BMM_Parser.y"
    {
                CurrentState=23;
        }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 156 "BMM_Parser.y"
    {
                TypeSet((yyvsp[(3) - (5)]), '%');
        }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 163 "BMM_Parser.y"
    {
                CurrentState = 3;
                
        }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 168 "BMM_Parser.y"
    {
                CurrentState = 3;
        }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 177 "BMM_Parser.y"
    {
                CurrentState = 11;
        }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 189 "BMM_Parser.y"
    {
                CurrentState = 12;
        }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 216 "BMM_Parser.y"
    {printf("wow\n");}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 216 "BMM_Parser.y"
    {printf("collpasinf eq tmt\n");}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 222 "BMM_Parser.y"
    {
                printf("assignning atm 5\n");
                CurrentState=20;
        }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 227 "BMM_Parser.y"
    {
                printf("hello\n");
                printf("dollar1: %d",(yyvsp[(1) - (4)]));
                if (TypeCheck((yyvsp[(2) - (4)]), 2))
                {
                        yyerror("Error");
                } //int
                printf("hello\n");
        }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 236 "BMM_Parser.y"
    {
                printf("assignning atm 1\n");
                CurrentState=9;
        }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 241 "BMM_Parser.y"
    {
                if (TypeCheck((yyvsp[(1) - (4)]), 2))
                {
                        yyerror("Error");
                } //int
        }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 247 "BMM_Parser.y"
    {
                printf("assignning atm 2\n");
                CurrentState=10;
        }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 252 "BMM_Parser.y"
    {       
                if (TypeCheck((yyvsp[(1) - (4)]), 1))
                {
                        yyerror("Error");
                } //string
        }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 258 "BMM_Parser.y"
    {
                printf("assignning atm 3\n");
                CurrentState=12;
        }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 263 "BMM_Parser.y"
    {
                if (VarStatus[(yyvsp[(3) - (4)])]==0)
                {
                        yyerror("Error");
                } //invalid variable assigned
                else if (VarStatus[(yyvsp[(3) - (4)])]==VarStatus[(yyvsp[(1) - (4)])])
                {
                        //no error
                }
                else if ((VarStatus[(yyvsp[(3) - (4)])]==2) || (VarStatus[(yyvsp[(3) - (4)])]==3) || (VarStatus[(yyvsp[(3) - (4)])]==4) )
                {       
                        if ((VarStatus[(yyvsp[(1) - (4)])]==2) || (VarStatus[(yyvsp[(1) - (4)])]==3) || (VarStatus[(yyvsp[(1) - (4)])]==4))
                        {
                                //no error.
                        }
                        else
                        {
                                printf("assignning atm 4\n");
                                CurrentState = 22;
                                yyerror("Error");
                        }
                } //invalid variable assigned
        }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 286 "BMM_Parser.y"
    {
                printf("assignning atm 6\n");
                CurrentState=20;
        }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 291 "BMM_Parser.y"
    {
                if (TypeCheck((yyvsp[(1) - (4)]), 2) || TypeCheck((yyvsp[(1) - (4)]), 3) || TypeCheck((yyvsp[(1) - (4)]), 4))
                {
                        yyerror("Error");
                } //float
        }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 301 "BMM_Parser.y"
    {
                CurrentState=13;
                GoSub = 1;
        }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 309 "BMM_Parser.y"
    {
                if (GoSub != 1)
                {       
                        CurrentState=15;
                        yyerror("Error");
                }
                else GoSub=0;
        }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 322 "BMM_Parser.y"
    {
                CurrentState=14;
        }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 330 "BMM_Parser.y"
    {
                CurrentState=16;
        }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 339 "BMM_Parser.y"
    {
                CurrentState=17;
        }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 348 "BMM_Parser.y"
    {
                CurrentState=18;
        }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 353 "BMM_Parser.y"
    {
                CurrentState=19;
        }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 361 "BMM_Parser.y"
    {
                
        }
    break;



/* Line 1455 of yacc.c  */
#line 1975 "y.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 389 "BMM_Parser.y"




//function that sets the type of a variable to the respective type.
int TypeSet(int ind, char str1) {
        int type=0;
        switch (str1)
        {
                case '$': type=1; break; //string
                case '%': type=2; break; //int
                case '!': type=3; break; //single precision
                case '#': type=4; break; //double precision
        }
        VarStatus[ind] = type;
        return 0;
}

//function that checks whether variable called 'str' is of 'type'. [0 for ture, 1 for false]
int TypeCheck(int ind, int type)
{       
        
        /* if (VarStatus[ind] == type)
        {
                return 0;
        }
        else return 1; */

        printf("%d : %d\n", VarStatus[ind], type);
        if (VarStatus[ind]==0) {return 1;}
        if ((VarStatus[ind]==1) && (type!=1)) {return 1;}
        else return 0;
        
}
void yyerror(const char* str)
{
        switch (CurrentState)
        {
                case 1: printf("Error in LINE %d: LOWERCASE VALUES NOT PERMITTED.\n",LineNumber);break;
                case 2: printf("Error in LINE %d: DATA Statement must be in the form: DATA value1, value2, ..., valueN\n",LineNumber);break;
                case 3: printf("Error in LINE %d: DEF expected FNX and assignment.\n",LineNumber);break;
                case 4: printf("Error in LINE %d: LET expected assignment statement.\n",LineNumber);break;
                case 5: printf("Error in LINE %d: END expected.\n",LineNumber);break;
                case 6: printf("Syntax error: END expected.\n");break;
                case 7: printf("Syntax error: Line expected.\n");break;
                case 8: printf("Syntax error: Expected <line number><statement><\\n>\n");break;
                case 9: printf("Error in LINE %d: Cannot assign number to incompatible variable.\n", LineNumber);break;
                case 10: printf("Error in LINE %d: Cannot assign string to incompatible variable.\n", LineNumber);break;
                case 11: printf("Error in LINE %d: INPUT Statement must be in the form: INPUT value1, value2, ..., valueN\n",LineNumber);break;
                case 12: printf("Error in LINE %d: PRINT Statement must be in the form: PRINT value1, value2, ..., valueN\n",LineNumber);break;
                case 13: printf("Error in LINE %d: GOSUB expected Line Number.\n",LineNumber);break;
                case 14: printf("Error in LINE %d: GOTO expected Line Number.\n",LineNumber);break;
                case 15: printf("Error in LINE %d: Fatal, RETURN called without corresponding GOSUB.\n",LineNumber); break;
                case 16: printf("Error in LINE %d: Expected all capitals comment.\n",LineNumber);break;
                case 17: printf("Error in LINE %d: Expected IF <Relational Comparison> THEN LINE_NUMBER\n",LineNumber); break;
                case 18: printf("Error in LINE %d: Expected FOR <Assignment> TO <Arithmetic Expression> [STEP <Arithmetic Expression>].",LineNumber);break;
                case 19: printf("Error in LINE %d: Expected FOR <Assignment> TO <Arithmetic Expression>\n",LineNumber);break;
                case 20: printf("Error in LINE %d: Assigned Number to string variable.\n", LineNumber); break;
                case 21: printf("Error in LINE %d: Undeclared identifier used.\n", LineNumber); break;
                case 22: printf("Error in LINE %d: Incompatible identifier assigned to variable.\n", LineNumber); break;
                case 23: printf("Error in LINE %d: Expected DIM var1(number), etc.\n",LineNumber);break;
                default: printf("Syntax error %d.\n",LineNumber);
        }
}
int yywrap(void)
{
    return 1;
}
int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);
    printf("Parsing Complete.\n");
    return 0;
}
