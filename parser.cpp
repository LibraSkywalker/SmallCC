/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */
  
	#include<stdio.h>  
	#include<stdlib.h>  
	#include<string>
	#include"ConstHeader.h"
	#include"AST.h"
	#define YYDEBUG 1  
	int yylex(void);
	int yyerror(char const *str) ;
	extern EventList* Globe;

#line 78 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
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
#line 13 "parser.y" /* yacc.c:355  */

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

#line 196 "parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 211 "parser.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   545

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  183

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    79,    82,    83,    84,    87,    91,    92,
      95,    99,   102,   103,   106,   110,   113,   117,   119,   120,
     121,   122,   125,   127,   130,   135,   139,   143,   147,   150,
     151,   152,   153,   154,   155,   159,   160,   162,   163,   164,
     167,   168,   171,   176,   177,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   223,   225,   229,   232,
     236,   239,   240
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "ID", "TYPE", "READ", "WRITE",
  "ASSIGN", "PLUSASSIGN", "MINUSASSIGN", "MULTIPLYASSIGN", "DIVIDEASSIGN",
  "ANDASSIGN", "XORASSIGN", "ORASSIGN", "LSHIFTASSIGN", "RSHIFTASSIGN",
  "OR", "AND", "BOR", "BXOR", "BAND", "SEQ", "SNE", "SLT", "SLE", "SGT",
  "SGE", "SHL", "SHR", "ADD", "SUB", "MUL", "DIV", "MOD", "INC", "DEC",
  "NOT", "BNOT", "DOT", "SEMI", "COMMA", "LB", "RB", "LC", "RC", "LP",
  "RP", "STRUCT", "RETURN", "IF", "ELSE", "BREAK", "CONT", "FOR",
  "$accept", "program", "event", "typeDeclare", "attributeDeclare",
  "VariableDeclare", "uninitializedVariables", "variables", "variable",
  "array", "functionDeclare", "parameters", "Statements", "Statement",
  "blockStatement", "jumpStatement", "branchStatement", "loopStatement",
  "expressionX", "expression", "emptyexpression", "arrs", "arguments",
  "buildInFunction", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310
};
# endif

