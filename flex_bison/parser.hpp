/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_LAMBDA = 258,                /* T_LAMBDA  */
    T_ASSIGN = 259,                /* T_ASSIGN  */
    T_IF = 260,                    /* T_IF  */
    T_LOOP = 261,                  /* T_LOOP  */
    T_ELSE = 262,                  /* T_ELSE  */
    T_IDENTIFIER = 263,            /* T_IDENTIFIER  */
    T_INT = 264,                   /* T_INT  */
    T_STRING = 265,                /* T_STRING  */
    T_VAR = 266,                   /* T_VAR  */
    T_EQUAL = 267,                 /* T_EQUAL  */
    T_AND = 268,                   /* T_AND  */
    T_OR = 269,                    /* T_OR  */
    T_MUNDIAL = 270,               /* T_MUNDIAL  */
    T_CORINTHIANS = 271,           /* T_CORINTHIANS  */
    T_PALMEIRAS = 272,             /* T_PALMEIRAS  */
    T_TITE = 273,                  /* T_TITE  */
    T_DUILIO = 274,                /* T_DUILIO  */
    T_DOT = 275,                   /* T_DOT  */
    T_RENATO = 276,                /* T_RENATO  */
    T_MENEZES = 277,               /* T_MENEZES  */
    T_FECHADO = 278,               /* T_FECHADO  */
    T_MINTIRA = 279,               /* T_MINTIRA  */
    T_VDD = 280,                   /* T_VDD  */
    T_FAKE = 281,                  /* T_FAKE  */
    T_NOT = 282,                   /* T_NOT  */
    T_NUMBER = 283,                /* T_NUMBER  */
    T_STRING_LITERAL = 284         /* T_STRING_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
