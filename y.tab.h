
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
     SEMICOLON = 292,
     SUB_OP = 293,
     ADD_OP = 294,
     DIV_OP = 295,
     MUL_OP = 296,
     POW_OP = 297
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
#define SUB_OP 293
#define ADD_OP 294
#define DIV_OP 295
#define MUL_OP 296
#define POW_OP 297




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


