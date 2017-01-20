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
    SEMI = 261,
    COMMA = 262,
    DOT = 263,
    ASSIGN = 264,
    BITAND = 265,
    BITXOR = 266,
    BITOR = 267,
    LOGICAND = 268,
    LOGICOR = 269,
    NEGATIVE = 270,
    SELFTUNE = 271,
    LB = 272,
    RB = 273,
    LC = 274,
    RC = 275,
    LP = 276,
    RP = 277,
    STRUCT = 278,
    RETURN = 279,
    IF = 280,
    ELSE = 281,
    BREAK = 282,
    CONT = 283,
    FOR = 284,
    READ = 285,
    WRITE = 286,
    SEQ = 287,
    SNE = 288,
    SLT = 289,
    SLE = 290,
    SGT = 291,
    SGE = 292,
    SHL = 293,
    SHR = 294,
    ADD = 295,
    AND = 296,
    BAND = 297,
    BNOT = 298,
    BXOR = 299,
    BOR = 300,
    DIV = 301,
    DIVIDEASSIGN = 302,
    MINUSASSIGN = 303,
    INC = 304,
    DEC = 305,
    MOD = 306,
    MUL = 307,
    MULTIPLYASSIGN = 308,
    NOT = 309,
    OR = 310,
    PLUSASSIGN = 311,
    SUB = 312,
    THEN = 313
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

#line 199 "parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "parser.cpp" /* yacc.c:358  */

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
#define YYLAST   483

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  151

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

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
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    63,    63,    67,    70,    71,    72,    75,    79,    80,
      83,    87,    90,    91,    94,    98,   101,   105,   107,   108,
     109,   110,   113,   115,   118,   123,   127,   131,   135,   138,
     139,   140,   141,   142,   146,   147,   149,   150,   151,   154,
     155,   158,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   186,   190,   193,   197,   200,   201,   203,   204,   205,
     207,   208,   211,   212,   213,   217,   218,   222,   223,   224,
     225,   228,   229,   233,   234,   235,   236,   237
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "ID", "TYPE", "SEMI", "COMMA",
  "DOT", "ASSIGN", "BITAND", "BITXOR", "BITOR", "LOGICAND", "LOGICOR",
  "NEGATIVE", "SELFTUNE", "LB", "RB", "LC", "RC", "LP", "RP", "STRUCT",
  "RETURN", "IF", "ELSE", "BREAK", "CONT", "FOR", "READ", "WRITE", "SEQ",
  "SNE", "SLT", "SLE", "SGT", "SGE", "SHL", "SHR", "ADD", "AND", "BAND",
  "BNOT", "BXOR", "BOR", "DIV", "DIVIDEASSIGN", "MINUSASSIGN", "INC",
  "DEC", "MOD", "MUL", "MULTIPLYASSIGN", "NOT", "OR", "PLUSASSIGN", "SUB",
  "THEN", "$accept", "program", "event", "typeDeclare", "attributeDeclare",
  "VariableDeclare", "uninitializedVariables", "variables", "variable",
  "array", "functionDeclare", "parameters", "Statements", "Statement",
  "blockStatement", "jumpStatement", "branchStatement", "loopStatement",
  "expression", "arrs", "arguments", "shift", "negative", "selftune",
  "calculate_ONE", "calculate_TWO", "compare_ONE", "compare_TWO", "assign", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

