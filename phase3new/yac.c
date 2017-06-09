/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 5 "source.y" /* yacc.c:339  */
 // Everything from here to "%}" is copied verbatim to the top of source.y
#include "heading.H"
#include "nodes.h"
int yyerror( const char* s );
int yylex( void );

#line 73 "source.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "source.tab.h".  */
#ifndef YY_YY_SOURCE_TAB_H_INCLUDED
# define YY_YY_SOURCE_TAB_H_INCLUDED
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
    LO = 258,
    INTEGER = 259,
    ARRAY = 260,
    FUNCTION = 261,
    BEGINPARAMS = 262,
    ENDPARAMS = 263,
    BEGINLOCALS = 264,
    ENDLOCALS = 265,
    BEGINBODY = 266,
    ENDBODY = 267,
    BEGINLOOP = 268,
    ENDLOOP = 269,
    IF = 270,
    THEN = 271,
    ELSE = 272,
    ENDIF = 273,
    DO = 274,
    WHILE = 275,
    READ = 276,
    WRITE = 277,
    CONTINUE = 278,
    RETURN = 279,
    TRUE = 280,
    FALSE = 281,
    ASSGN = 282,
    OF = 283,
    OR = 284,
    AND = 285,
    NOT = 286,
    NE = 287,
    EQ = 288,
    GE = 289,
    GT = 290,
    LE = 291,
    LT = 292,
    UMINUS = 293,
    HI = 294,
    ID = 295,
    NUMBER = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "source.y" /* yacc.c:355  */


   // Here we define the types and names of the components of the
   // union type YYSTYPE, which is the type of yylval and of the
   // semantic portion of the parse-stack entries.

   // declarations of union members for lexical values of tokens
   int 		   junk;    	    // values for single-lexeme tokens
   int		   int_val;	    // values of integer literals
   string*	   str_val;	    // values of string literals
   string*	   ident;	    // points to identifiers' actual lexemes

   // declarations of union members for lexical values of non-terminals
   // that are pointers to translation records.
   Program*              program;
   list<Function*>*      functions;	// for the non-terminal "Functions"
   list<Declaration*>*   declarations;  // for the non-terminal "Declarations"
   list<ParamDeclaration*>*   paramdeclarations;
   list<Statement*>*     statements;   
   list<Var*>*           vars;
   list<Expression*>*    expressions;
   list<Expression*>*    nonemptyexpressionlist;
   list<string*>*        ids;
   Function*             function;   
   Declaration*          declaration;  
   ParamDeclaration*     paramdeclaration;    
   Statement*            statement;
   BoolExpr*             boolexpr;
   Expression*           expression;
   Var*                  var;
   Label*                label;
   Beginloop *           beginloop;
 

#line 190 "source.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SOURCE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 207 "source.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   223

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  135

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    40,     2,     2,
      46,    47,    42,    39,    48,    38,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    49,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    43,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   140,   140,   141,   144,   145,   148,   149,   152,   153,
     156,   157,   160,   161,   164,   165,   169,   170,   173,   176,
     184,   185,   189,   190,   194,   195,   197,   199,   201,   203,
     204,   205,   206,   209,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   240,   241
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LO", "INTEGER", "ARRAY", "FUNCTION",
  "BEGINPARAMS", "ENDPARAMS", "BEGINLOCALS", "ENDLOCALS", "BEGINBODY",
  "ENDBODY", "BEGINLOOP", "ENDLOOP", "IF", "THEN", "ELSE", "ENDIF", "DO",
  "WHILE", "READ", "WRITE", "CONTINUE", "RETURN", "TRUE", "FALSE", "ASSGN",
  "OF", "OR", "AND", "NOT", "NE", "EQ", "GE", "GT", "LE", "LT", "'-'",
  "'+'", "'%'", "'/'", "'*'", "UMINUS", "'['", "']'", "'('", "')'", "','",
  "';'", "':'", "HI", "ID", "NUMBER", "$accept", "Functions",
  "Declarations", "ParamDeclarations", "Statements", "IDs", "Vars",
  "Expressions", "NonemptyExpressionList", "Program", "Function",
  "Declaration", "ParamDeclaration", "Statement", "Beginloop", "BoolExpr",
  "Expression", "Var", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    45,    43,
      37,    47,    42,   293,    91,    93,    40,    41,    44,    59,
      58,   294,   295,   296
};
# endif

