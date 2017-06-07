/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 5 "source.y"
 // Everything from here to "%}" is copied verbatim to the top of source.y
#include "heading.H"
#include "nodes.h"
int yyerror( const char* s );
int yylex( void );

/* Line 371 of yacc.c  */
#line 75 "source.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 14 "source.y"


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
 

/* Line 387 of yacc.c  */
#line 192 "source.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_SOURCE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 220 "source.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   225

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNRULES -- Number of states.  */
#define YYNSTATES  134

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    11,    12,    15,    18,
      22,    24,    28,    30,    34,    35,    37,    39,    43,    45,
      58,    63,    73,    78,    88,    92,    98,   106,   112,   119,
     122,   125,   127,   130,   134,   138,   142,   146,   150,   154,
     158,   162,   165,   167,   169,   173,   175,   177,   181,   186,
     190,   194,   198,   202,   206,   209,   211
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    -1,    55,    64,    -1,    -1,    56,    65,
      -1,    -1,    57,    66,    -1,    67,    49,    -1,    58,    67,
      49,    -1,    52,    -1,    59,    48,    52,    -1,    70,    -1,
      60,    48,    70,    -1,    -1,    62,    -1,    69,    -1,    62,
      48,    69,    -1,    55,    -1,     6,    52,    49,     7,    57,
       8,     9,    56,    10,    11,    58,    12,    -1,    59,    50,
       4,    49,    -1,    59,    50,     5,    44,    53,    45,    28,
       4,    49,    -1,    59,    50,     4,    49,    -1,    59,    50,
       5,    44,    53,    45,    28,     4,    49,    -1,    70,    27,
      69,    -1,    15,    68,    16,    58,    18,    -1,    15,    68,
      16,    58,    17,    58,    18,    -1,    20,    68,    13,    58,
      14,    -1,    19,    13,    58,    14,    20,    68,    -1,    21,
      60,    -1,    22,    60,    -1,    23,    -1,    24,    69,    -1,
      69,    33,    69,    -1,    69,    32,    69,    -1,    69,    37,
      69,    -1,    69,    35,    69,    -1,    69,    36,    69,    -1,
      69,    34,    69,    -1,    68,    30,    68,    -1,    68,    29,
      68,    -1,    31,    68,    -1,    25,    -1,    26,    -1,    46,
      68,    47,    -1,    70,    -1,    53,    -1,    46,    69,    47,
      -1,    52,    46,    61,    47,    -1,    69,    39,    69,    -1,
      69,    38,    69,    -1,    69,    42,    69,    -1,    69,    41,
      69,    -1,    69,    40,    69,    -1,    38,    69,    -1,    52,
      -1,    52,    44,    69,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   139,   139,   140,   143,   144,   147,   148,   151,   152,
     155,   156,   159,   160,   163,   164,   168,   169,   172,   175,
     183,   184,   188,   189,   193,   194,   196,   198,   200,   202,
     203,   204,   205,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   234,   235
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
  "Declaration", "ParamDeclaration", "Statement", "BoolExpr", "Expression",
  "Var", YY_NULL
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
     285,   286,   287,   288,   289,   290,   291,   292,    45,    43,
      37,    47,    42,   293,    91,    93,    40,    41,    44,    59,
      58,   294,   295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    60,    60,    61,    61,    62,    62,    63,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     0,     2,     2,     3,
       1,     3,     1,     3,     0,     1,     1,     3,     1,    12,
       4,     9,     4,     9,     3,     5,     7,     5,     6,     2,
       2,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     1,     3,     1,     1,     3,     4,     3,
       3,     3,     3,     3,     2,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    18,     0,     0,     3,     1,     0,     0,     6,     0,
       0,    10,     0,     7,     4,     0,     0,     0,    11,     0,
       0,     0,     0,     5,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,     0,    55,     0,     0,     0,
       0,     0,     0,    42,    43,     0,     0,     0,    55,    46,
       0,     0,    45,     0,     0,    29,    12,    30,     0,    32,
       0,    19,     0,     8,     0,    20,     0,     0,    41,    54,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    24,     0,     0,    44,    47,     0,    15,
      16,     0,    40,    39,    34,    33,    38,    36,    37,    35,
      50,    49,    53,    52,    51,     0,     0,    13,    56,     0,
      23,    48,     0,     0,    25,     0,    27,     0,    17,     0,
      28,     0,    26,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    17,     9,    37,    12,    55,    98,    99,     2,
       4,    23,    13,    38,    50,    51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -50