#define YYPACT_NINF -107

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-107)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,     9,     4,    20,     5,    10,  -107,  -107,    -6,    15,
      17,    37,     8,    27,  -107,  -107,    29,  -107,    31,  -107,
      96,     7,  -107,  -107,  -107,  -107,  -107,    96,  -107,    36,
      25,    27,    41,    40,    41,  -107,  -107,    14,    96,  -107,
    -107,  -107,  -107,  -107,   312,    96,    96,    47,    49,    34,
     426,   101,  -107,    96,    50,    65,  -107,  -107,    68,    96,
    -107,   352,    59,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,    96,    96,    96,    96,  -107,  -107,  -107,    96,
    -107,    96,    96,    96,    96,    96,    96,   426,   426,    70,
      54,  -107,    49,   135,    60,  -107,    27,  -107,    64,  -107,
    -107,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,    82,  -107,    83,    96,    85,    86,    67,    74,
     109,  -107,  -107,  -107,  -107,   426,  -107,    96,  -107,  -107,
    -107,  -107,  -107,   271,  -107,  -107,    96,  -107,  -107,  -107,
     109,   186,    72,    96,   109,   237,  -107,    96,   392,   109,
    -107
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     0,     5,     6,    18,     0,
      17,    19,     8,     0,     1,     2,    15,     4,     0,    83,
       0,     0,    87,    85,    86,    84,    22,     0,    12,     0,
       0,     0,     0,     0,     0,    13,    42,    43,     0,    69,
      70,    71,    68,    67,     0,     0,     0,     0,     0,     0,
      20,    18,    16,     0,     0,     0,     9,    14,     0,     0,
      46,     0,    62,    81,    82,    79,    80,    77,    78,    65,
      66,    75,     0,     0,     0,     0,    73,    74,    72,     0,
      76,     0,     0,     0,     0,     0,     0,    48,    49,    26,
       0,    24,     0,    64,     0,     7,    11,    45,     0,    44,
      61,    58,    55,    56,    57,    59,    52,    50,    51,    53,
      54,    60,     0,    35,     0,     0,     0,     0,     0,     0,
      28,    30,    32,    31,    29,    33,    23,     0,    21,    10,
      47,    25,    38,     0,    37,    36,     0,    34,    27,    63,
       0,     0,    40,     0,     0,     0,    39,     0,     0,     0,
      41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -107,    92,  -107,  -107,   -29,  -107,   -15,    73,  -107,  -107,
    -107,   -11,   -14,  -106,   -44,  -107,  -107,  -107,   -20,   -32,
     -58,  -107,  -107,  -107,  -107,  -107,  -107,  -107,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    33,     6,    18,     9,    10,    11,
       7,    49,   119,   120,   121,   122,   123,   124,   125,    26,
      94,    81,    45,    46,    82,    83,    84,    85,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,    98,    54,    19,    91,    60,    27,    50,    12,    30,
       1,    20,    47,     8,    16,    21,    17,    55,    61,    57,
      14,    28,    58,    13,    29,    87,    88,    31,     2,    48,
     100,    20,    32,    93,   142,    59,    34,    35,   146,    93,
      51,    22,    23,   150,    53,    16,    19,    24,   126,    27,
      25,    89,   101,   102,   103,   104,    92,    36,    37,   105,
      56,   106,   107,   108,   109,   110,   111,   129,    90,   139,
      95,    96,    97,    90,   113,    38,    20,   112,   114,   115,
     128,   116,   117,   118,    22,    23,   130,    47,   136,   132,
      24,   134,   135,    25,   137,   133,    15,    39,   144,    36,
      37,   131,    52,    40,    41,     0,   138,    93,    42,     0,
      19,    43,    36,    37,     0,     0,   141,    38,    20,     0,
       0,     0,     0,   145,     0,     0,     0,   148,    90,     0,
      38,     0,     0,   114,   115,     0,   116,   117,   118,    39,
       0,     0,   127,     0,    19,    40,    41,     0,    22,    23,
      42,     0,    39,    43,    24,     0,     0,    25,    40,    41,
       0,     0,     0,    42,     0,     0,    43,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,    76,    22,    23,     0,     0,    77,    78,    24,     0,
      79,    25,    80,   143,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    22,    23,     0,     0,    77,    78,    24,
       0,    79,    25,    80,   147,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      19,    74,    75,    76,    22,    23,     0,     0,    77,    78,
      24,     0,    79,    25,    80,     0,     0,     0,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,    74,    75,    76,    22,    23,
       0,    19,    77,    78,    24,     0,    79,    25,    80,   140,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,    76,    22,
      23,    19,     0,    77,    78,    24,     0,    79,    25,    80,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,    75,    76,    22,
      23,    19,     0,    77,    78,    24,     0,    79,    25,    80,
       0,     0,     0,     0,   149,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    19,    74,    75,    76,    22,
      23,     0,     0,    77,    78,    24,     0,    79,    25,    80,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,     0,
      74,    75,    76,    22,    23,     0,     0,    77,    78,    24,
       0,    79,    25,    80
};