#define YYPACT_NINF -167

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-167)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      24,     6,    38,    25,    24,    82,  -167,  -167,    -4,   -13,
     -11,    27,    -8,    36,  -167,  -167,    42,  -167,    44,   186,
     186,    28,  -167,  -167,   102,    63,    36,   105,    69,   105,
    -167,  -167,   -34,  -167,  -167,   186,   186,   186,   186,   186,
     186,   448,    80,   308,   106,    86,    84,    -3,  -167,   186,
      87,    99,  -167,  -167,   138,   159,  -167,    83,  -167,  -167,
    -167,  -167,   226,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   100,   110,    75,  -167,    86,   345,   107,  -167,
      36,  -167,  -167,   108,  -167,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   465,   481,   496,   510,    64,
     237,   237,   116,   116,   116,   116,    70,    70,    83,    83,
    -167,  -167,  -167,   109,  -167,   149,   102,  -167,   186,   111,
     119,   120,   125,   105,  -167,   121,   132,  -167,  -167,  -167,
    -167,   380,  -167,   186,  -167,  -167,  -167,  -167,  -167,   414,
     186,  -167,  -167,   186,  -167,  -167,  -167,  -167,  -167,   267,
     133,   448,  -167,   132,   186,   123,   135,   132,   186,  -167,
     130,   132,  -167
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     0,     5,     6,    18,     0,
      17,    19,     8,     0,     1,     2,    15,     4,     0,     0,
       0,     0,    22,    12,     0,     0,     0,     0,     0,     0,
      13,    45,    46,    91,    92,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,    18,    16,     0,
       0,     0,     9,    14,     0,     0,    49,    53,    56,    57,
      54,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    26,     0,    24,     0,    90,     0,     7,
      11,    48,    52,     0,    47,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    75,    74,    73,    72,    71,
      69,    70,    67,    68,    65,    66,    63,    64,    61,    62,
      58,    59,    60,     0,    87,     0,     0,    36,     0,     0,
       0,     0,     0,     0,    30,     0,    28,    31,    33,    32,
      29,     0,    23,     0,    21,    10,    51,    50,    25,     0,
       0,    38,    37,    86,    35,    27,    34,    89,    39,     0,
       0,    43,    44,     0,    86,    41,     0,     0,    86,    40,
       0,     0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,   169,  -167,     8,   -23,    22,     5,   156,  -167,  -167,
    -167,    49,    48,  -166,   -21,  -167,  -167,  -167,  -151,   -19,
    -167,   -18,   -53,  -167
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,   143,    28,   144,    18,     9,    10,    11,
       7,    46,   145,   146,   147,   148,   149,   150,   170,   151,
     172,    22,    98,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      41,    43,   103,    50,    19,    19,    54,   175,     5,    20,
       8,   179,     5,    55,    56,   182,    57,    58,    59,    60,
      61,    62,     6,   176,    95,    14,     6,   180,    23,     1,
      97,    24,    51,    44,    53,    25,    97,    26,   133,    20,
      20,    27,    12,    21,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,    97,     2,   134,   152,    45,   155,    31,    32,
     136,    33,    34,    13,    29,    30,    16,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
     167,    86,    87,    88,    89,    90,    47,    35,    49,    16,
      93,    36,    37,    38,    39,    52,    88,    89,    90,   159,
      94,   137,    40,    17,     2,   138,   139,    91,   140,   141,
     142,    94,    96,    99,    97,    31,    32,   136,    33,    34,
     100,   169,   101,    20,   171,    84,    85,    86,    87,    88,
      89,    90,   135,   154,    44,   171,   156,   157,   160,   171,
     161,   162,    31,    32,    35,    33,    34,   164,    36,    37,
      38,    39,   163,    15,   174,   177,   178,    94,   181,    40,
      48,     2,   138,   139,   158,   140,   141,   142,     0,    31,
      32,    35,    33,    34,   165,    36,    37,    38,    39,     0,
       0,     0,     0,     0,     0,     0,    40,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,    36,    37,    38,    39,     0,     0,     0,     0,
       0,     0,     0,    40,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,   104,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   173,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     0,     0,     0,     0,     0,     0,
       0,     0,    92,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     0,     0,     0,     0,     0,     0,   153,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,     0,     0,     0,     0,
       0,   166,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       0,     0,     0,     0,     0,   168,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