#define YYPACT_NINF -51

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-51)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -51,     6,     5,   -36,   -51,   -51,    -9,    42,   -51,    -5,
      85,   -51,    27,   -51,   -51,    50,    39,    -2,   -51,    65,
      93,   128,    33,   -51,   -51,    96,   121,    88,   101,   122,
     137,   122,    99,    99,   -51,    34,   108,    14,   105,   135,
     116,   123,   138,   -51,   -51,   122,    34,   122,    44,   -51,
      49,   160,   -51,   -51,   121,    12,   124,   -51,   124,    34,
     173,    34,   -51,   120,   -51,    34,   -51,   118,   166,   -51,
     -51,   -20,   144,    34,   121,   122,   122,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    -1,   121,
      99,   117,   165,   -51,   173,   142,   139,   -51,   -51,   143,
     141,   173,    37,   178,   -51,   173,   173,   173,   173,   173,
     173,    29,   -10,    71,   167,   -51,   196,    86,   -51,   -51,
     189,   -51,   -51,    34,   121,   -51,   122,   -51,   214,   173,
     111,    98,   170,   -51,   -51
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    18,     0,     0,     3,     1,     0,     0,     6,     0,
       0,    10,     0,     7,     4,     0,     0,     0,    11,     0,
       0,     0,     0,     5,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    56,     0,     0,     0,
       0,     0,     0,    43,    44,     0,     0,     0,    56,    47,
       0,     0,    46,    33,     0,     0,    29,    12,    30,     0,
      32,     0,    19,     0,     8,     0,    20,     0,     0,    42,
      55,     0,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    24,     0,     0,    45,    48,     0,
      15,    16,     0,    41,    40,    35,    34,    39,    37,    38,
      36,    51,    50,    54,    53,    52,     0,     0,    13,    57,
       0,    23,    49,     0,     0,    25,     0,    27,     0,    17,
       0,    28,     0,    26,    21
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -51,   -51,   -51,   -51,   -50,   203,   188,   -51,   -51,   -51,
     -51,   -51,   -51,   -35,   168,   -30,    38,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    17,     9,    37,    12,    56,    99,   100,     2,
       4,    23,    13,    38,    54,    50,    51,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      39,    55,    63,    10,    88,     5,    57,    57,    21,    75,
      76,    39,     3,   116,    29,    69,     6,    71,    30,    31,
      32,    33,    34,    35,   102,    53,    62,    97,    39,    29,
      85,    86,    87,    30,    31,    32,    33,    34,    35,   117,
       7,    75,    76,    19,    20,   103,   104,    11,    39,     8,
      11,    36,    29,    63,   124,   125,    30,    31,    32,    33,
      34,    35,    39,    39,   118,    74,    36,    63,    84,    85,
      86,    87,    46,    60,   130,    15,    39,    16,    75,    76,
      59,    15,    63,    27,    70,    72,    48,    49,    61,    36,
      73,    39,    40,    41,    14,    63,   131,    91,    39,    92,
     127,    29,    18,    94,    39,    30,    31,    32,    33,    34,
      35,   101,    86,    87,    24,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    29,    75,    76,   133,
      30,    31,    32,    33,    34,    35,    29,    25,    36,    26,
      30,    31,    32,    33,    34,    35,    42,    43,    44,    28,
      53,    36,    61,    45,    64,    83,    84,    85,    86,    87,
      46,   129,    65,    36,    98,    66,    68,    67,    47,    93,
      96,    95,    90,    36,    48,    49,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,   120,   121,   123,
     122,    98,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    83,    84,    85,    86,    87,    76,    87,
     119,    83,    84,    85,    86,    87,   126,   128,   132,   134,
      22,    58,     0,    89
};