static const yytype_int16 yycheck[] =
{
      20,    59,    31,     9,    48,    37,     8,    27,     4,    11,
       5,    17,     5,     4,     4,    21,     6,    32,    38,    34,
       0,     6,     8,    19,     7,    45,    46,    19,    23,    22,
      62,    17,     5,    53,   140,    21,     7,     6,   144,    59,
       4,    47,    48,   149,    19,     4,     9,    53,    92,    51,
      56,     4,    72,    73,    74,    75,    22,     3,     4,    79,
      20,    81,    82,    83,    84,    85,    86,    96,    19,   127,
      20,     6,     4,    19,    20,    21,    17,     7,    24,    25,
      20,    27,    28,    29,    47,    48,    22,     5,    21,     6,
      53,     6,     6,    56,    20,   115,     4,    43,    26,     3,
       4,   112,    29,    49,    50,    -1,   120,   127,    54,    -1,
       9,    57,     3,     4,    -1,    -1,   136,    21,    17,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,   147,    19,    -1,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    29,    43,
      -1,    -1,     7,    -1,     9,    49,    50,    -1,    47,    48,
      54,    -1,    43,    57,    53,    -1,    -1,    56,    49,    50,
      -1,    -1,    -1,    54,    -1,    -1,    57,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    51,    52,    53,    -1,
      55,    56,    57,     7,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      -1,    55,    56,    57,     7,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       9,    44,    45,    46,    47,    48,    -1,    -1,    51,    52,
      53,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
      -1,     9,    51,    52,    53,    -1,    55,    56,    57,    58,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,     9,    -1,    51,    52,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,     9,    -1,    51,    52,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     9,    44,    45,    46,    47,
      48,    -1,    -1,    51,    52,    53,    -1,    55,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    51,    52,    53,
      -1,    55,    56,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    23,    60,    61,    62,    64,    69,     4,    66,
      67,    68,     4,    19,     0,    60,     4,     6,    65,     9,
      17,    21,    47,    48,    53,    56,    78,    87,     6,     7,
      87,    19,     5,    63,     7,     6,     3,     4,    21,    43,
      49,    50,    54,    57,    77,    81,    82,     5,    22,    70,
      77,     4,    66,    19,    63,    65,    20,    65,     8,    21,
      78,    77,    18,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    44,    45,    46,    51,    52,    55,
      57,    80,    83,    84,    85,    86,    87,    77,    77,     4,
      19,    73,    22,    77,    79,    20,     6,     4,    79,    22,
      78,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,     7,    20,    24,    25,    27,    28,    29,    71,
      72,    73,    74,    75,    76,    77,    73,     7,    20,    63,
      22,    70,     6,    77,     6,     6,    21,    20,    71,    79,
      58,    77,    72,     7,    26,    77,    72,     7,    77,    22,
      72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    61,    62,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      67,    67,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    72,    72,    72,    73,    73,    74,    74,    74,    75,
      75,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    81,
      82,    82,    83,    83,    83,    84,    84,    85,    85,    85,
      85,    86,    86,    87,    87,    87,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     5,     2,     4,
       4,     3,     3,     3,     3,     1,     3,     1,     1,     1,
       3,     5,     2,     6,     5,     4,     2,     2,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     2,     2,     6,
       4,     9,     1,     1,     3,     3,     2,     4,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 63 "parser.y" /* yacc.c:1646  */
    {
    (yyval.eventlist_value) = (yyvsp[0].eventlist_value);
    (yyval.eventlist_value)->insert(*(yyvsp[-1].event_value));
}
#line 1473 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 67 "parser.y" /* yacc.c:1646  */
    {Globe = (yyval.eventlist_value) = new EventList(*(yyvsp[0].event_value));}
#line 1479 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 70 "parser.y" /* yacc.c:1646  */
    {(yyval.event_value) = (yyvsp[-1].type_value);}
#line 1485 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 71 "parser.y" /* yacc.c:1646  */
    {(yyval.event_value) = (yyvsp[0].declare_value);}
#line 1491 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 72 "parser.y" /* yacc.c:1646  */
    {(yyval.event_value) = (yyvsp[0].function_value);}
#line 1497 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 75 "parser.y" /* yacc.c:1646  */
    {
    (yyval.type_value) = (yyvsp[-1].type_value);
    (yyval.type_value)->getName(*(yyvsp[-3].string_value));
}
#line 1506 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 79 "parser.y" /* yacc.c:1646  */
    {(yyval.type_value) = new Type(*(yyvsp[0].string_value));}
#line 1512 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 80 "parser.y" /* yacc.c:1646  */
    {(yyval.type_value) = (yyvsp[-1].type_value);}
#line 1518 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 83 "parser.y" /* yacc.c:1646  */
    {
    (yyval.type_value) = (yyvsp[0].type_value);
    (yyval.type_value)->insert(Declaration(*(yyvsp[-3].string_value),*(yyvsp[-2].varlist_value)));
}
#line 1527 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 87 "parser.y" /* yacc.c:1646  */
    {(yyval.type_value) = new Type(Declaration(*(yyvsp[-2].string_value),*(yyvsp[-1].varlist_value)));}
#line 1533 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 90 "parser.y" /* yacc.c:1646  */
    {(yyval.declare_value) = new Declaration(*(yyvsp[-2].string_value),*(yyvsp[-1].varlist_value));}
#line 1539 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 91 "parser.y" /* yacc.c:1646  */
    {(yyval.declare_value) = new Declaration(*(yyvsp[-2].type_value),*(yyvsp[-1].varlist_value));}
#line 1545 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 94 "parser.y" /* yacc.c:1646  */
    {
    (yyval.varlist_value) = (yyvsp[0].varlist_value);
    (yyval.varlist_value)->insert(Variable(*(yyvsp[-2].string_value)));
}
#line 1554 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 98 "parser.y" /* yacc.c:1646  */
    {(yyval.varlist_value) = new VariableList(Variable(*(yyvsp[0].string_value)));}
#line 1560 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 101 "parser.y" /* yacc.c:1646  */
    {
    (yyval.varlist_value) = (yyvsp[0].varlist_value);
    (yyval.varlist_value)->insert(*(yyvsp[-2].variable_value));
}
#line 1569 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 105 "parser.y" /* yacc.c:1646  */
    {(yyval.varlist_value) = new VariableList(*(yyvsp[0].variable_value));}
#line 1575 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 107 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_value) = new Variable(*(yyvsp[0].string_value));}
#line 1581 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 108 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_value) = (yyvsp[0].array_value);}
#line 1587 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 109 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_value) = new InitVariable(*(yyvsp[-2].string_value),*(yyvsp[0].expression_value),(yyvsp[-1].int_value));}
#line 1593 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 110 "parser.y" /* yacc.c:1646  */
    {(yyval.variable_value) = new InitArrayVariable(*(yyvsp[-4].array_value),*(yyvsp[-1].expressionlist_value),(yyvsp[-3].int_value));}
#line 1599 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 113 "parser.y" /* yacc.c:1646  */
    {(yyval.array_value) = new ArrayVariable(*(yyvsp[-1].string_value),*(yyvsp[0].expressionlist_value));}
#line 1605 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 115 "parser.y" /* yacc.c:1646  */
    {
    (yyval.function_value) = new Function(*(yyvsp[-5].string_value),*(yyvsp[-4].string_value),*(yyvsp[-2].varlist_value),*(yyvsp[0].block_value));
}
#line 1613 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 118 "parser.y" /* yacc.c:1646  */
    {
	(yyval.function_value) = new Function(*(yyvsp[-4].string_value),*(yyvsp[-3].string_value),*(yyvsp[0].block_value));
}
#line 1621 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 123 "parser.y" /* yacc.c:1646  */
    {
    (yyval.varlist_value) = (yyvsp[0].varlist_value);
    (yyval.varlist_value)->insert(Variable(*(yyvsp[-3].string_value),*(yyvsp[-2].string_value)));
}
#line 1630 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 127 "parser.y" /* yacc.c:1646  */
    {(yyval.varlist_value) = new VariableList(Variable(*(yyvsp[-1].string_value),*(yyvsp[0].string_value)));}
#line 1636 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 131 "parser.y" /* yacc.c:1646  */
    {
    (yyval.eventlist_value) = (yyvsp[0].eventlist_value);
    (yyval.eventlist_value)->insert(*(yyvsp[-1].statement_value));
}
#line 1645 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 135 "parser.y" /* yacc.c:1646  */
    {(yyval.eventlist_value) = new EventList(*(yyvsp[0].statement_value));}
#line 1651 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_value) = (yyvsp[0].loop_value);}
#line 1657 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_value) = (yyvsp[0].block_value);}
#line 1663 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 140 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_value) = (yyvsp[0].branch_value);}
#line 1669 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 141 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_value) = (yyvsp[0].jump_value);}
#line 1675 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 142 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_value) = (yyvsp[0].expression_value);}
#line 1681 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 146 "parser.y" /* yacc.c:1646  */
    {(yyval.block_value) = new BlockStatement(*(yyvsp[-1].eventlist_value));}
#line 1687 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 147 "parser.y" /* yacc.c:1646  */
    {(yyval.block_value) = new BlockStatement();}
#line 1693 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.jump_value) = new JumpStatement(CONT_OP);}
#line 1699 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 150 "parser.y" /* yacc.c:1646  */
    {(yyval.jump_value) = new JumpStatement(BREAK_OP);}
#line 1705 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 151 "parser.y" /* yacc.c:1646  */
    {(yyval.jump_value) = new JumpStatement(RETURN_OP);}
#line 1711 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.branch_value) = new BranchStatement(*(yyvsp[-4].expression_value),*(yyvsp[-2].statement_value),*(yyvsp[0].statement_value));}
#line 1717 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 155 "parser.y" /* yacc.c:1646  */
    {(yyval.branch_value) = new BranchStatement(*(yyvsp[-2].expression_value),*(yyvsp[0].statement_value));}
#line 1723 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 158 "parser.y" /* yacc.c:1646  */
    {
        (yyval.loop_value) = new LoopStatement(*(yyvsp[-6].expression_value),*(yyvsp[-4].expression_value),*(yyvsp[-2].expression_value),*(yyvsp[0].statement_value));
}
#line 1731 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 164 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new Literal((yyvsp[0].int_value));}
#line 1737 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new Variable(*(yyvsp[0].string_value));}
#line 1743 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 166 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = (yyvsp[-1].expression_value);}
#line 1749 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new Attribute(*(yyvsp[-2].string_value),*(yyvsp[0].string_value));}
#line 1755 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new ArrayVariable(*(yyvsp[-1].string_value),*(yyvsp[0].expressionlist_value));}
#line 1761 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 169 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new FunctionCall(*(yyvsp[-3].string_value),*(yyvsp[-1].expressionlist_value));}
#line 1767 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 170 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new UnaryExpression(*(yyvsp[0].expression_value),(yyvsp[-1].int_value));}
#line 1773 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new UnaryExpression(*(yyvsp[0].expression_value),(yyvsp[-1].int_value));}
#line 1779 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression(*(yyvsp[-2].expression_value),*(yyvsp[0].expression_value),(yyvsp[-1].int_value));}
#line 1785 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression(*(yyvsp[-2].expression_value),*(yyvsp[0].expression_value),(yyvsp[-1].int_value));}
#line 1791 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression(*(yyvsp[-2].expression_value),*(yyvsp[0].expression_value),(yyvsp[-1].int_value));}
#line 1797 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 175 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression(*(yyvsp[-2].expression_value),*(yyvsp[0].expression_value),(yyvsp[-1].int_value));}
#line 1803 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 176 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression(*(yyvsp[-2].expression_value),*(yyvsp[0].expression_value),(yyvsp[-1].int_value));}
#line 1809 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression(*(yyvsp[-2].expression_value),*(yyvsp[0].expression_value),BIT_AND_OP);}
#line 1815 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression(*(yyvsp[-2].expression_value),*(yyvsp[0].expression_value),BIT_XOR_OP);}
#line 1821 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression(*(yyvsp[-2].expression_value),*(yyvsp[0].expression_value),BIT_OR_OP);}
#line 1827 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression(*(yyvsp[-2].expression_value),*(yyvsp[0].expression_value),AND_OP);}
#line 1833 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 181 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression(*(yyvsp[-2].expression_value),*(yyvsp[0].expression_value),OR_OP);}
#line 1839 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_value) = new BinaryExpression(*(yyvsp[-2].expression_value),*(yyvsp[0].expression_value),(yyvsp[-1].int_value));}
#line 1845 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 186 "parser.y" /* yacc.c:1646  */
    {
    (yyval.expressionlist_value) = (yyvsp[0].expressionlist_value);
    (yyval.expressionlist_value)->insert(*(yyvsp[-2].expression_value));
}
#line 1854 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 190 "parser.y" /* yacc.c:1646  */
    {(yyval.expressionlist_value) = new ExpressionList(*(yyvsp[-1].expression_value));}
#line 1860 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 193 "parser.y" /* yacc.c:1646  */
    {
    (yyval.expressionlist_value) = (yyvsp[0].expressionlist_value);
    (yyval.expressionlist_value)->insert(*(yyvsp[-2].expression_value));
}
#line 1869 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.expressionlist_value) = new ExpressionList(*(yyvsp[0].expression_value));}
#line 1875 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = SHR_OP;}
#line 1881 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = SHL_OP;}
#line 1887 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = NEG_OP;}
#line 1893 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = NOT_OP;}
#line 1899 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 205 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = BIT_NOT_OP;}
#line 1905 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 207 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = INC_OP;}
#line 1911 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 208 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = DEC_OP;}
#line 1917 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 211 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = MUL_OP;}
#line 1923 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 212 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = DIV_OP;}
#line 1929 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) =  MOD_OP;}
#line 1935 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 217 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = ADD_OP;}
#line 1941 "parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 218 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = SUB_OP;}
#line 1947 "parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 222 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = SGT_OP;}
#line 1953 "parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 223 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = SGE_OP;}
#line 1959 "parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 224 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = SLT_OP;}
#line 1965 "parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = SLE_OP;}
#line 1971 "parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 228 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = SEQ_OP;}
#line 1977 "parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = SNE_OP;}
#line 1983 "parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = ASSIGN_OP;}
#line 1989 "parser.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = PLUS_ASSIGN_OP;}
#line 1995 "parser.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = MINUS_ASSIGN_OP;}
#line 2001 "parser.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 236 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = MULTIPLY_ASSIGN_OP;}
#line 2007 "parser.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.int_value) = DIVIDE_ASSIGN_OP;}
#line 2013 "parser.cpp" /* yacc.c:1646  */
    break;


#line 2017 "parser.cpp" /* yacc.c:1646  */
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
#line 240 "parser.y" /* yacc.c:1906  */

int yyerror(char const *str)  
{  
    extern char *yytext;  
    fprintf(stderr,"parser error near %s\n",yytext);  
    return 0;  
}  
