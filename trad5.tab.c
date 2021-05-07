/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "trad5.y"
                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para cadenas
#include <stdlib.h>           // declaraciones para exit ()

char temp [2048] ;
char funcion_actual [400] ;

#define FF fflush(stdout);    // para forzar la impresion inmediata

char *mi_malloc (int);

char *genera_cadena (char *);

int yylex () ;



char *to_string(int n)
{
    sprintf(temp, "%d", n);
    
    return genera_cadena(temp);

}

#line 99 "trad5.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
    NUMERO = 258,
    IDENTIF = 259,
    INTEGER = 260,
    STRING = 261,
    MAIN = 262,
    WHILE = 263,
    FOR = 264,
    PUTS = 265,
    PRINTF = 266,
    AND = 267,
    OR = 268,
    EQ = 269,
    NEQ = 270,
    LE = 271,
    GE = 272,
    IF = 273,
    ELSE = 274,
    RETURN = 275,
    SIGNO_UNARIO = 276
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "trad5.y"
                      // El tipo de la pila tiene caracter dual
      int valor ;             // - valor numerico de un NUMERO
      char *cadena ;          // - para pasar los nombres de IDENTIFES

#line 175 "trad5.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

#define YYUNDEFTOK  2
#define YYMAXUTOK   276


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    28,     2,     2,
      32,    33,    26,    24,    35,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    30,
      23,    21,    22,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    31,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    95,    95,    98,    99,   105,   110,   114,   113,   126,
     127,   130,   135,   142,   149,   149,   160,   161,   167,   173,
     178,   183,   188,   193,   198,   203,   210,   217,   218,   223,
     230,   237,   244,   251,   252,   255,   260,   267,   274,   279,
     287,   294,   299,   306,   311,   318,   324,   330,   335,   343,
     348,   353,   358,   363,   368,   373,   378,   385,   391,   397,
     402,   407,   412,   416,   417,   422,   429,   433,   438,   442,
     448
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMERO", "IDENTIF", "INTEGER", "STRING",
  "MAIN", "WHILE", "FOR", "PUTS", "PRINTF", "AND", "OR", "EQ", "NEQ", "LE",
  "GE", "IF", "ELSE", "RETURN", "'='", "'>'", "'<'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "SIGNO_UNARIO", "';'", "'}'", "'('", "')'", "'{'", "','",
  "'['", "']'", "$accept", "axioma", "dec_variables", "dec_funciones",
  "funcion", "$@1", "argumentos", "r_argumentos", "return", "funcion_main",
  "$@2", "sentencias", "condicional", "resto_condicional", "bucle_for",
  "bucle_while", "impresion_string", "llamada_funcion",
  "argumentos_llamada", "r_argumentos_llamada", "impresion", "r_impresion",
  "declaracion", "r_declaracion", "tipo_declaracion", "asignacion",
  "r_asignacion", "expresion_bool", "expresion", "termino", "operando", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    61,    62,    60,    43,    45,    42,    47,    37,   276,
      59,   125,    40,    41,   123,    44,    91,    93
};
# endif