static const yytype_int16 yycheck[] =
{
      26,    31,    37,     8,    54,     0,    32,    33,    10,    29,
      30,    37,     6,    14,    15,    45,    52,    47,    19,    20,
      21,    22,    23,    24,    74,    13,    12,    47,    54,    15,
      40,    41,    42,    19,    20,    21,    22,    23,    24,    89,
      49,    29,    30,     4,     5,    75,    76,    52,    74,     7,
      52,    52,    15,    88,    17,    18,    19,    20,    21,    22,
      23,    24,    88,    89,    90,    16,    52,   102,    39,    40,
      41,    42,    38,    35,   124,    48,   102,    50,    29,    30,
      46,    48,   117,    50,    46,    47,    52,    53,    44,    52,
      46,   117,     4,     5,     9,   130,   126,    59,   124,    61,
      14,    15,    52,    65,   130,    19,    20,    21,    22,    23,
      24,    73,    41,    42,    49,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    15,    29,    30,    18,
      19,    20,    21,    22,    23,    24,    15,    44,    52,    11,
      19,    20,    21,    22,    23,    24,    45,    25,    26,    53,
      13,    52,    44,    31,    49,    38,    39,    40,    41,    42,
      38,   123,    27,    52,    47,    49,    28,    44,    46,    49,
       4,    53,    48,    52,    52,    53,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    45,    49,    48,
      47,    47,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    38,    39,    40,    41,    42,    30,    42,
      45,    38,    39,    40,    41,    42,    20,    28,     4,    49,
      17,    33,    -1,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    63,     6,    64,     0,    52,    49,     7,    57,
       8,    52,    59,    66,     9,    48,    50,    56,    52,     4,
       5,    10,    59,    65,    49,    44,    11,    50,    53,    15,
      19,    20,    21,    22,    23,    24,    52,    58,    67,    71,
       4,     5,    45,    25,    26,    31,    38,    46,    52,    53,
      69,    70,    71,    13,    68,    69,    60,    71,    60,    46,
      70,    44,    12,    67,    49,    27,    49,    44,    28,    69,
      70,    69,    70,    46,    16,    29,    30,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    58,    68,
      48,    70,    70,    49,    70,    53,     4,    47,    47,    61,
      62,    70,    58,    69,    69,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    14,    58,    71,    45,
      45,    49,    47,    48,    17,    18,    20,    14,    28,    70,
      58,    69,     4,    18,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    62,    62,    63,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     2,     2,     3,
       1,     3,     1,     3,     0,     1,     1,     3,     1,    12,
       4,     9,     4,     9,     3,     5,     7,     5,     6,     2,
       2,     1,     2,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     3,     1,     1,     3,     4,
       3,     3,     3,     3,     3,     2,     1,     4
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
#line 140 "source.y" /* yacc.c:1661  */
    { (yyval.functions) = new list<Function*>; }
#line 1390 "source.tab.c" /* yacc.c:1661  */
    break;

  case 3:
#line 141 "source.y" /* yacc.c:1661  */
    { ((yyval.functions)=(yyvsp[-1].functions))->push_back((yyvsp[0].function)); }
#line 1396 "source.tab.c" /* yacc.c:1661  */
    break;

  case 4:
#line 144 "source.y" /* yacc.c:1661  */
    { (yyval.declarations) = new list<Declaration*>; }
#line 1402 "source.tab.c" /* yacc.c:1661  */
    break;

  case 5:
#line 145 "source.y" /* yacc.c:1661  */
    { ((yyval.declarations)=(yyvsp[-1].declarations))->push_back((yyvsp[0].declaration)); }
#line 1408 "source.tab.c" /* yacc.c:1661  */
    break;

  case 6:
#line 148 "source.y" /* yacc.c:1661  */
    { (yyval.paramdeclarations) = new list<ParamDeclaration*>; }
#line 1414 "source.tab.c" /* yacc.c:1661  */
    break;

  case 7:
#line 149 "source.y" /* yacc.c:1661  */
    { ((yyval.paramdeclarations)=(yyvsp[-1].paramdeclarations))->push_back((yyvsp[0].paramdeclaration)); }
#line 1420 "source.tab.c" /* yacc.c:1661  */
    break;

  case 8:
#line 152 "source.y" /* yacc.c:1661  */
    { ((yyval.statements) = new list<Statement*>)->push_back((yyvsp[-1].statement)); }
#line 1426 "source.tab.c" /* yacc.c:1661  */
    break;

  case 9:
#line 153 "source.y" /* yacc.c:1661  */
    { ((yyval.statements)=(yyvsp[-2].statements))->push_back((yyvsp[-1].statement)); }
#line 1432 "source.tab.c" /* yacc.c:1661  */
    break;

  case 10:
#line 156 "source.y" /* yacc.c:1661  */
    { ((yyval.ids) = new list<string*>)->push_back((yyvsp[0].ident)); }
#line 1438 "source.tab.c" /* yacc.c:1661  */
    break;

  case 11:
#line 157 "source.y" /* yacc.c:1661  */
    { ((yyval.ids)=(yyvsp[-2].ids))->push_back((yyvsp[0].ident)); }
#line 1444 "source.tab.c" /* yacc.c:1661  */
    break;

  case 12:
#line 160 "source.y" /* yacc.c:1661  */
    { ((yyval.vars) = new list<Var*>)->push_back((yyvsp[0].var)); }
#line 1450 "source.tab.c" /* yacc.c:1661  */
    break;

  case 13:
#line 161 "source.y" /* yacc.c:1661  */
    { ((yyval.vars)=(yyvsp[-2].vars))->push_back((yyvsp[0].var)); }
#line 1456 "source.tab.c" /* yacc.c:1661  */
    break;

  case 14:
#line 164 "source.y" /* yacc.c:1661  */
    { (yyval.expressions) = new list<Expression*>; }
#line 1462 "source.tab.c" /* yacc.c:1661  */
    break;

  case 15:
#line 165 "source.y" /* yacc.c:1661  */
    { (yyval.expressions) = (yyvsp[0].nonemptyexpressionlist); }
#line 1468 "source.tab.c" /* yacc.c:1661  */
    break;

  case 16:
#line 169 "source.y" /* yacc.c:1661  */
    { ((yyval.nonemptyexpressionlist) = new list<Expression*>)->push_back((yyvsp[0].expression)); }
#line 1474 "source.tab.c" /* yacc.c:1661  */
    break;

  case 17:
#line 170 "source.y" /* yacc.c:1661  */
    { ((yyval.nonemptyexpressionlist)=(yyvsp[-2].nonemptyexpressionlist))->push_back((yyvsp[0].expression)); }
#line 1480 "source.tab.c" /* yacc.c:1661  */
    break;

  case 18:
#line 173 "source.y" /* yacc.c:1661  */
    { (yyval.program) = new Program((yyvsp[0].functions)); }
#line 1486 "source.tab.c" /* yacc.c:1661  */
    break;

  case 19:
#line 180 "source.y" /* yacc.c:1661  */
    { (yyval.function) = new Function((yyvsp[-11].junk),(yyvsp[-10].ident),(yyvsp[-9].junk),(yyvsp[-8].junk),(yyvsp[-7].paramdeclarations),(yyvsp[-6].junk),(yyvsp[-5].junk),(yyvsp[-4].declarations),(yyvsp[-3].junk),(yyvsp[-2].junk),(yyvsp[-1].statements),(yyvsp[0].junk)); }
#line 1492 "source.tab.c" /* yacc.c:1661  */
    break;

  case 20:
#line 184 "source.y" /* yacc.c:1661  */
    { (yyval.declaration) = new Declaration((yyvsp[-3].ids),(yyvsp[-2].junk),(yyvsp[-1].junk)); }
#line 1498 "source.tab.c" /* yacc.c:1661  */
    break;

  case 21:
#line 186 "source.y" /* yacc.c:1661  */
    { (yyval.declaration) = new Declaration((yyvsp[-8].ids),(yyvsp[-7].junk),(yyvsp[-6].junk),(yyvsp[-5].junk),(yyvsp[-4].int_val),(yyvsp[-3].junk),(yyvsp[-2].junk),(yyvsp[-1].junk)); }
#line 1504 "source.tab.c" /* yacc.c:1661  */
    break;

  case 22:
#line 189 "source.y" /* yacc.c:1661  */
    { (yyval.paramdeclaration) = new ParamDeclaration((yyvsp[-3].ids),(yyvsp[-2].junk),(yyvsp[-1].junk)); }
#line 1510 "source.tab.c" /* yacc.c:1661  */
    break;

  case 23:
#line 191 "source.y" /* yacc.c:1661  */
    { (yyval.paramdeclaration) = new ParamDeclaration((yyvsp[-8].ids),(yyvsp[-7].junk),(yyvsp[-6].junk),(yyvsp[-5].junk),(yyvsp[-4].int_val),(yyvsp[-3].junk),(yyvsp[-2].junk),(yyvsp[-1].junk)); }
#line 1516 "source.tab.c" /* yacc.c:1661  */
    break;

  case 24:
#line 194 "source.y" /* yacc.c:1661  */
    { (yyval.statement) = new AssignmentStmt((yyvsp[-2].var),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1522 "source.tab.c" /* yacc.c:1661  */
    break;

  case 25:
#line 196 "source.y" /* yacc.c:1661  */
    { (yyval.statement) = new IfThenStmt((yyvsp[-4].junk),(yyvsp[-3].boolexpr),(yyvsp[-2].junk),(yyvsp[-1].statements),(yyvsp[0].junk)); }
#line 1528 "source.tab.c" /* yacc.c:1661  */
    break;

  case 26:
#line 198 "source.y" /* yacc.c:1661  */
    { (yyval.statement) = new IfThenElseStmt((yyvsp[-6].junk),(yyvsp[-5].boolexpr),(yyvsp[-4].junk),(yyvsp[-3].statements),(yyvsp[-2].junk),(yyvsp[-1].statements),(yyvsp[0].junk)); }
#line 1534 "source.tab.c" /* yacc.c:1661  */
    break;

  case 27:
#line 200 "source.y" /* yacc.c:1661  */
    { (yyval.statement) = new WhileStmt((yyvsp[-4].junk),(yyvsp[-3].boolexpr),(yyvsp[-2].beginloop),(yyvsp[-1].statements),(yyvsp[0].junk)); }
#line 1540 "source.tab.c" /* yacc.c:1661  */
    break;

  case 28:
#line 202 "source.y" /* yacc.c:1661  */
    { (yyval.statement) = new DoWhileStmt((yyvsp[-5].junk),(yyvsp[-4].beginloop),(yyvsp[-3].statements),(yyvsp[-2].junk),(yyvsp[-1].junk),(yyvsp[0].boolexpr)); }
#line 1546 "source.tab.c" /* yacc.c:1661  */
    break;

  case 29:
#line 203 "source.y" /* yacc.c:1661  */
    { (yyval.statement) = new ReadStmt((yyvsp[-1].junk),(yyvsp[0].vars)); }
#line 1552 "source.tab.c" /* yacc.c:1661  */
    break;

  case 30:
#line 204 "source.y" /* yacc.c:1661  */
    { (yyval.statement) = new WriteStmt((yyvsp[-1].junk),(yyvsp[0].vars)); }
#line 1558 "source.tab.c" /* yacc.c:1661  */
    break;

  case 31:
#line 205 "source.y" /* yacc.c:1661  */
    { (yyval.statement) = new ContinueStmt((yyvsp[0].junk)); }
#line 1564 "source.tab.c" /* yacc.c:1661  */
    break;

  case 32:
#line 206 "source.y" /* yacc.c:1661  */
    { (yyval.statement) = new ReturnStmt((yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1570 "source.tab.c" /* yacc.c:1661  */
    break;

  case 33:
#line 209 "source.y" /* yacc.c:1661  */
    {
                 (yyval.beginloop) = new Beginloop();
             }
#line 1578 "source.tab.c" /* yacc.c:1661  */
    break;

  case 34:
#line 214 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = new BoolExpr((yyvsp[-2].expression),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1584 "source.tab.c" /* yacc.c:1661  */
    break;

  case 35:
#line 215 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = new BoolExpr((yyvsp[-2].expression),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1590 "source.tab.c" /* yacc.c:1661  */
    break;

  case 36:
#line 216 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = new BoolExpr((yyvsp[-2].expression),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1596 "source.tab.c" /* yacc.c:1661  */
    break;

  case 37:
#line 217 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = new BoolExpr((yyvsp[-2].expression),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1602 "source.tab.c" /* yacc.c:1661  */
    break;

  case 38:
#line 218 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = new BoolExpr((yyvsp[-2].expression),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1608 "source.tab.c" /* yacc.c:1661  */
    break;

  case 39:
#line 219 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = new BoolExpr((yyvsp[-2].expression),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1614 "source.tab.c" /* yacc.c:1661  */
    break;

  case 40:
#line 220 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = new BoolExpr((yyvsp[-2].boolexpr),(yyvsp[-1].junk),(yyvsp[0].boolexpr)); }
#line 1620 "source.tab.c" /* yacc.c:1661  */
    break;

  case 41:
#line 221 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = new BoolExpr((yyvsp[-2].boolexpr),(yyvsp[-1].junk),(yyvsp[0].boolexpr)); }
#line 1626 "source.tab.c" /* yacc.c:1661  */
    break;

  case 42:
#line 222 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = new BoolExpr(00,(yyvsp[-1].junk),(yyvsp[0].boolexpr)); }
#line 1632 "source.tab.c" /* yacc.c:1661  */
    break;

  case 43:
#line 223 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = new BoolExpr(00,1,00); }
#line 1638 "source.tab.c" /* yacc.c:1661  */
    break;

  case 44:
#line 224 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = new BoolExpr(00,0,00); }
#line 1644 "source.tab.c" /* yacc.c:1661  */
    break;

  case 45:
#line 225 "source.y" /* yacc.c:1661  */
    { (yyval.boolexpr) = (yyvsp[-1].boolexpr); }
#line 1650 "source.tab.c" /* yacc.c:1661  */
    break;

  case 46:
#line 228 "source.y" /* yacc.c:1661  */
    { (yyval.expression) = new Expression((yyvsp[0].var)); }
#line 1656 "source.tab.c" /* yacc.c:1661  */
    break;

  case 47:
#line 229 "source.y" /* yacc.c:1661  */
    { (yyval.expression) = new Expression((yyvsp[0].int_val)); }
#line 1662 "source.tab.c" /* yacc.c:1661  */
    break;

  case 48:
#line 230 "source.y" /* yacc.c:1661  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 1668 "source.tab.c" /* yacc.c:1661  */
    break;

  case 49:
#line 231 "source.y" /* yacc.c:1661  */
    { (yyval.expression) = new Expression((yyvsp[-3].ident),(yyvsp[-2].junk),(yyvsp[-1].expressions),(yyvsp[0].junk)); }
#line 1674 "source.tab.c" /* yacc.c:1661  */
    break;

  case 50:
#line 232 "source.y" /* yacc.c:1661  */
    { (yyval.expression) = new Expression((yyvsp[-2].expression),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1680 "source.tab.c" /* yacc.c:1661  */
    break;

  case 51:
#line 233 "source.y" /* yacc.c:1661  */
    { (yyval.expression) = new Expression((yyvsp[-2].expression),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1686 "source.tab.c" /* yacc.c:1661  */
    break;

  case 52:
#line 234 "source.y" /* yacc.c:1661  */
    { (yyval.expression) = new Expression((yyvsp[-2].expression),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1692 "source.tab.c" /* yacc.c:1661  */
    break;

  case 53:
#line 235 "source.y" /* yacc.c:1661  */
    { (yyval.expression) = new Expression((yyvsp[-2].expression),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1698 "source.tab.c" /* yacc.c:1661  */
    break;

  case 54:
#line 236 "source.y" /* yacc.c:1661  */
    { (yyval.expression) = new Expression((yyvsp[-2].expression),(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1704 "source.tab.c" /* yacc.c:1661  */
    break;

  case 55:
#line 237 "source.y" /* yacc.c:1661  */
    { (yyval.expression) = new Expression(00,(yyvsp[-1].junk),(yyvsp[0].expression)); }
#line 1710 "source.tab.c" /* yacc.c:1661  */
    break;

  case 56:
#line 240 "source.y" /* yacc.c:1661  */
    { (yyval.var) = vartab[*(yyvsp[0].ident)]; }
#line 1716 "source.tab.c" /* yacc.c:1661  */
    break;

  case 57:
#line 241 "source.y" /* yacc.c:1661  */
    { (yyval.var) = new Var((yyvsp[-3].ident),(yyvsp[-2].junk),(yyvsp[-1].expression),(yyvsp[0].junk)); }
#line 1722 "source.tab.c" /* yacc.c:1661  */
    break;


#line 1726 "source.tab.c" /* yacc.c:1661  */
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
#line 246 "source.y" /* yacc.c:1906  */
  // end of rules

// Here are the definitions of yyerror, the function that reports 
// lexical and parse errors.  It's overloaded so that error messages
// can be either C strings or C++ strings.

int yyerror( string s ) {
  extern int yylineno;
  extern char* yytext;
  cerr << "ERROR " + s + " at symbol " + yytext + " on line" << yylineno << endl;
  exit( 1 );
}

int yyerror( const char* s ) { return yyerror( string(s) ); }






