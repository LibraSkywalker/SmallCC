/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    ID = 259,
    TYPE = 260,
    READ = 261,
    WRITE = 262,
    ASSIGN = 263,
    PLUSASSIGN = 264,
    MINUSASSIGN = 265,
    MULTIPLYASSIGN = 266,
    DIVIDEASSIGN = 267,
    ANDASSIGN = 268,
    XORASSIGN = 269,
    ORASSIGN = 270,
    LSHIFTASSIGN = 271,
    RSHIFTASSIGN = 272,
    OR = 273,
    AND = 274,
    BOR = 275,
    BXOR = 276,
    BAND = 277,
    SEQ = 278,
    SNE = 279,
    SLT = 280,
    SLE = 281,
    SGT = 282,
    SGE = 283,
    SHL = 284,
    SHR = 285,
    ADD = 286,
    SUB = 287,
    MUL = 288,
    DIV = 289,
    MOD = 290,
    INC = 291,
    DEC = 292,
    NOT = 293,
    BNOT = 294,
    DOT = 295,
    SEMI = 296,
    COMMA = 297,
    LB = 298,
    RB = 299,
    LC = 300,
    RC = 301,
    LP = 302,
    RP = 303,
    STRUCT = 304,
    RETURN = 305,
    IF = 306,
    ELSE = 307,
    BREAK = 308,
    CONT = 309,
    FOR = 310
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 13 "parser.y" /* yacc.c:1909  */

	int int_value;
	std::string* string_value;
	class Expression* expression_value;
	class ExpressionList* expressionlist_value;
	class ArgumentList* argument_value;
	class BranchStatement* branch_value;
	class JumpStatement* jump_value;
	class LoopStatement* loop_value;
	class BlockStatement* block_value;
	class Statement* statement_value;
	class Statement* event_value;
	class EventList* eventlist_value;
	class ParameterList* parameter_value;
	class ArrayVariable* array_value;
	class Function* function_value;
	class Variable* variable_value;
	class VariableList* varlist_value;
	class Declaration* declare_value;
	class Type* type_value;

#line 132 "parser.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