#define YYPACT_NINF (-59)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,     2,    32,    65,    34,    -2,   -59,    16,   -59,   -59,
     -59,   -59,    37,    39,    21,    72,     2,    58,    68,    65,
     -59,   -59,    64,   -59,    97,    70,   -59,   -59,   100,    74,
     -59,    82,    98,   103,    88,    97,    88,     3,   102,   106,
     119,   121,   124,     4,   105,   -59,    88,    88,    88,   127,
     128,   129,   130,   131,   132,   -59,   -59,     4,     4,   151,
       4,   158,   126,   157,     4,   -59,    31,     1,     1,     4,
     -59,    61,   -59,   -59,    88,   -59,   -59,   -59,    88,    88,
      88,    88,    88,   158,    61,   133,   -59,   101,   134,    -3,
      95,    29,   135,   136,   137,     5,   161,   -59,   -59,   122,
       4,     4,     4,     4,     4,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     4,   147,     4,     4,   139,     4,     4,
       4,     4,     4,     4,     4,   -59,     4,   140,   138,   -59,
      15,    15,   -59,   -59,   -59,   -59,     4,   -59,   -59,    88,
      61,    61,    61,    61,    61,    61,     7,   143,   117,    88,
     -59,    61,   146,   158,   -59,     4,   148,   -59,   145,   -59,
     162,   149,   150,   -59,    88,    88,   154,   155,   -59,   -59
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     0,     0,    44,    40,    42,     1,     7,
      14,     2,     0,     0,     3,     0,     0,     0,     0,     0,
       6,     4,     0,    41,     9,     0,     5,    43,     0,     0,
      10,     0,    12,     0,    16,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,    15,    16,    16,    16,     0,
       0,     0,     0,     0,    46,    11,     8,     0,    33,     0,
       0,     0,     0,     0,     0,    68,    66,     0,     0,     0,
      70,    13,    62,    63,    16,    25,    24,    23,    16,    16,
      16,    16,    16,     0,    47,     0,    34,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
       0,     0,     0,     0,     0,    22,    20,    21,    19,    17,
      18,    45,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,    69,
      57,    58,    59,    60,    61,    35,     0,    49,    50,    16,
      51,    52,    54,    53,    56,    55,     0,     0,    39,    16,
      67,    48,     0,     0,    37,     0,     0,    30,     0,    38,
      27,     0,     0,    26,    16,    16,     0,     0,    29,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -59,   -59,   156,   163,   -59,   -59,   -59,   152,   -59,   -59,
     -59,   -25,   -59,   -59,   -59,   -59,   -59,   -34,   -59,    67,
     -59,    33,    52,   173,   -59,   -58,   -59,   -33,   -42,   -59,
       6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    11,    12,    17,    29,    30,    44,    13,
      18,    45,    46,   163,    47,    48,    49,    70,    85,    86,
      51,   147,    52,     6,     7,    53,    54,    89,    90,    72,
      73
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      50,    71,    50,    92,    65,    66,     5,    65,    66,   115,
     116,    56,    50,    50,    50,    84,    87,   115,   116,   115,
     116,    75,    76,    77,    57,   111,     1,    99,    67,    68,
     117,    95,     8,    69,    15,    58,    69,   153,   127,    59,
      50,   102,   103,   104,    50,    50,    50,    50,    50,   105,
      57,    16,     4,   106,   107,   108,   109,   110,   130,   131,
     132,   133,   134,    58,    14,    59,     4,    96,    19,     9,
      20,    87,    10,    97,    98,    22,   140,   141,   142,   143,
     144,   145,   137,   138,   148,   100,   101,   102,   103,   104,
      24,   146,    37,     1,   151,   158,    38,    39,    40,    41,
      25,    27,    28,    31,    32,    50,    42,    33,    43,   118,
     119,   120,   121,   148,   152,    50,    34,   122,   123,   100,
     101,   102,   103,   104,   156,   100,   101,   102,   103,   104,
      50,    50,    93,    35,    60,    74,   113,    36,    61,   166,
     167,   100,   101,   102,   103,   104,   100,   101,   102,   103,
     104,    62,   155,    63,    88,   129,    64,    78,    79,    80,
      81,    82,    91,    94,   128,   124,   112,    83,   136,   125,
      21,   114,   126,   139,   149,   150,   154,   157,   161,   160,
     135,   162,    26,   164,   165,   168,   169,    55,   159,    23
};