static const yytype_int16 yypact[] =
{
     -50,     3,    16,   -23,   -50,   -50,   -46,    46,   -50,    -3,
      17,   -50,   -38,   -50,   -50,    -9,    53,    -2,   -50,    23,
      24,    72,    19,   -50,   -50,    40,   130,    82,    56,   132,
      98,   132,    60,    60,   -50,    18,    69,    13,    77,   109,
      97,   103,   127,   -50,   -50,   132,    18,   132,    36,   -50,
      30,   170,   -50,   130,    25,   100,   -50,   100,    18,   183,
      18,   -50,   107,   -50,    18,   -50,   106,   157,   -50,   -50,
       1,   154,    18,   130,   132,   132,    18,    18,    18,    18,
      18,    18,    18,    18,    18,    18,    18,    -1,   130,    60,
     126,   175,   -50,   183,   124,   122,   -50,   -50,   128,   129,
     183,   110,   144,   -50,   183,   183,   183,   183,   183,   183,
      37,     0,    47,   134,   -50,   159,    85,   -50,   -50,   152,
     -50,   -50,    18,   130,   -50,   132,   -50,   177,   183,   120,
      62,   148,   -50,   -50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -50,   -50,   -50,   -50,   -49,   166,   165,   -50,   -50,   -50,
     -50,   -50,   -50,   -35,   -30,    38,   -26
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      39,    54,    62,     7,    87,    10,    56,    56,    21,     3,
      15,    39,    16,   115,    29,    68,     5,    70,    30,    31,
      32,    33,    34,    35,   101,    61,    14,    39,    29,     6,
      74,    75,    30,    31,    32,    33,    34,    35,    88,   116,
      84,    85,    86,    18,   102,   103,    73,    39,    96,    11,
      11,    36,    62,     8,    74,    75,    46,    19,    20,    74,
      75,    39,    39,   117,    58,    36,    62,    15,    25,    27,
      48,    49,    24,    59,   129,    39,    83,    84,    85,    86,
      60,    62,    72,    26,    69,    71,    40,    41,    85,    86,
      39,    74,    75,    28,    62,   130,    90,    39,    91,   126,
      29,    42,    93,    39,    30,    31,    32,    33,    34,    35,
     100,    53,    36,    60,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    29,    63,   123,   124,    30,
      31,    32,    33,    34,    35,    29,    64,    36,   132,    30,
      31,    32,    33,    34,    35,    29,    65,    66,    89,    30,
      31,    32,    33,    34,    35,    67,    92,    43,    44,    94,
     128,    95,    36,    45,    82,    83,    84,    85,    86,   119,
      46,   120,    36,    97,    75,   121,    86,   122,    47,   125,
     127,   131,    36,    22,    48,    49,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,   133,    57,     0,
       0,    97,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    82,    83,    84,    85,    86,     0,     0,
     118,    82,    83,    84,    85,    86
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-50)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      26,    31,    37,    49,    53,     8,    32,    33,    10,     6,
      48,    37,    50,    14,    15,    45,     0,    47,    19,    20,
      21,    22,    23,    24,    73,    12,     9,    53,    15,    52,
      29,    30,    19,    20,    21,    22,    23,    24,    13,    88,
      40,    41,    42,    52,    74,    75,    16,    73,    47,    52,
      52,    52,    87,     7,    29,    30,    38,     4,     5,    29,
      30,    87,    88,    89,    46,    52,   101,    48,    44,    50,
      52,    53,    49,    35,   123,   101,    39,    40,    41,    42,
      44,   116,    46,    11,    46,    47,     4,     5,    41,    42,
     116,    29,    30,    53,   129,   125,    58,   123,    60,    14,
      15,    45,    64,   129,    19,    20,    21,    22,    23,    24,
      72,    13,    52,    44,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    15,    49,    17,    18,    19,
      20,    21,    22,    23,    24,    15,    27,    52,    18,    19,
      20,    21,    22,    23,    24,    15,    49,    44,    48,    19,
      20,    21,    22,    23,    24,    28,    49,    25,    26,    53,
     122,     4,    52,    31,    38,    39,    40,    41,    42,    45,
      38,    49,    52,    47,    30,    47,    42,    48,    46,    20,
      28,     4,    52,    17,    52,    53,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    49,    33,    -1,
      -1,    47,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    38,    39,    40,    41,    42,    -1,    -1,
      45,    38,    39,    40,    41,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    55,    63,     6,    64,     0,    52,    49,     7,    57,
       8,    52,    59,    66,     9,    48,    50,    56,    52,     4,
       5,    10,    59,    65,    49,    44,    11,    50,    53,    15,
      19,    20,    21,    22,    23,    24,    52,    58,    67,    70,
       4,     5,    45,    25,    26,    31,    38,    46,    52,    53,
      68,    69,    70,    13,    68,    60,    70,    60,    46,    69,
      44,    12,    67,    49,    27,    49,    44,    28,    68,    69,
      68,    69,    46,    16,    29,    30,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    58,    13,    48,
      69,    69,    49,    69,    53,     4,    47,    47,    61,    62,
      69,    58,    68,    68,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    14,    58,    70,    45,    45,
      49,    47,    48,    17,    18,    20,    14,    28,    69,    58,
      68,     4,    18,    49
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
/* Line 1792 of yacc.c  */
#line 139 "source.y"
    { (yyval.functions) = new list<Function*>; }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 140 "source.y"
    { ((yyval.functions)=(yyvsp[(1) - (2)].functions))->push_back((yyvsp[(2) - (2)].function)); }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 143 "source.y"
    { (yyval.declarations) = new list<Declaration*>; }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 144 "source.y"
    { ((yyval.declarations)=(yyvsp[(1) - (2)].declarations))->push_back((yyvsp[(2) - (2)].declaration)); }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 147 "source.y"
    { (yyval.paramdeclarations) = new list<ParamDeclaration*>; }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 148 "source.y"
    { ((yyval.paramdeclarations)=(yyvsp[(1) - (2)].paramdeclarations))->push_back((yyvsp[(2) - (2)].paramdeclaration)); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 151 "source.y"
    { ((yyval.statements) = new list<Statement*>)->push_back((yyvsp[(1) - (2)].statement)); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 152 "source.y"
    { ((yyval.statements)=(yyvsp[(1) - (3)].statements))->push_back((yyvsp[(2) - (3)].statement)); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 155 "source.y"
    { ((yyval.ids) = new list<string*>)->push_back((yyvsp[(1) - (1)].ident)); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 156 "source.y"
    { ((yyval.ids)=(yyvsp[(1) - (3)].ids))->push_back((yyvsp[(3) - (3)].ident)); }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 159 "source.y"
    { ((yyval.vars) = new list<Var*>)->push_back((yyvsp[(1) - (1)].var)); }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 160 "source.y"
    { ((yyval.vars)=(yyvsp[(1) - (3)].vars))->push_back((yyvsp[(3) - (3)].var)); }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 163 "source.y"
    { (yyval.expressions) = new list<Expression*>; }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 164 "source.y"
    { (yyval.expressions) = (yyvsp[(1) - (1)].nonemptyexpressionlist); }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 168 "source.y"
    { ((yyval.nonemptyexpressionlist) = new list<Expression*>)->push_back((yyvsp[(1) - (1)].expression)); }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 169 "source.y"
    { ((yyval.nonemptyexpressionlist)=(yyvsp[(1) - (3)].nonemptyexpressionlist))->push_back((yyvsp[(3) - (3)].expression)); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 172 "source.y"
    { (yyval.program) = new Program((yyvsp[(1) - (1)].functions)); }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 179 "source.y"
    { (yyval.function) = new Function((yyvsp[(1) - (12)].junk),(yyvsp[(2) - (12)].ident),(yyvsp[(3) - (12)].junk),(yyvsp[(4) - (12)].junk),(yyvsp[(5) - (12)].paramdeclarations),(yyvsp[(6) - (12)].junk),(yyvsp[(7) - (12)].junk),(yyvsp[(8) - (12)].declarations),(yyvsp[(9) - (12)].junk),(yyvsp[(10) - (12)].junk),(yyvsp[(11) - (12)].statements),(yyvsp[(12) - (12)].junk)); }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 183 "source.y"
    { (yyval.declaration) = new Declaration((yyvsp[(1) - (4)].ids),(yyvsp[(2) - (4)].junk),(yyvsp[(3) - (4)].junk)); }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 185 "source.y"
    { (yyval.declaration) = new Declaration((yyvsp[(1) - (9)].ids),(yyvsp[(2) - (9)].junk),(yyvsp[(3) - (9)].junk),(yyvsp[(4) - (9)].junk),(yyvsp[(5) - (9)].int_val),(yyvsp[(6) - (9)].junk),(yyvsp[(7) - (9)].junk),(yyvsp[(8) - (9)].junk)); }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 188 "source.y"
    { (yyval.paramdeclaration) = new ParamDeclaration((yyvsp[(1) - (4)].ids),(yyvsp[(2) - (4)].junk),(yyvsp[(3) - (4)].junk)); }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 190 "source.y"
    { (yyval.paramdeclaration) = new ParamDeclaration((yyvsp[(1) - (9)].ids),(yyvsp[(2) - (9)].junk),(yyvsp[(3) - (9)].junk),(yyvsp[(4) - (9)].junk),(yyvsp[(5) - (9)].int_val),(yyvsp[(6) - (9)].junk),(yyvsp[(7) - (9)].junk),(yyvsp[(8) - (9)].junk)); }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 193 "source.y"
    { (yyval.statement) = new AssignmentStmt((yyvsp[(1) - (3)].var),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 195 "source.y"
    { (yyval.statement) = new IfThenStmt((yyvsp[(1) - (5)].junk),(yyvsp[(2) - (5)].boolexpr),(yyvsp[(3) - (5)].junk),(yyvsp[(4) - (5)].statements),(yyvsp[(5) - (5)].junk)); }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 197 "source.y"
    { (yyval.statement) = new IfThenElseStmt((yyvsp[(1) - (7)].junk),(yyvsp[(2) - (7)].boolexpr),(yyvsp[(3) - (7)].junk),(yyvsp[(4) - (7)].statements),(yyvsp[(5) - (7)].junk),(yyvsp[(6) - (7)].statements),(yyvsp[(7) - (7)].junk)); }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 199 "source.y"
    { (yyval.statement) = new WhileStmt((yyvsp[(1) - (5)].junk),(yyvsp[(2) - (5)].boolexpr),(yyvsp[(3) - (5)].junk),(yyvsp[(4) - (5)].statements),(yyvsp[(5) - (5)].junk)); }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 201 "source.y"
    { (yyval.statement) = new DoWhileStmt((yyvsp[(1) - (6)].junk),(yyvsp[(2) - (6)].junk),(yyvsp[(3) - (6)].statements),(yyvsp[(4) - (6)].junk),(yyvsp[(5) - (6)].junk),(yyvsp[(6) - (6)].boolexpr)); }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 202 "source.y"
    { (yyval.statement) = new ReadStmt((yyvsp[(1) - (2)].junk),(yyvsp[(2) - (2)].vars)); }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 203 "source.y"
    { (yyval.statement) = new WriteStmt((yyvsp[(1) - (2)].junk),(yyvsp[(2) - (2)].vars)); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 204 "source.y"
    { (yyval.statement) = new ContinueStmt((yyvsp[(1) - (1)].junk)); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 205 "source.y"
    { (yyval.statement) = new ReturnStmt((yyvsp[(1) - (2)].junk),(yyvsp[(2) - (2)].expression)); }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 208 "source.y"
    { (yyval.boolexpr) = new BoolExpr((yyvsp[(1) - (3)].expression),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 209 "source.y"
    { (yyval.boolexpr) = new BoolExpr((yyvsp[(1) - (3)].expression),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 210 "source.y"
    { (yyval.boolexpr) = new BoolExpr((yyvsp[(1) - (3)].expression),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 211 "source.y"
    { (yyval.boolexpr) = new BoolExpr((yyvsp[(1) - (3)].expression),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 212 "source.y"
    { (yyval.boolexpr) = new BoolExpr((yyvsp[(1) - (3)].expression),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 213 "source.y"
    { (yyval.boolexpr) = new BoolExpr((yyvsp[(1) - (3)].expression),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 214 "source.y"
    { (yyval.boolexpr) = new BoolExpr((yyvsp[(1) - (3)].boolexpr),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].boolexpr)); }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 215 "source.y"
    { (yyval.boolexpr) = new BoolExpr((yyvsp[(1) - (3)].boolexpr),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].boolexpr)); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 216 "source.y"
    { (yyval.boolexpr) = new BoolExpr(00,(yyvsp[(1) - (2)].junk),(yyvsp[(2) - (2)].boolexpr)); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 217 "source.y"
    { (yyval.boolexpr) = new BoolExpr(00,1,00); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 218 "source.y"
    { (yyval.boolexpr) = new BoolExpr(00,0,00); }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 219 "source.y"
    { (yyval.boolexpr) = (yyvsp[(2) - (3)].boolexpr); }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 222 "source.y"
    { (yyval.expression) = new Expression((yyvsp[(1) - (1)].var)); }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 223 "source.y"
    { (yyval.expression) = new Expression((yyvsp[(1) - (1)].int_val)); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 224 "source.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 225 "source.y"
    { (yyval.expression) = new Expression((yyvsp[(1) - (4)].ident),(yyvsp[(2) - (4)].junk),(yyvsp[(3) - (4)].expressions),(yyvsp[(4) - (4)].junk)); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 226 "source.y"
    { (yyval.expression) = new Expression((yyvsp[(1) - (3)].expression),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 227 "source.y"
    { (yyval.expression) = new Expression((yyvsp[(1) - (3)].expression),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 228 "source.y"
    { (yyval.expression) = new Expression((yyvsp[(1) - (3)].expression),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 229 "source.y"
    { (yyval.expression) = new Expression((yyvsp[(1) - (3)].expression),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 230 "source.y"
    { (yyval.expression) = new Expression((yyvsp[(1) - (3)].expression),(yyvsp[(2) - (3)].junk),(yyvsp[(3) - (3)].expression)); }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 231 "source.y"
    { (yyval.expression) = new Expression(00,(yyvsp[(1) - (2)].junk),(yyvsp[(2) - (2)].expression)); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 234 "source.y"
    { (yyval.var) = vartab[*(yyvsp[(1) - (1)].ident)]; }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 235 "source.y"
    { (yyval.var) = new Var((yyvsp[(1) - (4)].ident),(yyvsp[(2) - (4)].junk),(yyvsp[(3) - (4)].expression),(yyvsp[(4) - (4)].junk)); }
    break;


/* Line 1792 of yacc.c  */
#line 1869 "source.tab.c"
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


/* Line 2055 of yacc.c  */
#line 240 "source.y"
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