static const yytype_int16 yycheck[] =
{
      19,    20,    55,    26,     8,     8,    40,   173,     0,    43,
       4,   177,     4,    47,    32,   181,    35,    36,    37,    38,
      39,    40,     0,   174,    45,     0,     4,   178,    41,     5,
      49,    42,    27,     5,    29,     8,    55,    45,    91,    43,
      43,     5,     4,    47,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    49,    92,    96,    48,   100,     3,     4,
       5,     6,     7,    45,    42,    41,     4,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     153,    31,    32,    33,    34,    35,     4,    32,    45,     4,
       4,    36,    37,    38,    39,    46,    33,    34,    35,   138,
      45,    46,    47,    41,    49,    50,    51,    47,    53,    54,
      55,    45,    48,    46,   153,     3,     4,     5,     6,     7,
      41,   160,     4,    43,   163,    29,    30,    31,    32,    33,
      34,    35,    42,    46,     5,   174,    48,    48,    47,   178,
      41,    41,     3,     4,    32,     6,     7,    46,    36,    37,
      38,    39,    47,     4,    41,    52,    41,    45,    48,    47,
      24,    49,    50,    51,   135,    53,    54,    55,    -1,     3,
       4,    32,     6,     7,   146,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    48,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    49,    57,    58,    59,    61,    66,     4,    63,
      64,    65,     4,    45,     0,    57,     4,    41,    62,     8,
      43,    47,    77,    41,    42,     8,    45,     5,    60,    42,
      41,     3,     4,     6,     7,    32,    36,    37,    38,    39,
      47,    75,    79,    75,     5,    48,    67,     4,    63,    45,
      60,    62,    46,    62,    40,    47,    77,    75,    75,    75,
      75,    75,    75,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    47,    44,     4,    45,    70,    48,    75,    78,    46,
      41,     4,    48,    78,    48,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    78,    77,    42,     5,    46,    50,    51,
      53,    54,    55,    59,    61,    68,    69,    70,    71,    72,
      73,    75,    70,    42,    46,    60,    48,    48,    67,    75,
      47,    41,    41,    47,    46,    68,    41,    78,    41,    75,
      74,    75,    76,    48,    41,    69,    74,    52,    41,    69,
      74,    48,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    58,    58,    58,    59,    59,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    64,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    69,    69,    69,    69,    70,    70,    71,    71,    71,
      72,    72,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    76,    77,    77,    78,
      78,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     5,     2,     4,
       4,     3,     3,     3,     3,     1,     3,     1,     1,     1,
       3,     5,     2,     6,     5,     4,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     2,     2,     3,
       7,     5,     9,     1,     1,     1,     1,     3,     3,     2,
       4,     4,     3,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     0,     4,     3,     3,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 75 "parser.y" /* yacc.c:1646  */
    {
    (yyval.eventlist_value) = (yyvsp[0].eventlist_value);
    (yyval.eventlist_value)->insert((yyvsp[-1].event_value));
}
#line 1494 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "parser.y" /* yacc.c:1646  */
    {Globe = (yyval.eventlist_value) = new EventList((yyvsp[0].event_value));}
#line 1500 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 82 "parser.y" /* yacc.c:1646  */
    {(yyval.event_value) = (yyvsp[-1].type_value);}
#line 1506 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 83 "parser.y" /* yacc.c:1646  */
    {(yyval.event_value) = (yyvsp[0].declare_value);}
#line 1512 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 84 "parser.y" /* yacc.c:1646  */
    {(yyval.event_value) = (yyvsp[0].function_value);}
#line 1518 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 87 "parser.y" /* yacc.c:1646  */
    {
    (yyval.type_value) = (yyvsp[-1].type_value);
    (yyval.type_value)->getName(*(yyvsp[-3].string_value));
}
#line 1527 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 91 "parser.y" /* yacc.c:1646  */
    {(yyval.type_value) = new Type(*(yyvsp[0].string_value));}
#line 1533 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 92 "parser.y" /* yacc.c:1646  */
    {(yyval.type_value) = (yyvsp[-1].type_value);}
#line 1539 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 95 "parser.y" /* yacc.c:1646  */
    {
    (yyval.type_value) = (yyvsp[0].type_value);
    (yyval.type_value)->insert(new Declaration(*(yyvsp[-3].string_value),*(yyvsp[-2].varlist_value)));
}
#line 1548 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 99 "parser.y" /* yacc.c:1646  */
    {(yyval.type_value) = new Type(new Declaration(*(yyvsp[-2].string_value),*(yyvsp[-1].varlist_value)));}
#line 1554 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 102 "parser.y" /* yacc.c:1646  */
    {(yyval.declare_value) = new Declaration(*(yyvsp[-2].string_value),*(yyvsp[-1].varlist_value));}
#line 1560 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 103 "parser.y" /* yacc.c:1646  */
    {(yyval.declare_value) = new Declaration((yyvsp[-2].type_value),*(yyvsp[-1].varlist_value));}
#line 1566 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 106 "parser.y" /* yacc.c:1646  */
    {
    (yyval.varlist_value) = (yyvsp[0].varlist_value);
    (yyval.varlist_value)->insert(new Variable(*(yyvsp[-2].string_value)));
}
#line 1575 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 110 "parser.y" /* yacc.c:1646  */
    {(yyval.varlist_value) = new VariableList(new Variable(*(yyvsp[0].string_value)));}
#line 1581 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 113 "parser.y" /* yacc.c:1646  */
    {
    (yyval.varlist_value) = (yyvsp[0].varlist_value);
    (yyval.varlist_value)->insert((yyvsp[-2].variable_value));
}
#line 1590 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 117 "parser.y" /* yacc.c:1646  */
    {(yyval.varlist_value) = new VariableList((yyvsp[0].variable_value));}
#line 1596 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 119 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_value) = new Variable(*(yyvsp[0].string_value));}
#line 1602 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 120 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_value) = (yyvsp[0].array_value);}
#line 1608 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 121 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_value) = new InitVariable(*(yyvsp[-2].string_value),(yyvsp[0].expression_value),ASSIGN_OP);}
#line 1614 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 122 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_value) = new InitArrayVariable(*(yyvsp[-4].array_value),*(yyvsp[-1].expressionlist_value),ASSIGN_OP);}
#line 1620 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 125 "parser.y" /* yacc.c:1646  */
    {(yyval.array_value) = new ArrayVariable(*(yyvsp[-1].string_value),*(yyvsp[0].expressionlist_value));}
#line 1626 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 127 "parser.y" /* yacc.c:1646  */
    {
    (yyval.function_value) = new Function(*(yyvsp[-5].string_value),*(yyvsp[-4].string_value),*(yyvsp[-2].varlist_value),(yyvsp[0].block_value));
}
#line 1634 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 130 "parser.y" /* yacc.c:1646  */
    {
	(yyval.function_value) = new Function(*(yyvsp[-4].string_value),*(yyvsp[-3].string_value),(yyvsp[0].block_value));
}
#line 1642 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 135 "parser.y" /* yacc.c:1646  */
    {
    (yyval.varlist_value) = (yyvsp[0].varlist_value);
    (yyval.varlist_value)->insert(new Variable(*(yyvsp[-3].string_value),*(yyvsp[-2].string_value)));
}
#line 1651 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval.varlist_value) = new VariableList(new Variable(*(yyvsp[-1].string_value),*(yyvsp[0].string_value)));}
#line 1657 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 143 "parser.y" /* yacc.c:1646  */
    {
    (yyval.eventlist_value) = (yyvsp[0].eventlist_value);
    (yyval.eventlist_value)->insert((yyvsp[-1].statement_value));
}
#line 1666 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 147 "parser.y" /* yacc.c:1646  */
    {(yyval.eventlist_value) = new EventList((yyvsp[0].statement_value));}
#line 1672 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 150 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_value) = (yyvsp[0].loop_value);}
#line 1678 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 151 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_value) = (yyvsp[0].declare_value);}
#line 1684 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_value) = (yyvsp[0].block_value);}
#line 1690 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 153 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_value) = (yyvsp[0].branch_value);}
#line 1696 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_value) = (yyvsp[0].jump_value);}
#line 1702 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 155 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_value) = (yyvsp[-1].expression_value);}
#line 1708 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 159 "parser.y" /* yacc.c:1646  */
    {(yyval.block_value) = new BlockStatement(*(yyvsp[-1].eventlist_value));}
#line 1714 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 160 "parser.y" /* yacc.c:1646  */
    {(yyval.block_value) = new BlockStatement();}
#line 1720 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 162 "parser.y" /* yacc.c:1646  */
    {(yyval.jump_value) = new JumpStatement(CONT_OP);}
#line 1726 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 163 "parser.y" /* yacc.c:1646  */
    {(yyval.jump_value) = new JumpStatement(BREAK_OP);}
#line 1732 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 164 "parser.y" /* yacc.c:1646  */
    {(yyval.jump_value) = new JumpStatement((yyvsp[-1].expression_value));}
#line 1738 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.branch_value) = new BranchStatement((yyvsp[-4].expression_value),(yyvsp[-2].statement_value),(yyvsp[0].statement_value));}
#line 1744 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.branch_value) = new BranchStatement((yyvsp[-2].expression_value),(yyvsp[0].statement_value));}
#line 1750 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 171 "parser.y" /* yacc.c:1646  */
    {
        (yyval.loop_value) = new LoopStatement((yyvsp[-6].expression_value),(yyvsp[-4].expression_value),(yyvsp[-2].expression_value),(yyvsp[0].statement_value));
}
#line 1758 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 176 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = (yyvsp[0].expression_value);}
#line 1764 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = (yyvsp[0].expression_value);}
#line 1770 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new Literal((yyvsp[0].int_value));}
#line 1776 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 181 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new Variable(*(yyvsp[0].string_value));}
#line 1782 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = (yyvsp[-1].expression_value);}
#line 1788 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new Attribute(*(yyvsp[-2].string_value),*(yyvsp[0].string_value));}
#line 1794 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 184 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new ArrayVariable(*(yyvsp[-1].string_value),*(yyvsp[0].expressionlist_value));}
#line 1800 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 185 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new FunctionCall(*(yyvsp[-3].string_value),*(yyvsp[-1].expressionlist_value));}
#line 1806 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 186 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new FunctionCall(*(yyvsp[-3].string_value),*(yyvsp[-1].expressionlist_value));}
#line 1812 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new FunctionCall(*(yyvsp[-2].string_value));}
#line 1818 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new UnaryExpression((yyvsp[0].expression_value),NEG_OP);}
#line 1824 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new UnaryExpression((yyvsp[0].expression_value),NOT_OP);}
#line 1830 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 190 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new UnaryExpression((yyvsp[0].expression_value),BIT_NOT_OP);}
#line 1836 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 191 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new UnaryExpression((yyvsp[0].expression_value),INC_OP);}
#line 1842 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 192 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new UnaryExpression((yyvsp[0].expression_value),DEC_OP);}
#line 1848 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),MUL_OP);}
#line 1854 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 194 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),DIV_OP);}
#line 1860 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 195 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),MOD_OP);}
#line 1866 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 196 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),ADD_OP);}
#line 1872 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),SUB_OP);}
#line 1878 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),SHL_OP);}
#line 1884 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),SHR_OP);}
#line 1890 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),SGT_OP);}
#line 1896 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),SGE_OP);}
#line 1902 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),SLT_OP);}
#line 1908 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),SLE_OP);}
#line 1914 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),SEQ_OP);}
#line 1920 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 205 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),SNE_OP);}
#line 1926 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 206 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),BIT_AND_OP);}
#line 1932 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 207 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),BIT_XOR_OP);}
#line 1938 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 208 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),BIT_OR_OP);}
#line 1944 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 209 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),AND_OP);}
#line 1950 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 210 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),OR_OP);}
#line 1956 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 211 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),ASSIGN_OP);}
#line 1962 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 212 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),PLUS_ASSIGN_OP);}
#line 1968 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),MINUS_ASSIGN_OP);}
#line 1974 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 214 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),MULTIPLY_ASSIGN_OP);}
#line 1980 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 215 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),DIVIDE_ASSIGN_OP);}
#line 1986 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 216 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),AND_ASSIGN_OP);}
#line 1992 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 217 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),XOR_ASSIGN_OP);}
#line 1998 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 218 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),OR_ASSIGN_OP);}
#line 2004 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 219 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),SHL_ASSIGN_OP);}
#line 2010 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression((yyvsp[-2].expression_value),(yyvsp[0].expression_value),SHR_ASSIGN_OP);}
#line 2016 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 223 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new Literal(1);}
#line 2022 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 225 "parser.y" /* yacc.c:1646  */
    {
    (yyval.expressionlist_value) = (yyvsp[0].expressionlist_value);
    (yyval.expressionlist_value)->insert((yyvsp[-2].expression_value));
}
#line 2031 "parser.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.expressionlist_value) = new ExpressionList((yyvsp[-1].expression_value));}
#line 2037 "parser.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 232 "parser.y" /* yacc.c:1646  */
    {
    (yyval.expressionlist_value) = (yyvsp[0].expressionlist_value);
    (yyval.expressionlist_value)->insert((yyvsp[-2].expression_value));
}
#line 2046 "parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 236 "parser.y" /* yacc.c:1646  */
    {(yyval.expressionlist_value) = new ExpressionList((yyvsp[0].expression_value));}
#line 2052 "parser.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 239 "parser.y" /* yacc.c:1646  */
    {(yyval.string_value) = (yyvsp[0].string_value);}
#line 2058 "parser.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 240 "parser.y" /* yacc.c:1646  */
    {(yyval.string_value) = (yyvsp[0].string_value);}
#line 2064 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2068 "parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 244 "parser.y" /* yacc.c:1906  */

int yyerror(char const *str)  
{  
    extern char *yytext;  
    extern int yylineno;
	cout << "Error." << endl;
    fprintf(stderr,"parser error near %s on line %d\n",yytext,yylineno);  
    return 0;  
}  