static const yytype_uint8 yycheck[] =
{
      34,    43,    36,    61,     3,     4,     4,     3,     4,    12,
      13,    36,    46,    47,    48,    57,    58,    12,    13,    12,
      13,    46,    47,    48,    21,    83,     5,    69,    24,    25,
      33,    64,     0,    32,    36,    32,    32,    30,    33,    36,
      74,    26,    27,    28,    78,    79,    80,    81,    82,    74,
      21,    35,     0,    78,    79,    80,    81,    82,   100,   101,
     102,   103,   104,    32,    30,    36,    14,    36,    31,     4,
      31,   113,     7,    67,    68,     3,   118,   119,   120,   121,
     122,   123,   115,   116,   126,    24,    25,    26,    27,    28,
      32,   124,     4,     5,   136,   153,     8,     9,    10,    11,
      32,    37,     5,    33,     4,   139,    18,    33,    20,    14,
      15,    16,    17,   155,   139,   149,    34,    22,    23,    24,
      25,    26,    27,    28,   149,    24,    25,    26,    27,    28,
     164,   165,     6,    35,    32,    30,    35,    34,    32,   164,
     165,    24,    25,    26,    27,    28,    24,    25,    26,    27,
      28,    32,    35,    32,     3,    33,    32,    30,    30,    30,
      30,    30,     4,     6,     3,    30,    33,    35,    21,    33,
      14,    37,    35,    34,    34,    37,    33,    31,    33,    31,
     113,    19,    19,    34,    34,    31,    31,    35,   155,    16
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    39,    40,    60,     4,    61,    62,     0,     4,
       7,    41,    42,    47,    30,    36,    35,    43,    48,    31,
      31,    40,     3,    61,    32,    32,    41,    37,     5,    44,
      45,    33,     4,    33,    34,    35,    34,     4,     8,     9,
      10,    11,    18,    20,    46,    49,    50,    52,    53,    54,
      55,    58,    60,    63,    64,    45,    49,    21,    32,    36,
      32,    32,    32,    32,    32,     3,     4,    24,    25,    32,
      55,    66,    67,    68,    30,    49,    49,    49,    30,    30,
      30,    30,    30,    35,    66,    56,    57,    66,     3,    65,
      66,     4,    63,     6,     6,    65,    36,    68,    68,    66,
      24,    25,    26,    27,    28,    49,    49,    49,    49,    49,
      49,    63,    33,    35,    37,    12,    13,    33,    14,    15,
      16,    17,    22,    23,    30,    33,    35,    33,     3,    33,
      66,    66,    66,    66,    66,    57,    21,    65,    65,    34,
      66,    66,    66,    66,    66,    66,    65,    59,    66,    34,
      37,    66,    49,    30,    33,    35,    49,    31,    63,    59,
      31,    33,    19,    51,    34,    34,    49,    49,    31,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    43,    42,    44,
      44,    45,    45,    46,    48,    47,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    50,    51,    51,    52,
      53,    54,    55,    56,    56,    57,    57,    58,    59,    59,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    68,    68,    68,    68,
      68
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     3,     3,     2,     0,     7,     0,
       1,     4,     2,     2,     0,     6,     0,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     8,     0,     4,    11,
       7,     4,     4,     0,     1,     3,     1,     6,     3,     1,
       2,     3,     1,     4,     1,     3,     1,     3,     6,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     2,     2,     1,     4,     1,     3,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 95 "trad5.y"
                                      { printf ("%s%s", (yyvsp[-1].cadena), (yyvsp[0].cadena)) ; }
#line 1462 "trad5.tab.c"
    break;

  case 3:
#line 98 "trad5.y"
                            { (yyval.cadena)=""; }
#line 1468 "trad5.tab.c"
    break;

  case 4:
#line 99 "trad5.y"
                                                { 
                                                strcpy (temp, "") ;
                                                sprintf(temp,"%s%s",(yyvsp[-2].cadena),(yyvsp[0].cadena));
                                                (yyval.cadena) = genera_cadena (temp) ;
                                                }
#line 1478 "trad5.tab.c"
    break;

  case 5:
#line 105 "trad5.y"
                                                { 
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"%s\n%s",(yyvsp[-2].cadena),(yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ;
                                                }
#line 1488 "trad5.tab.c"
    break;

  case 6:
#line 110 "trad5.y"
                                      { (yyval.cadena) = (yyvsp[-1].cadena); }
#line 1494 "trad5.tab.c"
    break;

  case 7:
#line 114 "trad5.y"
                                                        { 
                                                            strcpy (funcion_actual, "") ;    
                                                            sprintf(funcion_actual,"%s", (yyvsp[0].cadena));
                                                        }
#line 1503 "trad5.tab.c"
    break;

  case 8:
#line 119 "trad5.y"
                                                        { 
                                                            strcpy (temp, "") ;  
                                                            sprintf(temp,"( defun %s ( %s )%s\n)", (yyvsp[-6].cadena), (yyvsp[-3].cadena), (yyvsp[0].cadena));
                                                            (yyval.cadena) = genera_cadena (temp) ;                                         
                                                        }
#line 1513 "trad5.tab.c"
    break;

  case 9:
#line 126 "trad5.y"
                                                        { (yyval.cadena) = ""; }
#line 1519 "trad5.tab.c"
    break;

  case 10:
#line 127 "trad5.y"
                                        { (yyval.cadena) = (yyvsp[0].cadena); }
#line 1525 "trad5.tab.c"
    break;

  case 11:
#line 130 "trad5.y"
                                                {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"%s %s",(yyvsp[-2].cadena),(yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ;
                                                }
#line 1535 "trad5.tab.c"
    break;

  case 12:
#line 135 "trad5.y"
                                                {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"%s", (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ;
                                                }
#line 1545 "trad5.tab.c"
    break;

  case 13:
#line 142 "trad5.y"
                                            {  
                                                strcpy (temp, "") ;
                                                sprintf(temp,"( return-from %s %s )", funcion_actual, (yyvsp[0].cadena));
                                                (yyval.cadena) = genera_cadena (temp) ;
                                            }
#line 1555 "trad5.tab.c"
    break;

  case 14:
#line 149 "trad5.y"
                                                        { 
                                                            strcpy (funcion_actual, "") ;    
                                                            sprintf(funcion_actual,"%s", (yyvsp[0].cadena));
                                                        }
#line 1564 "trad5.tab.c"
    break;

  case 15:
#line 153 "trad5.y"
                                        { 
                                            strcpy (temp, "") ;
                                            sprintf(temp,"( defun main ()%s \n)",(yyvsp[0].cadena));
                                            (yyval.cadena) = genera_cadena (temp) ;                                          
                                        }
#line 1574 "trad5.tab.c"
    break;

  case 16:
#line 160 "trad5.y"
                                            { (yyval.cadena) = ""; }
#line 1580 "trad5.tab.c"
    break;

  case 17:
#line 161 "trad5.y"
                                            {  
                                                strcpy (temp, "") ;
                                                sprintf(temp,"\n%s%s",(yyvsp[-2].cadena),(yyvsp[0].cadena));
                                                (yyval.cadena) = genera_cadena (temp) ;
                                            }
#line 1590 "trad5.tab.c"
    break;

  case 18:
#line 167 "trad5.y"
                                                {  
                                                strcpy (temp, "") ;
                                                sprintf(temp,"\n%s%s",(yyvsp[-2].cadena),(yyvsp[0].cadena));
                                                (yyval.cadena) = genera_cadena (temp) ;
                                            }
#line 1600 "trad5.tab.c"
    break;

  case 19:
#line 173 "trad5.y"
                                                {  
                                                strcpy (temp, "") ;
                                                sprintf(temp,"\n%s%s",(yyvsp[-2].cadena),(yyvsp[0].cadena));
                                                (yyval.cadena) = genera_cadena (temp) ;
                                            }
#line 1610 "trad5.tab.c"
    break;

  case 20:
#line 178 "trad5.y"
                                                        {  
                                                        strcpy (temp, "") ;
                                                        sprintf(temp,"\n%s%s",(yyvsp[-2].cadena),(yyvsp[0].cadena));
                                                        (yyval.cadena) = genera_cadena (temp) ;
                                                    }
#line 1620 "trad5.tab.c"
    break;

  case 21:
#line 183 "trad5.y"
                                                        {  
                                                        strcpy (temp, "") ;
                                                        sprintf(temp,"\n%s%s",(yyvsp[-2].cadena),(yyvsp[0].cadena));
                                                        (yyval.cadena) = genera_cadena (temp) ;
                                                    }
#line 1630 "trad5.tab.c"
    break;

  case 22:
#line 188 "trad5.y"
                                                        {  
                                                        strcpy (temp, "") ;
                                                        sprintf(temp,"\n%s%s",(yyvsp[-2].cadena),(yyvsp[0].cadena));
                                                        (yyval.cadena) = genera_cadena (temp) ;
                                                    }
#line 1640 "trad5.tab.c"
    break;

  case 23:
#line 193 "trad5.y"
                                                {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"\n%s%s",(yyvsp[-1].cadena),(yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ;
                                                }
#line 1650 "trad5.tab.c"
    break;

  case 24:
#line 198 "trad5.y"
                                                {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"\n%s%s",(yyvsp[-1].cadena),(yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ;
                                                }
#line 1660 "trad5.tab.c"
    break;

  case 25:
#line 203 "trad5.y"
                                                {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"\n%s%s",(yyvsp[-1].cadena),(yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ;
                                                }
#line 1670 "trad5.tab.c"
    break;

  case 26:
#line 210 "trad5.y"
                                                                             {  
                                                                                strcpy (temp, "") ;
                                                                                sprintf(temp,"( if %s %s %s\n)", (yyvsp[-5].cadena), (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                                                (yyval.cadena) = genera_cadena (temp) ;
                                                                            }
#line 1680 "trad5.tab.c"
    break;

  case 27:
#line 217 "trad5.y"
                                                                { (yyval.cadena) = ""; }
#line 1686 "trad5.tab.c"
    break;

  case 28:
#line 218 "trad5.y"
                                                {   strcpy (temp, "") ;
                                                    sprintf(temp,"%s ", (yyvsp[-1].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ;
                                                }
#line 1695 "trad5.tab.c"
    break;

  case 29:
#line 223 "trad5.y"
                                                                                         {
                                                                                            strcpy (temp, "") ;
                                                                                            sprintf(temp," %s \n ( loop while %s do %s \n%s)", (yyvsp[-8].cadena), (yyvsp[-6].cadena), (yyvsp[-1].cadena), (yyvsp[-4].cadena));
                                                                                            (yyval.cadena) = genera_cadena (temp) ;
                                                                                        }
#line 1705 "trad5.tab.c"
    break;

  case 30:
#line 230 "trad5.y"
                                                               {  
                                                                strcpy (temp, "") ;
                                                                sprintf(temp,"( loop while %s do %s )", (yyvsp[-4].cadena), (yyvsp[-1].cadena));
                                                                (yyval.cadena) = genera_cadena (temp) ;
                                                            }
#line 1715 "trad5.tab.c"
    break;

  case 31:
#line 237 "trad5.y"
                                        {
                                            strcpy (temp, "") ;
                                            sprintf(temp,"( print \"%s\" )", (yyvsp[-1].cadena));
                                            (yyval.cadena) = genera_cadena (temp) ;
                                        }
#line 1725 "trad5.tab.c"
    break;

  case 32:
#line 244 "trad5.y"
                                                    {
                                                        strcpy (temp, "") ;
                                                        sprintf(temp,"( %s %s )", (yyvsp[-3].cadena), (yyvsp[-1].cadena));
                                                        (yyval.cadena) = genera_cadena (temp) ;
                                                    }
#line 1735 "trad5.tab.c"
    break;

  case 33:
#line 251 "trad5.y"
                                                                { (yyval.cadena) = ""; }
#line 1741 "trad5.tab.c"
    break;

  case 34:
#line 252 "trad5.y"
                                                { (yyval.cadena) = (yyvsp[0].cadena); }
#line 1747 "trad5.tab.c"
    break;

  case 35:
#line 255 "trad5.y"
                                                          {  
                                                            strcpy (temp, "") ;
                                                            sprintf(temp,"%s %s",(yyvsp[-2].cadena),(yyvsp[0].cadena));
                                                            (yyval.cadena) = genera_cadena (temp) ;
                                                        }
#line 1757 "trad5.tab.c"
    break;

  case 36:
#line 260 "trad5.y"
                                                {  
                                                    strcpy (temp, "") ;
                                                    sprintf(temp,"%s", (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ;
                                                }
#line 1767 "trad5.tab.c"
    break;

  case 37:
#line 267 "trad5.y"
                                                    { 
                                                        strcpy (temp, "") ;
                                                        sprintf(temp,"%s", (yyvsp[-1].cadena));
                                                        (yyval.cadena) = genera_cadena (temp) ;
                                                    }
#line 1777 "trad5.tab.c"
    break;

  case 38:
#line 274 "trad5.y"
                                       { 
                                            strcpy (temp, "") ;
                                            sprintf(temp,"( print %s ) %s", (yyvsp[-2].cadena), (yyvsp[0].cadena));                                         
                                            (yyval.cadena) = genera_cadena (temp) ;
                                        }
#line 1787 "trad5.tab.c"
    break;

  case 39:
#line 279 "trad5.y"
                            { 
                                strcpy (temp, "") ;
                                sprintf(temp,"( print %s )", (yyvsp[0].cadena)) ;                                          
                                (yyval.cadena) = genera_cadena (temp) ;
                            }
#line 1797 "trad5.tab.c"
    break;

  case 40:
#line 287 "trad5.y"
                                        { 
                                            strcpy (temp, "") ;
                                            sprintf(temp,"%s", (yyvsp[0].cadena)) ;                                          
                                            (yyval.cadena) = genera_cadena (temp) ;
                                        }
#line 1807 "trad5.tab.c"
    break;

  case 41:
#line 294 "trad5.y"
                                                    { 
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "%s\n%s", (yyvsp[-2].cadena), (yyvsp[0].cadena)) ;                                          
                                                        (yyval.cadena) = genera_cadena (temp) ;
                                                    }
#line 1817 "trad5.tab.c"
    break;

  case 42:
#line 299 "trad5.y"
                                                    { 
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "%s\n", (yyvsp[0].cadena)) ;                                          
                                                        (yyval.cadena) = genera_cadena (temp) ;
                                                    }
#line 1827 "trad5.tab.c"
    break;

  case 43:
#line 306 "trad5.y"
                                            { 
                                                strcpy (temp, "") ;
                                                sprintf (temp, "( setq %s ( make-array %d ) ) ", (yyvsp[-3].cadena), (yyvsp[-1].valor)) ;                                          
                                                (yyval.cadena) = genera_cadena (temp) ;
                                            }
#line 1837 "trad5.tab.c"
    break;

  case 44:
#line 311 "trad5.y"
                                            { 
                                                strcpy (temp, "") ;
                                                sprintf (temp, "( setq %s 0 ) ", (yyvsp[0].cadena)) ;                                          
                                                (yyval.cadena) = genera_cadena (temp) ;
                                            }
#line 1847 "trad5.tab.c"
    break;

  case 45:
#line 318 "trad5.y"
                                                    {  
                                                          strcpy (temp, "") ;
                                                          sprintf(temp,"%s\n%s", (yyvsp[-2].cadena), (yyvsp[0].cadena)) ;                                                                                                   
                                                          (yyval.cadena) = genera_cadena (temp) ;
                                                        }
#line 1857 "trad5.tab.c"
    break;

  case 46:
#line 324 "trad5.y"
                                                   { 
                                                          strcpy (temp, "") ; 
                                                          sprintf(temp,"%s", (yyvsp[0].cadena)) ;                                                                                                    
                                                          (yyval.cadena) = genera_cadena (temp) ;
                                                        }
#line 1867 "trad5.tab.c"
    break;

  case 47:
#line 330 "trad5.y"
                                                        { 
                                                          strcpy (temp, "") ;
                                                          sprintf (temp, "( setq %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena)) ;                                       
                                                          (yyval.cadena) = genera_cadena (temp) ;
                                                        }
#line 1877 "trad5.tab.c"
    break;

  case 48:
#line 335 "trad5.y"
                                                        { 
                                                          strcpy (temp, "") ;
                                                          sprintf (temp, "( setf ( aref %s %d ) %s ) ", (yyvsp[-5].cadena), (yyvsp[-3].valor), (yyvsp[0].cadena)) ;                                       
                                                          (yyval.cadena) = genera_cadena (temp) ;
                                                        }
#line 1887 "trad5.tab.c"
    break;

  case 49:
#line 343 "trad5.y"
                                                        {  
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "( And %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                        (yyval.cadena) = genera_cadena (temp) ; 
                                                        }
#line 1897 "trad5.tab.c"
    break;

  case 50:
#line 348 "trad5.y"
                                                        {  
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "( Or %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                        (yyval.cadena) = genera_cadena (temp) ; 
                                                        }
#line 1907 "trad5.tab.c"
    break;

  case 51:
#line 353 "trad5.y"
                                            {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( = %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                            }
#line 1917 "trad5.tab.c"
    break;

  case 52:
#line 358 "trad5.y"
                                            {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( /= %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                            }
#line 1927 "trad5.tab.c"
    break;

  case 53:
#line 363 "trad5.y"
                                            {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( >= %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                            }
#line 1937 "trad5.tab.c"
    break;

  case 54:
#line 368 "trad5.y"
                                            {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( <= %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                            }
#line 1947 "trad5.tab.c"
    break;

  case 55:
#line 373 "trad5.y"
                                            {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( < %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                            }
#line 1957 "trad5.tab.c"
    break;

  case 56:
#line 378 "trad5.y"
                                            {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( > %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                            }
#line 1967 "trad5.tab.c"
    break;

  case 57:
#line 385 "trad5.y"
                                                    {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( + %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                                }
#line 1977 "trad5.tab.c"
    break;

  case 58:
#line 391 "trad5.y"
                                                        {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( - %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                                }
#line 1987 "trad5.tab.c"
    break;

  case 59:
#line 397 "trad5.y"
                                                        {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( * %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                                }
#line 1997 "trad5.tab.c"
    break;

  case 60:
#line 402 "trad5.y"
                                                        {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( / %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                                }
#line 2007 "trad5.tab.c"
    break;

  case 61:
#line 407 "trad5.y"
                                                        {  
                                                    strcpy (temp, "") ;
                                                    sprintf (temp, "( %% %s %s ) ", (yyvsp[-2].cadena), (yyvsp[0].cadena));
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                                }
#line 2017 "trad5.tab.c"
    break;

  case 62:
#line 412 "trad5.y"
                                                                { (yyval.cadena) = (yyvsp[0].cadena); }
#line 2023 "trad5.tab.c"
    break;

  case 63:
#line 416 "trad5.y"
                                                                    { (yyval.cadena) = (yyvsp[0].cadena); }
#line 2029 "trad5.tab.c"
    break;

  case 64:
#line 417 "trad5.y"
                                                        { 
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "+ $2");
                                                        (yyval.cadena) = genera_cadena (temp) ; 
                                                    }
#line 2039 "trad5.tab.c"
    break;

  case 65:
#line 422 "trad5.y"
                                                        { 
                                                        strcpy (temp, "") ;
                                                        sprintf (temp, "- $2");
                                                        (yyval.cadena) = genera_cadena (temp) ; 
                                                    }
#line 2049 "trad5.tab.c"
    break;

  case 66:
#line 429 "trad5.y"
                                                {   
                                        sprintf (temp, "%s", (yyvsp[0].cadena)) ;
                                        (yyval.cadena) = genera_cadena (temp) ; 
                                    }
#line 2058 "trad5.tab.c"
    break;

  case 67:
#line 433 "trad5.y"
                                                        {   
                                                    sprintf (temp, "( aref %s %d )", (yyvsp[-3].cadena), (yyvsp[-1].valor)) ;
                                                    (yyval.cadena) = genera_cadena (temp) ; 
                                                }
#line 2067 "trad5.tab.c"
    break;

  case 68:
#line 438 "trad5.y"
                                                { 
                                        sprintf (temp, "%d", (yyvsp[0].valor)) ;
                                        (yyval.cadena) = genera_cadena (temp) ; 
                                    }
#line 2076 "trad5.tab.c"
    break;

  case 69:
#line 442 "trad5.y"
                                                        {  
                                                strcpy (temp, "") ;
                                                //sprintf(temp, "( %s )", $2);
                                                sprintf(temp, "%s", (yyvsp[-1].cadena));
                                                (yyval.cadena) = genera_cadena (temp) ; 
                                            }
#line 2087 "trad5.tab.c"
    break;

  case 70:
#line 448 "trad5.y"
                                                    {  
                                                strcpy (temp, "") ;
                                                sprintf(temp, "%s", (yyvsp[0].cadena));
                                                (yyval.cadena) = genera_cadena (temp) ; 
                                            }
#line 2097 "trad5.tab.c"
    break;


#line 2101 "trad5.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 455 "trad5.y"

                            // SECCION 4    Codigo en C
int n_linea = 1 ;

int yyerror (mensaje)
char *mensaje ;
{
    fprintf (stderr, "%s en la linea %d\n", mensaje, n_linea) ;
    printf ( "\n") ;	// bye
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_pal_reservadas { // para las palabras reservadas de C
    char *nombre ;
    int token ;
} t_reservada ;

t_reservada pal_reservadas [] = { // define las palabras reservadas y los
    "main",        MAIN,           // y los token asociados
    "int",         INTEGER,
    "puts",        PUTS,
    "printf",      PRINTF,
    "!=",          NEQ, 
    "==",          EQ, 
    "<=",          LE, 
    ">=",          GE, 
    "&&",          AND,
    "||",          OR,
    "while",       WHILE,
    "for",         FOR, 
    "if",          IF,
    "else",        ELSE,
    "return",      RETURN,
    NULL,          0               // para marcar el fin de la tabla
} ;

t_reservada *busca_pal_reservada (char *nombre_simbolo)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_reservada *sim ;

    i = 0 ;
    sim = pal_reservadas ;
    while (sim [i].nombre != NULL) {
           if (strcmp (sim [i].nombre, nombre_simbolo) == 0) {
                                         // strcmp(a, b) devuelve == 0 si a==b
                 return &(sim [i]) ;
             }
           i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *mi_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
    char *p ;
    static long int nb = 0;        // sirven para contabilizar la memoria
    static int nv = 0 ;            // solicitada en total

    p = malloc (nbytes) ;
    if (p == NULL) {
         fprintf (stderr, "No queda memoria para %d bytes mas\n", nbytes) ;
         fprintf (stderr, "Reservados %ld bytes en %d llamadas\n", nb, nv) ;
         exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}

char *genera_cadena (char *nombre)     // copia el argumento a un
{                                      // string en memoria dinamica
      char *p ;
      int l ;

      l = strlen (nombre)+1 ;
      p = (char *) mi_malloc (l) ;
      strcpy (p, nombre) ;

      return p ;
}



int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char ops_expandibles [] = "!<=>|%&+-/*" ;
    char cadena [256] ;
    t_reservada *simbolo ;

    do {
    	c = getchar () ;

		if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
			do {		//	OJO que puede funcionar mal si una linea contiene #
			 c = getchar () ;	
			} while (c != '\n') ;
		}
		
		if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
			cc = getchar () ;
			if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
				ungetc (cc, stdin) ;
		 } else {
		     c = getchar () ;	// ...
		     if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
		          do {		// Se trata de codigo inline (Codigo embebido en C)
		              c = getchar () ;
		              putchar (c) ;
		          } while (c != '\n') ;
		     } else {		// ==> comentario, ignorar la linea
		          while (c != '\n') {
		              c = getchar () ;
		          }
		     }
		 }
		}
		
		if (c == '\n')
		 n_linea++ ;
		
    } while (c == ' ' || c == '\n' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
         i = 0 ;
         do {
             c = getchar () ;
             cadena [i++] = c ;
         } while (c != '\"' && i < 255) ;
         if (i == 256) {
              printf ("AVISO: string con mas de 255 caracteres en linea %d\n", n_linea) ;
         }		 	// habria que leer hasta el siguiente " , pero, y si falta?
         cadena [--i] = '\0' ;
         yylval.cadena = genera_cadena (cadena) ;
         return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
         ungetc (c, stdin) ;
         scanf ("%d", &yylval.valor) ;
         //printf ("\nDEV: NUMERO %d\n", yylval.valor) ;        // PARA DEPURAR
         return NUMERO ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
         i = 0 ;
         while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
                 (c >= '0' && c <= '9') || c == '_') && i < 255) {
             cadena [i++] = tolower (c) ;
             c = getchar () ;
         }
         cadena [i] = '\0' ;
         ungetc (c, stdin) ;

         yylval.cadena = genera_cadena (cadena) ;
         simbolo = busca_pal_reservada (yylval.cadena) ;
         if (simbolo == NULL) {    // no es palabra reservada -> identificador 
               //printf ("\nDEV: IDENTIF %s\n", yylval.cadena) ;    // PARA DEPURAR
               return (IDENTIF) ;
         } else {
               //printf ("\nDEV: OTRO %s\n", yylval.cadena) ;       // PARA DEPURAR
               return (simbolo->token) ;
         }
    }

    if (strchr (ops_expandibles, c) != NULL) { // busca c en ops_expandibles
         cc = getchar () ;
         sprintf (cadena, "%c%c", (char) c, (char) cc) ;
         simbolo = busca_pal_reservada (cadena) ;
         if (simbolo == NULL) {
              ungetc (cc, stdin) ;
              yylval.cadena = NULL ;
              return (c) ;
         } else {
              yylval.cadena = genera_cadena (cadena) ; // aunque no se use
              return (simbolo->token) ;
         }
    }

    //printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
         //printf ("tEOF ") ;                                // PARA DEPURAR
         return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
}

