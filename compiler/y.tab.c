/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "diksam.y"

#include <stdio.h>
#include "diksamc.h"
#define YYDEBUG 1

#line 77 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT_LITERAL = 258,             /* INT_LITERAL  */
    DOUBLE_LITERAL = 259,          /* DOUBLE_LITERAL  */
    STRING_LITERAL = 260,          /* STRING_LITERAL  */
    REGEXP_LITERAL = 261,          /* REGEXP_LITERAL  */
    IDENTIFIER = 262,              /* IDENTIFIER  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    ELSIF = 265,                   /* ELSIF  */
    SWITCH = 266,                  /* SWITCH  */
    CASE = 267,                    /* CASE  */
    DEFAULT_T = 268,               /* DEFAULT_T  */
    WHILE = 269,                   /* WHILE  */
    DO_T = 270,                    /* DO_T  */
    FOR = 271,                     /* FOR  */
    FOREACH = 272,                 /* FOREACH  */
    RETURN_T = 273,                /* RETURN_T  */
    BREAK = 274,                   /* BREAK  */
    CONTINUE = 275,                /* CONTINUE  */
    NULL_T = 276,                  /* NULL_T  */
    LP = 277,                      /* LP  */
    RP = 278,                      /* RP  */
    LC = 279,                      /* LC  */
    RC = 280,                      /* RC  */
    LB = 281,                      /* LB  */
    RB = 282,                      /* RB  */
    SEMICOLON = 283,               /* SEMICOLON  */
    COLON = 284,                   /* COLON  */
    COMMA = 285,                   /* COMMA  */
    ASSIGN_T = 286,                /* ASSIGN_T  */
    LOGICAL_AND = 287,             /* LOGICAL_AND  */
    LOGICAL_OR = 288,              /* LOGICAL_OR  */
    EQ = 289,                      /* EQ  */
    NE = 290,                      /* NE  */
    GT = 291,                      /* GT  */
    GE = 292,                      /* GE  */
    LT = 293,                      /* LT  */
    LE = 294,                      /* LE  */
    ADD = 295,                     /* ADD  */
    SUB = 296,                     /* SUB  */
    MUL = 297,                     /* MUL  */
    DIV = 298,                     /* DIV  */
    MOD = 299,                     /* MOD  */
    BIT_AND = 300,                 /* BIT_AND  */
    BIT_OR = 301,                  /* BIT_OR  */
    BIT_XOR = 302,                 /* BIT_XOR  */
    BIT_NOT = 303,                 /* BIT_NOT  */
    TRUE_T = 304,                  /* TRUE_T  */
    FALSE_T = 305,                 /* FALSE_T  */
    EXCLAMATION = 306,             /* EXCLAMATION  */
    DOT = 307,                     /* DOT  */
    ADD_ASSIGN_T = 308,            /* ADD_ASSIGN_T  */
    SUB_ASSIGN_T = 309,            /* SUB_ASSIGN_T  */
    MUL_ASSIGN_T = 310,            /* MUL_ASSIGN_T  */
    DIV_ASSIGN_T = 311,            /* DIV_ASSIGN_T  */
    MOD_ASSIGN_T = 312,            /* MOD_ASSIGN_T  */
    INCREMENT = 313,               /* INCREMENT  */
    DECREMENT = 314,               /* DECREMENT  */
    TRY = 315,                     /* TRY  */
    CATCH = 316,                   /* CATCH  */
    FINALLY = 317,                 /* FINALLY  */
    THROW = 318,                   /* THROW  */
    THROWS = 319,                  /* THROWS  */
    VOID_T = 320,                  /* VOID_T  */
    BOOLEAN_T = 321,               /* BOOLEAN_T  */
    INT_T = 322,                   /* INT_T  */
    DOUBLE_T = 323,                /* DOUBLE_T  */
    STRING_T = 324,                /* STRING_T  */
    NATIVE_POINTER_T = 325,        /* NATIVE_POINTER_T  */
    NEW = 326,                     /* NEW  */
    REQUIRE = 327,                 /* REQUIRE  */
    RENAME = 328,                  /* RENAME  */
    CLASS_T = 329,                 /* CLASS_T  */
    INTERFACE_T = 330,             /* INTERFACE_T  */
    PUBLIC_T = 331,                /* PUBLIC_T  */
    PRIVATE_T = 332,               /* PRIVATE_T  */
    VIRTUAL_T = 333,               /* VIRTUAL_T  */
    OVERRIDE_T = 334,              /* OVERRIDE_T  */
    ABSTRACT_T = 335,              /* ABSTRACT_T  */
    THIS_T = 336,                  /* THIS_T  */
    SUPER_T = 337,                 /* SUPER_T  */
    CONSTRUCTOR = 338,             /* CONSTRUCTOR  */
    INSTANCEOF = 339,              /* INSTANCEOF  */
    DOWN_CAST_BEGIN = 340,         /* DOWN_CAST_BEGIN  */
    DOWN_CAST_END = 341,           /* DOWN_CAST_END  */
    DELEGATE = 342,                /* DELEGATE  */
    FINAL = 343,                   /* FINAL  */
    ENUM = 344,                    /* ENUM  */
    CONST = 345                    /* CONST  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT_LITERAL 258
#define DOUBLE_LITERAL 259
#define STRING_LITERAL 260
#define REGEXP_LITERAL 261
#define IDENTIFIER 262
#define IF 263
#define ELSE 264
#define ELSIF 265
#define SWITCH 266
#define CASE 267
#define DEFAULT_T 268
#define WHILE 269
#define DO_T 270
#define FOR 271
#define FOREACH 272
#define RETURN_T 273
#define BREAK 274
#define CONTINUE 275
#define NULL_T 276
#define LP 277
#define RP 278
#define LC 279
#define RC 280
#define LB 281
#define RB 282
#define SEMICOLON 283
#define COLON 284
#define COMMA 285
#define ASSIGN_T 286
#define LOGICAL_AND 287
#define LOGICAL_OR 288
#define EQ 289
#define NE 290
#define GT 291
#define GE 292
#define LT 293
#define LE 294
#define ADD 295
#define SUB 296
#define MUL 297
#define DIV 298
#define MOD 299
#define BIT_AND 300
#define BIT_OR 301
#define BIT_XOR 302
#define BIT_NOT 303
#define TRUE_T 304
#define FALSE_T 305
#define EXCLAMATION 306
#define DOT 307
#define ADD_ASSIGN_T 308
#define SUB_ASSIGN_T 309
#define MUL_ASSIGN_T 310
#define DIV_ASSIGN_T 311
#define MOD_ASSIGN_T 312
#define INCREMENT 313
#define DECREMENT 314
#define TRY 315
#define CATCH 316
#define FINALLY 317
#define THROW 318
#define THROWS 319
#define VOID_T 320
#define BOOLEAN_T 321
#define INT_T 322
#define DOUBLE_T 323
#define STRING_T 324
#define NATIVE_POINTER_T 325
#define NEW 326
#define REQUIRE 327
#define RENAME 328
#define CLASS_T 329
#define INTERFACE_T 330
#define PUBLIC_T 331
#define PRIVATE_T 332
#define VIRTUAL_T 333
#define OVERRIDE_T 334
#define ABSTRACT_T 335
#define THIS_T 336
#define SUPER_T 337
#define CONSTRUCTOR 338
#define INSTANCEOF 339
#define DOWN_CAST_BEGIN 340
#define DOWN_CAST_END 341
#define DELEGATE 342
#define FINAL 343
#define ENUM 344
#define CONST 345

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 6 "diksam.y"

    char                *identifier;
    PackageName         *package_name;
    RequireList         *require_list;
    RenameList          *rename_list;
    ParameterList       *parameter_list;
    ArgumentList        *argument_list;
    Expression          *expression;
    ExpressionList      *expression_list;
    Statement           *statement;
    StatementList       *statement_list;
    Block               *block;
    Elsif               *elsif;
    CaseList            *case_list;
    CatchClause         *catch_clause;
    AssignmentOperator  assignment_operator;
    TypeSpecifier       *type_specifier;
    DVM_BasicType       basic_type_specifier;
    ArrayDimension      *array_dimension;
    ClassOrMemberModifierList class_or_member_modifier;
    DVM_ClassOrInterface class_or_interface;
    ExtendsList         *extends_list;
    MemberDeclaration   *member_declaration;
    FunctionDefinition  *function_definition;
    ExceptionList       *exception_list;
    Enumerator          *enumerator;

#line 338 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_LITERAL = 3,                /* INT_LITERAL  */
  YYSYMBOL_DOUBLE_LITERAL = 4,             /* DOUBLE_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_REGEXP_LITERAL = 6,             /* REGEXP_LITERAL  */
  YYSYMBOL_IDENTIFIER = 7,                 /* IDENTIFIER  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_ELSIF = 10,                     /* ELSIF  */
  YYSYMBOL_SWITCH = 11,                    /* SWITCH  */
  YYSYMBOL_CASE = 12,                      /* CASE  */
  YYSYMBOL_DEFAULT_T = 13,                 /* DEFAULT_T  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_DO_T = 15,                      /* DO_T  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_FOREACH = 17,                   /* FOREACH  */
  YYSYMBOL_RETURN_T = 18,                  /* RETURN_T  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 20,                  /* CONTINUE  */
  YYSYMBOL_NULL_T = 21,                    /* NULL_T  */
  YYSYMBOL_LP = 22,                        /* LP  */
  YYSYMBOL_RP = 23,                        /* RP  */
  YYSYMBOL_LC = 24,                        /* LC  */
  YYSYMBOL_RC = 25,                        /* RC  */
  YYSYMBOL_LB = 26,                        /* LB  */
  YYSYMBOL_RB = 27,                        /* RB  */
  YYSYMBOL_SEMICOLON = 28,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 29,                     /* COLON  */
  YYSYMBOL_COMMA = 30,                     /* COMMA  */
  YYSYMBOL_ASSIGN_T = 31,                  /* ASSIGN_T  */
  YYSYMBOL_LOGICAL_AND = 32,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 33,                /* LOGICAL_OR  */
  YYSYMBOL_EQ = 34,                        /* EQ  */
  YYSYMBOL_NE = 35,                        /* NE  */
  YYSYMBOL_GT = 36,                        /* GT  */
  YYSYMBOL_GE = 37,                        /* GE  */
  YYSYMBOL_LT = 38,                        /* LT  */
  YYSYMBOL_LE = 39,                        /* LE  */
  YYSYMBOL_ADD = 40,                       /* ADD  */
  YYSYMBOL_SUB = 41,                       /* SUB  */
  YYSYMBOL_MUL = 42,                       /* MUL  */
  YYSYMBOL_DIV = 43,                       /* DIV  */
  YYSYMBOL_MOD = 44,                       /* MOD  */
  YYSYMBOL_BIT_AND = 45,                   /* BIT_AND  */
  YYSYMBOL_BIT_OR = 46,                    /* BIT_OR  */
  YYSYMBOL_BIT_XOR = 47,                   /* BIT_XOR  */
  YYSYMBOL_BIT_NOT = 48,                   /* BIT_NOT  */
  YYSYMBOL_TRUE_T = 49,                    /* TRUE_T  */
  YYSYMBOL_FALSE_T = 50,                   /* FALSE_T  */
  YYSYMBOL_EXCLAMATION = 51,               /* EXCLAMATION  */
  YYSYMBOL_DOT = 52,                       /* DOT  */
  YYSYMBOL_ADD_ASSIGN_T = 53,              /* ADD_ASSIGN_T  */
  YYSYMBOL_SUB_ASSIGN_T = 54,              /* SUB_ASSIGN_T  */
  YYSYMBOL_MUL_ASSIGN_T = 55,              /* MUL_ASSIGN_T  */
  YYSYMBOL_DIV_ASSIGN_T = 56,              /* DIV_ASSIGN_T  */
  YYSYMBOL_MOD_ASSIGN_T = 57,              /* MOD_ASSIGN_T  */
  YYSYMBOL_INCREMENT = 58,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 59,                 /* DECREMENT  */
  YYSYMBOL_TRY = 60,                       /* TRY  */
  YYSYMBOL_CATCH = 61,                     /* CATCH  */
  YYSYMBOL_FINALLY = 62,                   /* FINALLY  */
  YYSYMBOL_THROW = 63,                     /* THROW  */
  YYSYMBOL_THROWS = 64,                    /* THROWS  */
  YYSYMBOL_VOID_T = 65,                    /* VOID_T  */
  YYSYMBOL_BOOLEAN_T = 66,                 /* BOOLEAN_T  */
  YYSYMBOL_INT_T = 67,                     /* INT_T  */
  YYSYMBOL_DOUBLE_T = 68,                  /* DOUBLE_T  */
  YYSYMBOL_STRING_T = 69,                  /* STRING_T  */
  YYSYMBOL_NATIVE_POINTER_T = 70,          /* NATIVE_POINTER_T  */
  YYSYMBOL_NEW = 71,                       /* NEW  */
  YYSYMBOL_REQUIRE = 72,                   /* REQUIRE  */
  YYSYMBOL_RENAME = 73,                    /* RENAME  */
  YYSYMBOL_CLASS_T = 74,                   /* CLASS_T  */
  YYSYMBOL_INTERFACE_T = 75,               /* INTERFACE_T  */
  YYSYMBOL_PUBLIC_T = 76,                  /* PUBLIC_T  */
  YYSYMBOL_PRIVATE_T = 77,                 /* PRIVATE_T  */
  YYSYMBOL_VIRTUAL_T = 78,                 /* VIRTUAL_T  */
  YYSYMBOL_OVERRIDE_T = 79,                /* OVERRIDE_T  */
  YYSYMBOL_ABSTRACT_T = 80,                /* ABSTRACT_T  */
  YYSYMBOL_THIS_T = 81,                    /* THIS_T  */
  YYSYMBOL_SUPER_T = 82,                   /* SUPER_T  */
  YYSYMBOL_CONSTRUCTOR = 83,               /* CONSTRUCTOR  */
  YYSYMBOL_INSTANCEOF = 84,                /* INSTANCEOF  */
  YYSYMBOL_DOWN_CAST_BEGIN = 85,           /* DOWN_CAST_BEGIN  */
  YYSYMBOL_DOWN_CAST_END = 86,             /* DOWN_CAST_END  */
  YYSYMBOL_DELEGATE = 87,                  /* DELEGATE  */
  YYSYMBOL_FINAL = 88,                     /* FINAL  */
  YYSYMBOL_ENUM = 89,                      /* ENUM  */
  YYSYMBOL_CONST = 90,                     /* CONST  */
  YYSYMBOL_YYACCEPT = 91,                  /* $accept  */
  YYSYMBOL_translation_unit = 92,          /* translation_unit  */
  YYSYMBOL_initial_declaration = 93,       /* initial_declaration  */
  YYSYMBOL_require_list = 94,              /* require_list  */
  YYSYMBOL_require_declaration = 95,       /* require_declaration  */
  YYSYMBOL_package_name = 96,              /* package_name  */
  YYSYMBOL_rename_list = 97,               /* rename_list  */
  YYSYMBOL_rename_declaration = 98,        /* rename_declaration  */
  YYSYMBOL_definition_or_statement = 99,   /* definition_or_statement  */
  YYSYMBOL_basic_type_specifier = 100,     /* basic_type_specifier  */
  YYSYMBOL_identifier_type_specifier = 101, /* identifier_type_specifier  */
  YYSYMBOL_array_type_specifier = 102,     /* array_type_specifier  */
  YYSYMBOL_type_specifier = 103,           /* type_specifier  */
  YYSYMBOL_function_definition = 104,      /* function_definition  */
  YYSYMBOL_parameter_list = 105,           /* parameter_list  */
  YYSYMBOL_argument_list = 106,            /* argument_list  */
  YYSYMBOL_statement_list = 107,           /* statement_list  */
  YYSYMBOL_expression = 108,               /* expression  */
  YYSYMBOL_assignment_expression = 109,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 110,      /* assignment_operator  */
  YYSYMBOL_logical_or_expression = 111,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 112,   /* logical_and_expression  */
  YYSYMBOL_equality_expression = 113,      /* equality_expression  */
  YYSYMBOL_relational_expression = 114,    /* relational_expression  */
  YYSYMBOL_additive_expression = 115,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 116, /* multiplicative_expression  */
  YYSYMBOL_unary_expression = 117,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 118,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 119,       /* primary_expression  */
  YYSYMBOL_primary_no_new_array = 120,     /* primary_no_new_array  */
  YYSYMBOL_array_literal = 121,            /* array_literal  */
  YYSYMBOL_array_creation = 122,           /* array_creation  */
  YYSYMBOL_dimension_expression_list = 123, /* dimension_expression_list  */
  YYSYMBOL_dimension_expression = 124,     /* dimension_expression  */
  YYSYMBOL_dimension_list = 125,           /* dimension_list  */
  YYSYMBOL_expression_list = 126,          /* expression_list  */
  YYSYMBOL_statement = 127,                /* statement  */
  YYSYMBOL_if_statement = 128,             /* if_statement  */
  YYSYMBOL_elsif_list = 129,               /* elsif_list  */
  YYSYMBOL_elsif = 130,                    /* elsif  */
  YYSYMBOL_label_opt = 131,                /* label_opt  */
  YYSYMBOL_switch_statement = 132,         /* switch_statement  */
  YYSYMBOL_case_list = 133,                /* case_list  */
  YYSYMBOL_one_case = 134,                 /* one_case  */
  YYSYMBOL_default_opt = 135,              /* default_opt  */
  YYSYMBOL_case_expression_list = 136,     /* case_expression_list  */
  YYSYMBOL_while_statement = 137,          /* while_statement  */
  YYSYMBOL_for_statement = 138,            /* for_statement  */
  YYSYMBOL_do_while_statement = 139,       /* do_while_statement  */
  YYSYMBOL_foreach_statement = 140,        /* foreach_statement  */
  YYSYMBOL_expression_opt = 141,           /* expression_opt  */
  YYSYMBOL_return_statement = 142,         /* return_statement  */
  YYSYMBOL_identifier_opt = 143,           /* identifier_opt  */
  YYSYMBOL_break_statement = 144,          /* break_statement  */
  YYSYMBOL_continue_statement = 145,       /* continue_statement  */
  YYSYMBOL_try_statement = 146,            /* try_statement  */
  YYSYMBOL_catch_list = 147,               /* catch_list  */
  YYSYMBOL_catch_clause = 148,             /* catch_clause  */
  YYSYMBOL_149_1 = 149,                    /* @1  */
  YYSYMBOL_throw_statement = 150,          /* throw_statement  */
  YYSYMBOL_declaration_statement = 151,    /* declaration_statement  */
  YYSYMBOL_block = 152,                    /* block  */
  YYSYMBOL_153_2 = 153,                    /* @2  */
  YYSYMBOL_class_definition = 154,         /* class_definition  */
  YYSYMBOL_155_3 = 155,                    /* $@3  */
  YYSYMBOL_156_4 = 156,                    /* $@4  */
  YYSYMBOL_157_5 = 157,                    /* $@5  */
  YYSYMBOL_158_6 = 158,                    /* $@6  */
  YYSYMBOL_class_or_member_modifier_list = 159, /* class_or_member_modifier_list  */
  YYSYMBOL_class_or_member_modifier = 160, /* class_or_member_modifier  */
  YYSYMBOL_class_or_interface = 161,       /* class_or_interface  */
  YYSYMBOL_extends = 162,                  /* extends  */
  YYSYMBOL_extends_list = 163,             /* extends_list  */
  YYSYMBOL_member_declaration_list = 164,  /* member_declaration_list  */
  YYSYMBOL_member_declaration = 165,       /* member_declaration  */
  YYSYMBOL_method_member = 166,            /* method_member  */
  YYSYMBOL_method_function_definition = 167, /* method_function_definition  */
  YYSYMBOL_throws_clause = 168,            /* throws_clause  */
  YYSYMBOL_exception_list = 169,           /* exception_list  */
  YYSYMBOL_constructor_definition = 170,   /* constructor_definition  */
  YYSYMBOL_access_modifier = 171,          /* access_modifier  */
  YYSYMBOL_initializer_opt = 172,          /* initializer_opt  */
  YYSYMBOL_field_member = 173,             /* field_member  */
  YYSYMBOL_delegate_definition = 174,      /* delegate_definition  */
  YYSYMBOL_enum_definition = 175,          /* enum_definition  */
  YYSYMBOL_enumerator_list = 176,          /* enumerator_list  */
  YYSYMBOL_const_definition = 177          /* const_definition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int16 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1004

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  235
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  443

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   345


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    92,    92,    93,    97,   100,   104,   108,   114,   115,
     121,   127,   131,   137,   138,   144,   150,   151,   152,   159,
     160,   161,   164,   168,   172,   176,   180,   184,   190,   196,
     202,   208,   214,   218,   219,   222,   226,   230,   235,   241,
     245,   251,   255,   261,   265,   271,   272,   278,   279,   285,
     289,   293,   297,   301,   305,   311,   312,   318,   319,   325,
     326,   330,   336,   337,   341,   345,   349,   355,   356,   360,
     366,   367,   371,   375,   379,   383,   387,   393,   394,   398,
     402,   408,   409,   413,   417,   423,   424,   425,   431,   435,
     440,   444,   448,   452,   456,   460,   461,   462,   463,   464,
     468,   472,   476,   477,   481,   485,   489,   493,   497,   503,
     507,   511,   517,   521,   525,   529,   536,   537,   543,   549,
     553,   560,   564,   570,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   588,   592,   596,   600,
     606,   607,   613,   620,   623,   629,   635,   636,   642,   649,
     652,   658,   662,   668,   674,   681,   687,   694,   697,   700,
     707,   710,   713,   719,   725,   729,   733,   739,   740,   747,
     746,   756,   760,   766,   770,   774,   778,   785,   784,   792,
     801,   799,   810,   808,   817,   816,   826,   824,   835,   836,
     842,   843,   847,   851,   857,   861,   868,   871,   877,   881,
     887,   888,   894,   895,   898,   902,   906,   910,   916,   920,
     924,   929,   936,   939,   945,   949,   955,   959,   963,   967,
     973,   977,   984,   987,   993,   997,  1002,  1006,  1013,  1018,
    1024,  1028,  1034,  1038,  1044,  1048
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_LITERAL",
  "DOUBLE_LITERAL", "STRING_LITERAL", "REGEXP_LITERAL", "IDENTIFIER", "IF",
  "ELSE", "ELSIF", "SWITCH", "CASE", "DEFAULT_T", "WHILE", "DO_T", "FOR",
  "FOREACH", "RETURN_T", "BREAK", "CONTINUE", "NULL_T", "LP", "RP", "LC",
  "RC", "LB", "RB", "SEMICOLON", "COLON", "COMMA", "ASSIGN_T",
  "LOGICAL_AND", "LOGICAL_OR", "EQ", "NE", "GT", "GE", "LT", "LE", "ADD",
  "SUB", "MUL", "DIV", "MOD", "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT",
  "TRUE_T", "FALSE_T", "EXCLAMATION", "DOT", "ADD_ASSIGN_T",
  "SUB_ASSIGN_T", "MUL_ASSIGN_T", "DIV_ASSIGN_T", "MOD_ASSIGN_T",
  "INCREMENT", "DECREMENT", "TRY", "CATCH", "FINALLY", "THROW", "THROWS",
  "VOID_T", "BOOLEAN_T", "INT_T", "DOUBLE_T", "STRING_T",
  "NATIVE_POINTER_T", "NEW", "REQUIRE", "RENAME", "CLASS_T", "INTERFACE_T",
  "PUBLIC_T", "PRIVATE_T", "VIRTUAL_T", "OVERRIDE_T", "ABSTRACT_T",
  "THIS_T", "SUPER_T", "CONSTRUCTOR", "INSTANCEOF", "DOWN_CAST_BEGIN",
  "DOWN_CAST_END", "DELEGATE", "FINAL", "ENUM", "CONST", "$accept",
  "translation_unit", "initial_declaration", "require_list",
  "require_declaration", "package_name", "rename_list",
  "rename_declaration", "definition_or_statement", "basic_type_specifier",
  "identifier_type_specifier", "array_type_specifier", "type_specifier",
  "function_definition", "parameter_list", "argument_list",
  "statement_list", "expression", "assignment_expression",
  "assignment_operator", "logical_or_expression", "logical_and_expression",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "unary_expression", "postfix_expression",
  "primary_expression", "primary_no_new_array", "array_literal",
  "array_creation", "dimension_expression_list", "dimension_expression",
  "dimension_list", "expression_list", "statement", "if_statement",
  "elsif_list", "elsif", "label_opt", "switch_statement", "case_list",
  "one_case", "default_opt", "case_expression_list", "while_statement",
  "for_statement", "do_while_statement", "foreach_statement",
  "expression_opt", "return_statement", "identifier_opt",
  "break_statement", "continue_statement", "try_statement", "catch_list",
  "catch_clause", "@1", "throw_statement", "declaration_statement",
  "block", "@2", "class_definition", "$@3", "$@4", "$@5", "$@6",
  "class_or_member_modifier_list", "class_or_member_modifier",
  "class_or_interface", "extends", "extends_list",
  "member_declaration_list", "member_declaration", "method_member",
  "method_function_definition", "throws_clause", "exception_list",
  "constructor_definition", "access_modifier", "initializer_opt",
  "field_member", "delegate_definition", "enum_definition",
  "enumerator_list", "const_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-378)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-187)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -19,    17,    17,   371,   459,   -19,  -378,   -36,  -378,  -378,
     -11,     7,  -378,  -378,  -378,  -378,  -378,     9,    61,    73,
     922,    58,    58,  -378,   922,   718,   922,   922,  -378,  -378,
     922,   107,   757,  -378,  -378,  -378,  -378,  -378,  -378,   298,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,   337,
     337,   100,   406,  -378,   116,  -378,   218,   142,  -378,   190,
    -378,   220,   224,    82,   163,   118,   225,  -378,  -378,   157,
     251,  -378,  -378,  -378,  -378,   235,  -378,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,  -378,  -378,   206,  -378,
     287,  -378,  -378,  -378,  -378,  -378,  -378,   -36,  -378,  -378,
     293,   280,   769,  -378,   922,   922,   299,   296,   300,  -378,
     301,   307,    -3,  -378,  -378,    44,  -378,   123,  -378,  -378,
     302,   177,  -378,   217,    -9,   310,   310,   314,   332,   334,
     319,    66,   338,   321,   323,    29,  -378,   922,   922,   922,
     922,   922,   922,   922,   922,   922,   922,   922,   922,   922,
     922,   922,   922,   922,   808,  -378,   344,  -378,  -378,  -378,
    -378,  -378,  -378,  -378,   337,   337,   922,   922,   330,   107,
     335,   336,  -378,   352,   333,  -378,  -378,  -378,    -4,    -1,
       2,   922,  -378,  -378,  -378,  -378,  -378,   820,  -378,   619,
    -378,   107,   198,  -378,  -378,   859,   353,   922,   343,  -378,
     343,   345,   348,    65,   366,   922,   355,  -378,  -378,    35,
    -378,   922,  -378,   224,    82,   163,   163,   118,   118,   118,
     118,   225,   225,  -378,  -378,  -378,  -378,  -378,  -378,  -378,
      26,  -378,  -378,  -378,   294,  -378,   153,   922,   370,   922,
     378,   333,   381,   384,  -378,   107,   382,  -378,  -378,   402,
     547,  -378,   388,  -378,   107,  -378,  -378,    32,   389,   159,
     871,  -378,   390,   390,   101,  -378,   922,  -378,   103,   227,
    -378,   350,   408,    40,   248,  -378,   922,  -378,  -378,    41,
     395,   396,   394,   401,  -378,   397,   393,   289,   922,   290,
    -378,   175,  -378,  -378,   337,  -378,  -378,   910,  -378,  -378,
     399,   350,    43,   260,  -378,    14,  -378,   421,   112,  -378,
     350,   337,  -378,  -378,   107,   922,   922,   922,   404,   423,
     626,   407,   107,   411,   297,  -378,   419,   405,   107,   107,
    -378,  -378,   437,  -378,    45,  -378,   426,   350,  -378,  -378,
    -378,  -378,   425,  -378,  -378,   113,   449,  -378,    83,   429,
      89,   626,   443,  -378,   462,   337,   475,   650,    11,  -378,
    -378,  -378,  -378,  -378,  -378,  -378,   922,   107,  -378,   922,
    -378,  -378,   461,  -378,  -378,   457,   479,  -378,  -378,  -378,
     460,   922,   107,   254,  -378,   465,   482,    30,   337,   483,
    -378,  -378,  -378,  -378,    95,  -378,   467,   107,  -378,  -378,
    -378,   469,  -378,  -378,   127,   463,   331,   922,   468,   486,
      30,   107,  -378,   107,   350,    97,   470,   350,    99,   296,
    -378,   463,   471,  -378,  -378,   115,   350,  -378,   136,   350,
     473,  -378,  -378,  -378,   148,  -378,  -378,   150,  -378,  -378,
    -378,  -378,  -378
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,   143,   143,     6,     8,     7,    13,    11,
       0,     0,     1,    95,    96,    97,    98,    87,     0,     0,
     157,   160,   160,   101,     0,     0,     0,     0,    99,   100,
       0,     0,     0,    22,    23,    24,    25,    26,    27,     0,
     194,   195,   220,   221,   191,   192,   193,   103,   104,     0,
       0,     0,     0,     3,    32,    34,    33,     0,    16,     0,
      45,    47,    55,    57,    59,    62,    67,    70,    77,    81,
      85,   102,    86,    18,   124,     0,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,    17,     0,   188,
       0,   190,    19,    20,    21,     2,     9,     5,    14,    10,
       0,     0,     0,   144,     0,     0,    87,   158,     0,   161,
       0,     0,     0,   109,   121,     0,    78,    81,    80,    79,
     177,     0,   172,     0,    28,     0,     0,    28,     0,     0,
       0,    28,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,    50,    51,    52,
      53,    54,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,   196,    12,    15,    30,     0,     0,
       0,     0,   159,   162,   163,    93,   110,     0,   179,   143,
     169,     0,   166,   167,   171,     0,     0,     0,   112,   116,
     114,     0,     0,     0,     0,     0,     0,    29,    31,     0,
     173,     0,    46,    56,    58,    60,    61,    63,    64,    65,
      66,    68,    69,    71,    72,    73,    74,    75,    76,    92,
       0,    41,    90,    84,     0,    48,     0,     0,     0,   157,
       0,   196,     0,     0,    89,     0,     0,   111,   122,     0,
     143,    43,     0,   165,     0,   168,   105,     0,     0,     0,
       0,   117,   113,   115,     0,   175,     0,   232,     0,     0,
     235,   212,     0,     0,     0,    91,     0,    94,    88,     0,
       0,     0,     0,     0,   198,   197,   180,   136,     0,   149,
     146,     0,   178,    44,     0,   164,   106,     0,   118,   119,
       0,   212,     0,     0,   230,     0,   234,     0,     0,    39,
     212,     0,   174,    42,     0,     0,   157,     0,   182,     0,
       0,     0,     0,     0,   138,   140,   121,     0,     0,     0,
     147,   145,     0,   107,     0,   120,     0,   212,   176,   233,
     231,   214,   213,    38,    36,     0,     0,   153,     0,     0,
       0,     0,     0,   199,     0,     0,     0,     0,     0,   200,
     202,   204,   206,   203,   185,   137,     0,     0,   141,     0,
     148,   150,     0,   108,   229,     0,     0,    37,    35,    40,
       0,   157,     0,     0,   187,     0,     0,   222,     0,     0,
     205,   207,   181,   201,     0,   139,   122,     0,   228,   215,
     155,     0,   156,   183,     0,   222,     0,     0,     0,     0,
     222,     0,   170,     0,   212,     0,     0,   212,     0,   223,
     224,   222,     0,   142,   154,     0,   212,   226,     0,   212,
       0,   225,   219,   217,     0,   211,   209,     0,   227,   218,
     216,   210,   208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -378,  -378,  -378,  -378,   490,   495,   497,     1,   499,   466,
     472,  -378,    -2,  -378,  -258,  -188,  -378,   -20,   -22,  -378,
    -378,   368,   365,   171,   120,   168,     4,  -378,    84,  -378,
    -378,  -378,   386,    93,   315,   226,  -178,  -378,  -378,   189,
    -378,  -378,  -378,   228,  -378,  -378,  -378,  -378,  -378,  -378,
    -230,  -378,   494,  -378,  -378,  -378,  -378,   326,  -378,  -378,
    -378,  -124,  -378,  -378,  -378,  -378,  -378,  -378,   313,   -83,
     432,   282,  -378,   170,  -343,  -378,   174,  -291,  -378,   185,
    -378,  -377,  -378,  -378,  -378,  -378,  -378
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,     5,     6,    10,     7,     8,    53,    54,
      55,    56,   272,    58,   273,   230,   250,    59,    60,   166,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,   198,   199,   262,   115,    73,    74,   324,   325,
      75,    76,   289,   290,   331,   328,    77,    78,    79,    80,
     108,    81,   110,    82,    83,    84,   192,   193,   252,    85,
      86,   121,   189,    87,   320,   351,   321,   352,   357,    89,
      90,   243,   285,   358,   359,   360,   361,   308,   342,   362,
      91,   408,   363,    92,    93,   268,    94
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     107,    57,    57,   114,   112,   172,   302,   257,    98,   281,
     336,   251,   123,   195,   101,   393,   -28,    99,   127,   345,
     185,   339,   245,   244,     9,   246,   137,   137,   416,   137,
     116,   118,   137,   422,   119,   102,   392,     2,   103,   340,
     393,   100,   127,   196,   430,   238,   375,   128,   129,   275,
     132,   209,   406,     1,     2,   296,   276,   210,   271,   100,
     211,   407,   276,   310,   314,   109,   337,   253,   373,   186,
     311,   137,   293,   311,   187,   276,    33,    34,    35,    36,
      37,    38,   178,   104,   179,   180,   349,    42,    43,    44,
      45,    46,   201,   265,   354,   105,   266,   205,    98,   355,
      33,    34,    35,    36,    37,    38,   380,   130,   127,   334,
     117,   117,   382,   137,   117,   212,   140,   141,   411,   137,
     426,   287,   429,   425,   301,   137,   428,   311,   304,   311,
     295,   120,   231,   305,   127,   434,   120,   120,   437,   120,
     343,   377,   133,   432,   235,   154,   415,   236,   418,   135,
     414,   401,   223,   224,   225,   226,   227,   228,   146,   147,
     120,   178,   233,   234,   435,   248,    33,    34,    35,    36,
      37,    38,   120,   231,   120,   156,   439,   259,   441,   154,
     278,   162,   163,   137,   344,   269,   298,   249,   155,   137,
     347,   274,    33,    34,    35,    36,    37,    38,   365,   142,
     143,   144,   145,   210,   370,   371,   211,   164,   165,   156,
     157,   158,   159,   160,   161,   162,   163,   279,   136,   107,
     137,   378,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   190,   191,
     259,   164,   165,   395,   134,   194,   303,   137,   249,   168,
     169,   170,   171,   138,   313,   306,   139,   137,   402,   190,
     254,   127,   217,   218,   219,   220,   326,   148,   149,   150,
     151,   152,   153,   412,   172,   231,   312,   167,   137,   403,
      40,    41,    42,    43,    44,    45,    46,   423,   338,   424,
     137,   261,   332,   261,   174,   348,   107,   350,   322,   323,
     175,   433,   288,   329,   436,   124,   367,   323,   176,   346,
     440,   215,   216,   442,   221,   222,    88,    88,   356,    33,
      34,    35,    36,    37,    38,   181,   137,   188,   182,   183,
      42,    43,    44,    45,    46,   184,   197,   354,   127,   202,
     201,   203,   355,   204,   127,   206,   394,   396,   207,   356,
     208,   232,   237,   386,   417,   389,   356,   239,   240,   241,
     258,   107,   242,    33,    34,    35,    36,    37,    38,   260,
     264,    12,   177,   267,    13,    14,    15,    16,    17,    18,
     277,   356,    19,   270,   280,   282,   409,   419,   284,    20,
      21,    22,    23,    24,   288,    25,    33,    34,    35,    36,
      37,    38,    33,    34,    35,    36,    37,    38,   286,   291,
     294,   297,    26,   131,   307,   309,   300,   315,  -184,    27,
      28,    29,    30,   317,   316,   318,   335,   319,   341,  -186,
     353,    31,   364,   366,    32,   369,    33,    34,    35,    36,
      37,    38,    39,  -151,   372,    40,    41,    42,    43,    44,
      45,    46,    47,    48,   374,   376,   379,   381,    49,    50,
      51,    52,    13,    14,    15,    16,    17,    18,   384,   385,
      19,    33,    34,    35,    36,    37,    38,    20,    21,    22,
      23,    24,   387,    25,   397,   398,   399,   404,   400,   405,
     410,  -152,   413,   421,   407,    96,   420,    11,   427,   431,
      26,   438,    97,    95,   214,   125,   213,    27,    28,    29,
      30,   126,   200,   368,   327,   263,   111,   330,   255,    31,
     173,   383,    32,   283,    33,    34,    35,    36,    37,    38,
      39,   390,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   391,     0,     0,     0,    49,    50,    51,    52,
      13,    14,    15,    16,    17,    18,     0,     0,    19,     0,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
       0,    25,   292,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    31,     0,     0,
      32,     0,    33,    34,    35,    36,    37,    38,    39,     0,
       0,     0,    13,    14,    15,    16,    17,    18,    47,    48,
      19,     0,     0,   127,     0,    50,     0,    20,    21,    22,
      23,    24,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   127,     0,     0,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,    32,     0,    33,    34,    35,    36,    37,    38,
      39,    33,    34,    35,    36,    37,    38,     0,     0,     0,
      47,    48,    42,    43,    44,    45,    46,    50,     0,   354,
       0,     0,     0,     0,   355,    33,    34,    35,    36,    37,
      38,    13,    14,    15,    16,   106,    42,    43,    44,    45,
      46,     0,     0,   354,     0,     0,     0,     0,   388,    23,
      24,     0,    25,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      13,    14,    15,    16,   106,     0,    27,    28,    29,    30,
       0,     0,    13,    14,    15,    16,   106,     0,    23,    24,
       0,    25,     0,     0,     0,   122,     0,     0,     0,    39,
      23,    24,     0,    25,     0,     0,   177,     0,    26,    47,
      48,     0,     0,     0,     0,    27,    28,    29,    30,     0,
      26,    13,    14,    15,    16,   106,     0,    27,    28,    29,
      30,     0,     0,    13,    14,    15,    16,   106,    39,    23,
      24,   229,    25,     0,     0,     0,     0,     0,    47,    48,
      39,    23,    24,     0,    25,   247,     0,     0,     0,    26,
      47,    48,     0,     0,     0,     0,    27,    28,    29,    30,
       0,    26,    13,    14,    15,    16,   106,     0,    27,    28,
      29,    30,     0,     0,    13,    14,    15,    16,   106,    39,
      23,    24,   256,    25,     0,     0,     0,     0,     0,    47,
      48,    39,    23,    24,     0,    25,     0,     0,   299,     0,
      26,    47,    48,     0,     0,     0,     0,    27,    28,    29,
      30,     0,    26,    13,    14,    15,    16,   106,     0,    27,
      28,    29,    30,     0,     0,    13,    14,    15,    16,   106,
      39,    23,    24,   333,    25,     0,     0,     0,     0,     0,
      47,    48,    39,    23,    24,     0,    25,     0,     0,     0,
       0,    26,    47,    48,     0,     0,     0,     0,    27,    28,
      29,    30,     0,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,    48,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    47,    48
};

static const yytype_int16 yycheck[] =
{
      20,     3,     4,    25,    24,    88,   264,   195,     7,   239,
     301,   189,    32,    22,     7,   358,     7,    28,     7,   310,
      23,     7,    23,    27,     7,    23,    30,    30,   405,    30,
      26,    27,    30,   410,    30,    26,    25,    73,    29,    25,
     383,    52,     7,    52,   421,   169,   337,    49,    50,    23,
      52,    22,    22,    72,    73,    23,    30,    28,    23,    52,
      31,    31,    30,    23,    23,     7,    23,   191,    23,    25,
      30,    30,   250,    30,    30,    30,    65,    66,    67,    68,
      69,    70,   102,    22,   104,   105,   316,    76,    77,    78,
      79,    80,    26,    28,    83,    22,    31,    31,    97,    88,
      65,    66,    67,    68,    69,    70,    23,     7,     7,   297,
      26,    27,    23,    30,    30,   137,    34,    35,    23,    30,
      23,   245,    23,   414,    23,    30,   417,    30,    25,    30,
     254,    24,   154,    30,     7,   426,    24,    24,   429,    24,
      28,    28,    26,    28,   166,    22,   404,   167,   406,     7,
      23,   381,   148,   149,   150,   151,   152,   153,    40,    41,
      24,   181,   164,   165,    28,   187,    65,    66,    67,    68,
      69,    70,    24,   195,    24,    52,    28,   197,    28,    22,
      27,    58,    59,    30,   308,   205,    27,   189,    31,    30,
     314,   211,    65,    66,    67,    68,    69,    70,   322,    36,
      37,    38,    39,    28,   328,   329,    31,    84,    85,    52,
      53,    54,    55,    56,    57,    58,    59,   237,    28,   239,
      30,   345,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    61,    62,
     260,    84,    85,   367,    26,    28,   266,    30,   250,    14,
      15,    16,    17,    33,   276,    28,    32,    30,   382,    61,
      62,     7,   142,   143,   144,   145,   288,    42,    43,    44,
      45,    46,    47,   397,   357,   297,    28,    26,    30,    25,
      74,    75,    76,    77,    78,    79,    80,   411,    28,   413,
      30,   198,   294,   200,     7,   315,   316,   317,     9,    10,
       7,   425,    12,    13,   428,     7,     9,    10,    28,   311,
     434,   140,   141,   437,   146,   147,     3,     4,   320,    65,
      66,    67,    68,    69,    70,    26,    30,    25,    28,    28,
      76,    77,    78,    79,    80,    28,    26,    83,     7,     7,
      26,     7,    88,    24,     7,     7,   366,   369,    27,   351,
      27,     7,    22,   355,    23,   357,   358,    22,    22,     7,
       7,   381,    29,    65,    66,    67,    68,    69,    70,    26,
      22,     0,    27,     7,     3,     4,     5,     6,     7,     8,
      86,   383,    11,    28,    14,     7,   388,   407,     7,    18,
      19,    20,    21,    22,    12,    24,    65,    66,    67,    68,
      69,    70,    65,    66,    67,    68,    69,    70,    24,     7,
      22,    22,    41,     7,    64,     7,    26,    22,    25,    48,
      49,    50,    51,    29,    28,    24,    27,    30,     7,    25,
       7,    60,    25,    22,    63,    30,    65,    66,    67,    68,
      69,    70,    71,    24,     7,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    28,    30,     7,    28,    87,    88,
      89,    90,     3,     4,     5,     6,     7,     8,    25,     7,
      11,    65,    66,    67,    68,    69,    70,    18,    19,    20,
      21,    22,     7,    24,    23,    28,     7,    22,    28,     7,
       7,    24,    23,     7,    31,     5,    28,     2,    28,    28,
      41,    28,     5,     4,   139,    39,   138,    48,    49,    50,
      51,    39,   126,   324,   288,   200,    22,   289,   192,    60,
      88,   351,    63,   241,    65,    66,    67,    68,    69,    70,
      71,   357,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,   357,    -1,    -1,    -1,    87,    88,    89,    90,
       3,     4,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    -1,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    81,    82,
      11,    -1,    -1,     7,    -1,    88,    -1,    18,    19,    20,
      21,    22,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    65,    66,    67,    68,    69,    70,    -1,    -1,    -1,
      81,    82,    76,    77,    78,    79,    80,    88,    -1,    83,
      -1,    -1,    -1,    -1,    88,    65,    66,    67,    68,    69,
      70,     3,     4,     5,     6,     7,    76,    77,    78,    79,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    88,    21,
      22,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
       3,     4,     5,     6,     7,    -1,    48,    49,    50,    51,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    21,    22,
      -1,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,    71,
      21,    22,    -1,    24,    -1,    -1,    27,    -1,    41,    81,
      82,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    -1,
      41,     3,     4,     5,     6,     7,    -1,    48,    49,    50,
      51,    -1,    -1,     3,     4,     5,     6,     7,    71,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    81,    82,
      71,    21,    22,    -1,    24,    25,    -1,    -1,    -1,    41,
      81,    82,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      -1,    41,     3,     4,     5,     6,     7,    -1,    48,    49,
      50,    51,    -1,    -1,     3,     4,     5,     6,     7,    71,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    81,
      82,    71,    21,    22,    -1,    24,    -1,    -1,    27,    -1,
      41,    81,    82,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    -1,    41,     3,     4,     5,     6,     7,    -1,    48,
      49,    50,    51,    -1,    -1,     3,     4,     5,     6,     7,
      71,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      81,    82,    71,    21,    22,    -1,    24,    -1,    -1,    -1,
      -1,    41,    81,    82,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    72,    73,    92,    93,    94,    95,    97,    98,     7,
      96,    96,     0,     3,     4,     5,     6,     7,     8,    11,
      18,    19,    20,    21,    22,    24,    41,    48,    49,    50,
      51,    60,    63,    65,    66,    67,    68,    69,    70,    71,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    87,
      88,    89,    90,    99,   100,   101,   102,   103,   104,   108,
     109,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   127,   128,   131,   132,   137,   138,   139,
     140,   142,   144,   145,   146,   150,   151,   154,   159,   160,
     161,   171,   174,   175,   177,    99,    95,    97,    98,    28,
      52,     7,    26,    29,    22,    22,     7,   108,   141,     7,
     143,   143,   108,    25,   109,   126,   117,   119,   117,   117,
      24,   152,    28,   108,     7,   100,   101,     7,   103,   103,
       7,     7,   103,    26,    26,     7,    28,    30,    33,    32,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    22,    31,    52,    53,    54,    55,
      56,    57,    58,    59,    84,    85,   110,    26,    14,    15,
      16,    17,   160,   161,     7,     7,    28,    27,   108,   108,
     108,    26,    28,    28,    28,    23,    25,    30,    25,   153,
      61,    62,   147,   148,    28,    22,    52,    26,   123,   124,
     123,    26,     7,     7,    24,    31,     7,    27,    27,    22,
      28,    31,   109,   112,   113,   114,   114,   115,   115,   115,
     115,   116,   116,   117,   117,   117,   117,   117,   117,    23,
     106,   109,     7,   103,   103,   109,   108,    22,   152,    22,
      22,     7,    29,   162,    27,    23,    23,    25,   109,   103,
     107,   127,   149,   152,    62,   148,    23,   106,     7,   108,
      26,   124,   125,   125,    22,    28,    31,     7,   176,   108,
      28,    23,   103,   105,   108,    23,    30,    86,    27,   108,
      14,   141,     7,   162,     7,   163,    24,   152,    12,   133,
     134,     7,    25,   127,    22,   152,    23,    22,    27,    27,
      26,    23,   105,   108,    25,    30,    28,    64,   168,     7,
      23,    30,    28,   109,    23,    22,    28,    29,    24,    30,
     155,   157,     9,    10,   129,   130,   109,   126,   136,    13,
     134,   135,   103,    23,   106,    27,   168,    23,    28,     7,
      25,     7,   169,    28,   152,   168,   103,   152,   108,   141,
     108,   156,   158,     7,    83,    88,   103,   159,   164,   165,
     166,   167,   170,   173,    25,   152,    22,     9,   130,    30,
     152,   152,     7,    23,    28,   168,    30,    28,   152,     7,
      23,    28,    23,   164,    25,     7,   103,     7,    88,   103,
     167,   170,    25,   165,   108,   152,   109,    23,    28,     7,
      28,   141,   152,    25,    22,     7,    22,    31,   172,   103,
       7,    23,   152,    23,    23,   105,   172,    23,   105,   108,
      28,     7,   172,   152,   152,   168,    23,    28,   168,    23,
     172,    28,    28,   152,   168,    28,   152,   168,    28,    28,
     152,    28,   152
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    93,    93,    93,    93,    94,    94,
      95,    96,    96,    97,    97,    98,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   100,   101,   102,
     102,   102,   103,   103,   103,   104,   104,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   114,   114,   114,   114,   114,   115,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   117,   117,   117,
     117,   118,   118,   118,   118,   119,   119,   119,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   121,
     121,   121,   122,   122,   122,   122,   123,   123,   124,   125,
     125,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   128,   128,   128,   128,
     129,   129,   130,   131,   131,   132,   133,   133,   134,   135,
     135,   136,   136,   137,   138,   139,   140,   141,   141,   142,
     143,   143,   144,   145,   146,   146,   146,   147,   147,   149,
     148,   150,   150,   151,   151,   151,   151,   153,   152,   152,
     155,   154,   156,   154,   157,   154,   158,   154,   159,   159,
     160,   160,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   166,   166,   166,   166,   167,   167,
     167,   167,   168,   168,   169,   169,   170,   170,   170,   170,
     171,   171,   172,   172,   173,   173,   173,   173,   174,   174,
     175,   175,   176,   176,   177,   177
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     2,     1,     1,     1,     2,
       3,     1,     3,     1,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     1,     1,     7,     6,     7,     6,     2,
       4,     1,     3,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       2,     1,     2,     2,     3,     1,     1,     1,     4,     4,
       3,     4,     3,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     6,     7,     2,
       3,     4,     3,     4,     3,     4,     1,     2,     3,     2,
       3,     1,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     6,     8,
       1,     2,     5,     0,     2,     6,     1,     2,     3,     0,
       2,     1,     3,     6,    10,     8,     8,     0,     1,     3,
       0,     1,     3,     3,     5,     4,     3,     1,     2,     0,
       7,     3,     2,     3,     5,     4,     6,     0,     4,     2,
       0,     7,     0,     8,     0,     6,     0,     7,     1,     2,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     3,
       1,     2,     1,     1,     1,     2,     1,     2,     7,     6,
       7,     6,     0,     2,     1,     3,     7,     6,     7,     6,
       1,     1,     0,     2,     4,     5,     5,     6,     8,     7,
       5,     6,     1,     3,     5,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 4: /* initial_declaration: %empty  */
#line 97 "diksam.y"
        {
            dkc_set_require_and_rename_list(NULL, NULL);
        }
#line 1947 "y.tab.c"
    break;

  case 5: /* initial_declaration: require_list rename_list  */
#line 101 "diksam.y"
        {
            dkc_set_require_and_rename_list((yyvsp[-1].require_list), (yyvsp[0].rename_list));
        }
#line 1955 "y.tab.c"
    break;

  case 6: /* initial_declaration: require_list  */
#line 105 "diksam.y"
        {
            dkc_set_require_and_rename_list((yyvsp[0].require_list), NULL);
        }
#line 1963 "y.tab.c"
    break;

  case 7: /* initial_declaration: rename_list  */
#line 109 "diksam.y"
        {
            dkc_set_require_and_rename_list(NULL, (yyvsp[0].rename_list));
        }
#line 1971 "y.tab.c"
    break;

  case 9: /* require_list: require_list require_declaration  */
#line 116 "diksam.y"
        {
            (yyval.require_list) = dkc_chain_require_list((yyvsp[-1].require_list), (yyvsp[0].require_list));
        }
#line 1979 "y.tab.c"
    break;

  case 10: /* require_declaration: REQUIRE package_name SEMICOLON  */
#line 122 "diksam.y"
        {
            (yyval.require_list) = dkc_create_require_list((yyvsp[-1].package_name));
        }
#line 1987 "y.tab.c"
    break;

  case 11: /* package_name: IDENTIFIER  */
#line 128 "diksam.y"
        {
            (yyval.package_name) = dkc_create_package_name((yyvsp[0].identifier));
        }
#line 1995 "y.tab.c"
    break;

  case 12: /* package_name: package_name DOT IDENTIFIER  */
#line 132 "diksam.y"
        {
            (yyval.package_name) = dkc_chain_package_name((yyvsp[-2].package_name), (yyvsp[0].identifier));
        }
#line 2003 "y.tab.c"
    break;

  case 14: /* rename_list: rename_list rename_declaration  */
#line 139 "diksam.y"
        {
            (yyval.rename_list) = dkc_chain_rename_list((yyvsp[-1].rename_list), (yyvsp[0].rename_list));
        }
#line 2011 "y.tab.c"
    break;

  case 15: /* rename_declaration: RENAME package_name IDENTIFIER SEMICOLON  */
#line 145 "diksam.y"
        {
            (yyval.rename_list) = dkc_create_rename_list((yyvsp[-2].package_name), (yyvsp[-1].identifier));
        }
#line 2019 "y.tab.c"
    break;

  case 18: /* definition_or_statement: statement  */
#line 153 "diksam.y"
        {
            DKC_Compiler *compiler = dkc_get_current_compiler();

            compiler->statement_list
                = dkc_chain_statement_list(compiler->statement_list, (yyvsp[0].statement));
        }
#line 2030 "y.tab.c"
    break;

  case 22: /* basic_type_specifier: VOID_T  */
#line 165 "diksam.y"
        {
            (yyval.basic_type_specifier) = DVM_VOID_TYPE;
        }
#line 2038 "y.tab.c"
    break;

  case 23: /* basic_type_specifier: BOOLEAN_T  */
#line 169 "diksam.y"
        {
            (yyval.basic_type_specifier) = DVM_BOOLEAN_TYPE;
        }
#line 2046 "y.tab.c"
    break;

  case 24: /* basic_type_specifier: INT_T  */
#line 173 "diksam.y"
        {
            (yyval.basic_type_specifier) = DVM_INT_TYPE;
        }
#line 2054 "y.tab.c"
    break;

  case 25: /* basic_type_specifier: DOUBLE_T  */
#line 177 "diksam.y"
        {
            (yyval.basic_type_specifier) = DVM_DOUBLE_TYPE;
        }
#line 2062 "y.tab.c"
    break;

  case 26: /* basic_type_specifier: STRING_T  */
#line 181 "diksam.y"
        {
            (yyval.basic_type_specifier) = DVM_STRING_TYPE;
        }
#line 2070 "y.tab.c"
    break;

  case 27: /* basic_type_specifier: NATIVE_POINTER_T  */
#line 185 "diksam.y"
        {
            (yyval.basic_type_specifier) = DVM_NATIVE_POINTER_TYPE;
        }
#line 2078 "y.tab.c"
    break;

  case 28: /* identifier_type_specifier: IDENTIFIER  */
#line 191 "diksam.y"
        {
            (yyval.type_specifier) = dkc_create_identifier_type_specifier((yyvsp[0].identifier));
        }
#line 2086 "y.tab.c"
    break;

  case 29: /* array_type_specifier: basic_type_specifier LB RB  */
#line 197 "diksam.y"
        {
            TypeSpecifier *basic_type
                = dkc_create_type_specifier((yyvsp[-2].basic_type_specifier));
            (yyval.type_specifier) = dkc_create_array_type_specifier(basic_type);
        }
#line 2096 "y.tab.c"
    break;

  case 30: /* array_type_specifier: IDENTIFIER LB RB  */
#line 203 "diksam.y"
        {
            TypeSpecifier *identifier_type
                = dkc_create_identifier_type_specifier((yyvsp[-2].identifier));
            (yyval.type_specifier) = dkc_create_array_type_specifier(identifier_type);
        }
#line 2106 "y.tab.c"
    break;

  case 31: /* array_type_specifier: array_type_specifier LB RB  */
#line 209 "diksam.y"
        {
            (yyval.type_specifier) = dkc_create_array_type_specifier((yyvsp[-2].type_specifier));
        }
#line 2114 "y.tab.c"
    break;

  case 32: /* type_specifier: basic_type_specifier  */
#line 215 "diksam.y"
        {
                    (yyval.type_specifier) = dkc_create_type_specifier((yyvsp[0].basic_type_specifier));
        }
#line 2122 "y.tab.c"
    break;

  case 35: /* function_definition: type_specifier IDENTIFIER LP parameter_list RP throws_clause block  */
#line 223 "diksam.y"
        {
            dkc_function_define((yyvsp[-6].type_specifier), (yyvsp[-5].identifier), (yyvsp[-3].parameter_list), (yyvsp[-1].exception_list), (yyvsp[0].block));
        }
#line 2130 "y.tab.c"
    break;

  case 36: /* function_definition: type_specifier IDENTIFIER LP RP throws_clause block  */
#line 227 "diksam.y"
        {
            dkc_function_define((yyvsp[-5].type_specifier), (yyvsp[-4].identifier), NULL, (yyvsp[-1].exception_list), (yyvsp[0].block));
        }
#line 2138 "y.tab.c"
    break;

  case 37: /* function_definition: type_specifier IDENTIFIER LP parameter_list RP throws_clause SEMICOLON  */
#line 232 "diksam.y"
        {
            dkc_function_define((yyvsp[-6].type_specifier), (yyvsp[-5].identifier), (yyvsp[-3].parameter_list), (yyvsp[-1].exception_list), NULL);
        }
#line 2146 "y.tab.c"
    break;

  case 38: /* function_definition: type_specifier IDENTIFIER LP RP throws_clause SEMICOLON  */
#line 236 "diksam.y"
        {
            dkc_function_define((yyvsp[-5].type_specifier), (yyvsp[-4].identifier), NULL, (yyvsp[-1].exception_list), NULL);
        }
#line 2154 "y.tab.c"
    break;

  case 39: /* parameter_list: type_specifier IDENTIFIER  */
#line 242 "diksam.y"
        {
            (yyval.parameter_list) = dkc_create_parameter((yyvsp[-1].type_specifier), (yyvsp[0].identifier));
        }
#line 2162 "y.tab.c"
    break;

  case 40: /* parameter_list: parameter_list COMMA type_specifier IDENTIFIER  */
#line 246 "diksam.y"
        {
            (yyval.parameter_list) = dkc_chain_parameter((yyvsp[-3].parameter_list), (yyvsp[-1].type_specifier), (yyvsp[0].identifier));
        }
#line 2170 "y.tab.c"
    break;

  case 41: /* argument_list: assignment_expression  */
#line 252 "diksam.y"
        {
            (yyval.argument_list) = dkc_create_argument_list((yyvsp[0].expression));
        }
#line 2178 "y.tab.c"
    break;

  case 42: /* argument_list: argument_list COMMA assignment_expression  */
#line 256 "diksam.y"
        {
            (yyval.argument_list) = dkc_chain_argument_list((yyvsp[-2].argument_list), (yyvsp[0].expression));
        }
#line 2186 "y.tab.c"
    break;

  case 43: /* statement_list: statement  */
#line 262 "diksam.y"
        {
            (yyval.statement_list) = dkc_create_statement_list((yyvsp[0].statement));
        }
#line 2194 "y.tab.c"
    break;

  case 44: /* statement_list: statement_list statement  */
#line 266 "diksam.y"
        {
            (yyval.statement_list) = dkc_chain_statement_list((yyvsp[-1].statement_list), (yyvsp[0].statement));
        }
#line 2202 "y.tab.c"
    break;

  case 46: /* expression: expression COMMA assignment_expression  */
#line 273 "diksam.y"
        {
            (yyval.expression) = dkc_create_comma_expression((yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2210 "y.tab.c"
    break;

  case 48: /* assignment_expression: primary_expression assignment_operator assignment_expression  */
#line 280 "diksam.y"
        {
            (yyval.expression) = dkc_create_assign_expression((yyvsp[-2].expression), (yyvsp[-1].assignment_operator), (yyvsp[0].expression));
        }
#line 2218 "y.tab.c"
    break;

  case 49: /* assignment_operator: ASSIGN_T  */
#line 286 "diksam.y"
        {
            (yyval.assignment_operator) = NORMAL_ASSIGN;
        }
#line 2226 "y.tab.c"
    break;

  case 50: /* assignment_operator: ADD_ASSIGN_T  */
#line 290 "diksam.y"
        {
            (yyval.assignment_operator) = ADD_ASSIGN;
        }
#line 2234 "y.tab.c"
    break;

  case 51: /* assignment_operator: SUB_ASSIGN_T  */
#line 294 "diksam.y"
        {
            (yyval.assignment_operator) = SUB_ASSIGN;
        }
#line 2242 "y.tab.c"
    break;

  case 52: /* assignment_operator: MUL_ASSIGN_T  */
#line 298 "diksam.y"
        {
            (yyval.assignment_operator) = MUL_ASSIGN;
        }
#line 2250 "y.tab.c"
    break;

  case 53: /* assignment_operator: DIV_ASSIGN_T  */
#line 302 "diksam.y"
        {
            (yyval.assignment_operator) = DIV_ASSIGN;
        }
#line 2258 "y.tab.c"
    break;

  case 54: /* assignment_operator: MOD_ASSIGN_T  */
#line 306 "diksam.y"
        {
            (yyval.assignment_operator) = MOD_ASSIGN;
        }
#line 2266 "y.tab.c"
    break;

  case 56: /* logical_or_expression: logical_or_expression LOGICAL_OR logical_and_expression  */
#line 313 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(LOGICAL_OR_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2274 "y.tab.c"
    break;

  case 58: /* logical_and_expression: logical_and_expression LOGICAL_AND equality_expression  */
#line 320 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(LOGICAL_AND_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2282 "y.tab.c"
    break;

  case 60: /* equality_expression: equality_expression EQ relational_expression  */
#line 327 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(EQ_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2290 "y.tab.c"
    break;

  case 61: /* equality_expression: equality_expression NE relational_expression  */
#line 331 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(NE_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2298 "y.tab.c"
    break;

  case 63: /* relational_expression: relational_expression GT additive_expression  */
#line 338 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(GT_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2306 "y.tab.c"
    break;

  case 64: /* relational_expression: relational_expression GE additive_expression  */
#line 342 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(GE_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2314 "y.tab.c"
    break;

  case 65: /* relational_expression: relational_expression LT additive_expression  */
#line 346 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(LT_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2322 "y.tab.c"
    break;

  case 66: /* relational_expression: relational_expression LE additive_expression  */
#line 350 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(LE_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2330 "y.tab.c"
    break;

  case 68: /* additive_expression: additive_expression ADD multiplicative_expression  */
#line 357 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(ADD_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2338 "y.tab.c"
    break;

  case 69: /* additive_expression: additive_expression SUB multiplicative_expression  */
#line 361 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(SUB_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2346 "y.tab.c"
    break;

  case 71: /* multiplicative_expression: multiplicative_expression MUL unary_expression  */
#line 368 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(MUL_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2354 "y.tab.c"
    break;

  case 72: /* multiplicative_expression: multiplicative_expression DIV unary_expression  */
#line 372 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(DIV_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2362 "y.tab.c"
    break;

  case 73: /* multiplicative_expression: multiplicative_expression MOD unary_expression  */
#line 376 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(MOD_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2370 "y.tab.c"
    break;

  case 74: /* multiplicative_expression: multiplicative_expression BIT_AND unary_expression  */
#line 380 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(BIT_AND_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2378 "y.tab.c"
    break;

  case 75: /* multiplicative_expression: multiplicative_expression BIT_OR unary_expression  */
#line 384 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(BIT_OR_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2386 "y.tab.c"
    break;

  case 76: /* multiplicative_expression: multiplicative_expression BIT_XOR unary_expression  */
#line 388 "diksam.y"
        {
            (yyval.expression) = dkc_create_binary_expression(BIT_XOR_EXPRESSION, (yyvsp[-2].expression), (yyvsp[0].expression));
        }
#line 2394 "y.tab.c"
    break;

  case 78: /* unary_expression: SUB unary_expression  */
#line 395 "diksam.y"
        {
            (yyval.expression) = dkc_create_minus_expression((yyvsp[0].expression));
        }
#line 2402 "y.tab.c"
    break;

  case 79: /* unary_expression: EXCLAMATION unary_expression  */
#line 399 "diksam.y"
        {
            (yyval.expression) = dkc_create_logical_not_expression((yyvsp[0].expression));
        }
#line 2410 "y.tab.c"
    break;

  case 80: /* unary_expression: BIT_NOT unary_expression  */
#line 403 "diksam.y"
        {
            (yyval.expression) = dkc_create_bit_not_expression((yyvsp[0].expression));
        }
#line 2418 "y.tab.c"
    break;

  case 82: /* postfix_expression: primary_expression INCREMENT  */
#line 410 "diksam.y"
        {
            (yyval.expression) = dkc_create_incdec_expression((yyvsp[-1].expression), INCREMENT_EXPRESSION);
        }
#line 2426 "y.tab.c"
    break;

  case 83: /* postfix_expression: primary_expression DECREMENT  */
#line 414 "diksam.y"
        {
            (yyval.expression) = dkc_create_incdec_expression((yyvsp[-1].expression), DECREMENT_EXPRESSION);
        }
#line 2434 "y.tab.c"
    break;

  case 84: /* postfix_expression: primary_expression INSTANCEOF type_specifier  */
#line 418 "diksam.y"
        {
            (yyval.expression) = dkc_create_instanceof_expression((yyvsp[-2].expression), (yyvsp[0].type_specifier));
        }
#line 2442 "y.tab.c"
    break;

  case 87: /* primary_expression: IDENTIFIER  */
#line 426 "diksam.y"
        {
            (yyval.expression) = dkc_create_identifier_expression((yyvsp[0].identifier));
        }
#line 2450 "y.tab.c"
    break;

  case 88: /* primary_no_new_array: primary_no_new_array LB expression RB  */
#line 432 "diksam.y"
        {
            (yyval.expression) = dkc_create_index_expression((yyvsp[-3].expression), (yyvsp[-1].expression));
        }
#line 2458 "y.tab.c"
    break;

  case 89: /* primary_no_new_array: IDENTIFIER LB expression RB  */
#line 436 "diksam.y"
        {
            Expression *identifier = dkc_create_identifier_expression((yyvsp[-3].identifier));
            (yyval.expression) = dkc_create_index_expression(identifier, (yyvsp[-1].expression));
        }
#line 2467 "y.tab.c"
    break;

  case 90: /* primary_no_new_array: primary_expression DOT IDENTIFIER  */
#line 441 "diksam.y"
        {
            (yyval.expression) = dkc_create_member_expression((yyvsp[-2].expression), (yyvsp[0].identifier));
        }
#line 2475 "y.tab.c"
    break;

  case 91: /* primary_no_new_array: primary_expression LP argument_list RP  */
#line 445 "diksam.y"
        {
            (yyval.expression) = dkc_create_function_call_expression((yyvsp[-3].expression), (yyvsp[-1].argument_list));
        }
#line 2483 "y.tab.c"
    break;

  case 92: /* primary_no_new_array: primary_expression LP RP  */
#line 449 "diksam.y"
        {
            (yyval.expression) = dkc_create_function_call_expression((yyvsp[-2].expression), NULL);
        }
#line 2491 "y.tab.c"
    break;

  case 93: /* primary_no_new_array: LP expression RP  */
#line 453 "diksam.y"
        {
            (yyval.expression) = (yyvsp[-1].expression);
        }
#line 2499 "y.tab.c"
    break;

  case 94: /* primary_no_new_array: primary_expression DOWN_CAST_BEGIN type_specifier DOWN_CAST_END  */
#line 457 "diksam.y"
        {
            (yyval.expression) = dkc_create_down_cast_expression((yyvsp[-3].expression), (yyvsp[-1].type_specifier));
        }
#line 2507 "y.tab.c"
    break;

  case 99: /* primary_no_new_array: TRUE_T  */
#line 465 "diksam.y"
        {
            (yyval.expression) = dkc_create_boolean_expression(DVM_TRUE);
        }
#line 2515 "y.tab.c"
    break;

  case 100: /* primary_no_new_array: FALSE_T  */
#line 469 "diksam.y"
        {
            (yyval.expression) = dkc_create_boolean_expression(DVM_FALSE);
        }
#line 2523 "y.tab.c"
    break;

  case 101: /* primary_no_new_array: NULL_T  */
#line 473 "diksam.y"
        {
            (yyval.expression) = dkc_create_null_expression();
        }
#line 2531 "y.tab.c"
    break;

  case 103: /* primary_no_new_array: THIS_T  */
#line 478 "diksam.y"
        {
            (yyval.expression) = dkc_create_this_expression();
        }
#line 2539 "y.tab.c"
    break;

  case 104: /* primary_no_new_array: SUPER_T  */
#line 482 "diksam.y"
        {
            (yyval.expression) = dkc_create_super_expression();
        }
#line 2547 "y.tab.c"
    break;

  case 105: /* primary_no_new_array: NEW IDENTIFIER LP RP  */
#line 486 "diksam.y"
        {
            (yyval.expression) = dkc_create_new_expression((yyvsp[-2].identifier), NULL, NULL);
        }
#line 2555 "y.tab.c"
    break;

  case 106: /* primary_no_new_array: NEW IDENTIFIER LP argument_list RP  */
#line 490 "diksam.y"
        {
            (yyval.expression) = dkc_create_new_expression((yyvsp[-3].identifier), NULL, (yyvsp[-1].argument_list));
        }
#line 2563 "y.tab.c"
    break;

  case 107: /* primary_no_new_array: NEW IDENTIFIER DOT IDENTIFIER LP RP  */
#line 494 "diksam.y"
        {
            (yyval.expression) = dkc_create_new_expression((yyvsp[-4].identifier), (yyvsp[-2].identifier), NULL);
        }
#line 2571 "y.tab.c"
    break;

  case 108: /* primary_no_new_array: NEW IDENTIFIER DOT IDENTIFIER LP argument_list RP  */
#line 498 "diksam.y"
        {
            (yyval.expression) = dkc_create_new_expression((yyvsp[-5].identifier), (yyvsp[-3].identifier), (yyvsp[-1].argument_list));
        }
#line 2579 "y.tab.c"
    break;

  case 109: /* array_literal: LC RC  */
#line 504 "diksam.y"
        {
            (yyval.expression) = dkc_create_array_literal_expression(NULL);
        }
#line 2587 "y.tab.c"
    break;

  case 110: /* array_literal: LC expression_list RC  */
#line 508 "diksam.y"
        {
            (yyval.expression) = dkc_create_array_literal_expression((yyvsp[-1].expression_list));
        }
#line 2595 "y.tab.c"
    break;

  case 111: /* array_literal: LC expression_list COMMA RC  */
#line 512 "diksam.y"
        {
            (yyval.expression) = dkc_create_array_literal_expression((yyvsp[-2].expression_list));
        }
#line 2603 "y.tab.c"
    break;

  case 112: /* array_creation: NEW basic_type_specifier dimension_expression_list  */
#line 518 "diksam.y"
        {
            (yyval.expression) = dkc_create_basic_array_creation((yyvsp[-1].basic_type_specifier), (yyvsp[0].array_dimension), NULL);
        }
#line 2611 "y.tab.c"
    break;

  case 113: /* array_creation: NEW basic_type_specifier dimension_expression_list dimension_list  */
#line 522 "diksam.y"
        {
            (yyval.expression) = dkc_create_basic_array_creation((yyvsp[-2].basic_type_specifier), (yyvsp[-1].array_dimension), (yyvsp[0].array_dimension));
        }
#line 2619 "y.tab.c"
    break;

  case 114: /* array_creation: NEW identifier_type_specifier dimension_expression_list  */
#line 526 "diksam.y"
        {
            (yyval.expression) = dkc_create_class_array_creation((yyvsp[-1].type_specifier), (yyvsp[0].array_dimension), NULL);
        }
#line 2627 "y.tab.c"
    break;

  case 115: /* array_creation: NEW identifier_type_specifier dimension_expression_list dimension_list  */
#line 531 "diksam.y"
        {
            (yyval.expression) = dkc_create_class_array_creation((yyvsp[-2].type_specifier), (yyvsp[-1].array_dimension), (yyvsp[0].array_dimension));
        }
#line 2635 "y.tab.c"
    break;

  case 117: /* dimension_expression_list: dimension_expression_list dimension_expression  */
#line 538 "diksam.y"
        {
            (yyval.array_dimension) = dkc_chain_array_dimension((yyvsp[-1].array_dimension), (yyvsp[0].array_dimension));
        }
#line 2643 "y.tab.c"
    break;

  case 118: /* dimension_expression: LB expression RB  */
#line 544 "diksam.y"
        {
            (yyval.array_dimension) = dkc_create_array_dimension((yyvsp[-1].expression));
        }
#line 2651 "y.tab.c"
    break;

  case 119: /* dimension_list: LB RB  */
#line 550 "diksam.y"
        {
            (yyval.array_dimension) = dkc_create_array_dimension(NULL);
        }
#line 2659 "y.tab.c"
    break;

  case 120: /* dimension_list: dimension_list LB RB  */
#line 554 "diksam.y"
        {
            (yyval.array_dimension) = dkc_chain_array_dimension((yyvsp[-2].array_dimension),
                                           dkc_create_array_dimension(NULL));
        }
#line 2668 "y.tab.c"
    break;

  case 121: /* expression_list: assignment_expression  */
#line 561 "diksam.y"
        {
            (yyval.expression_list) = dkc_create_expression_list((yyvsp[0].expression));
        }
#line 2676 "y.tab.c"
    break;

  case 122: /* expression_list: expression_list COMMA assignment_expression  */
#line 565 "diksam.y"
        {
            (yyval.expression_list) = dkc_chain_expression_list((yyvsp[-2].expression_list), (yyvsp[0].expression));
        }
#line 2684 "y.tab.c"
    break;

  case 123: /* statement: expression SEMICOLON  */
#line 571 "diksam.y"
        {
          (yyval.statement) = dkc_create_expression_statement((yyvsp[-1].expression));
        }
#line 2692 "y.tab.c"
    break;

  case 136: /* if_statement: IF LP expression RP block  */
#line 589 "diksam.y"
        {
            (yyval.statement) = dkc_create_if_statement((yyvsp[-2].expression), (yyvsp[0].block), NULL, NULL);
        }
#line 2700 "y.tab.c"
    break;

  case 137: /* if_statement: IF LP expression RP block ELSE block  */
#line 593 "diksam.y"
        {
            (yyval.statement) = dkc_create_if_statement((yyvsp[-4].expression), (yyvsp[-2].block), NULL, (yyvsp[0].block));
        }
#line 2708 "y.tab.c"
    break;

  case 138: /* if_statement: IF LP expression RP block elsif_list  */
#line 597 "diksam.y"
        {
            (yyval.statement) = dkc_create_if_statement((yyvsp[-3].expression), (yyvsp[-1].block), (yyvsp[0].elsif), NULL);
        }
#line 2716 "y.tab.c"
    break;

  case 139: /* if_statement: IF LP expression RP block elsif_list ELSE block  */
#line 601 "diksam.y"
        {
            (yyval.statement) = dkc_create_if_statement((yyvsp[-5].expression), (yyvsp[-3].block), (yyvsp[-2].elsif), (yyvsp[0].block));
        }
#line 2724 "y.tab.c"
    break;

  case 141: /* elsif_list: elsif_list elsif  */
#line 608 "diksam.y"
        {
            (yyval.elsif) = dkc_chain_elsif_list((yyvsp[-1].elsif), (yyvsp[0].elsif));
        }
#line 2732 "y.tab.c"
    break;

  case 142: /* elsif: ELSIF LP expression RP block  */
#line 614 "diksam.y"
        {
            (yyval.elsif) = dkc_create_elsif((yyvsp[-2].expression), (yyvsp[0].block));
        }
#line 2740 "y.tab.c"
    break;

  case 143: /* label_opt: %empty  */
#line 620 "diksam.y"
        {
            (yyval.identifier) = NULL;
        }
#line 2748 "y.tab.c"
    break;

  case 144: /* label_opt: IDENTIFIER COLON  */
#line 624 "diksam.y"
        {
            (yyval.identifier) = (yyvsp[-1].identifier);
        }
#line 2756 "y.tab.c"
    break;

  case 145: /* switch_statement: SWITCH LP expression RP case_list default_opt  */
#line 630 "diksam.y"
        {
            (yyval.statement) = dkc_create_switch_statement((yyvsp[-3].expression), (yyvsp[-1].case_list), (yyvsp[0].block));
        }
#line 2764 "y.tab.c"
    break;

  case 147: /* case_list: case_list one_case  */
#line 637 "diksam.y"
        {
            (yyval.case_list) = dkc_chain_case((yyvsp[-1].case_list), (yyvsp[0].case_list));
        }
#line 2772 "y.tab.c"
    break;

  case 148: /* one_case: CASE case_expression_list block  */
#line 643 "diksam.y"
        {
            (yyval.case_list) = dkc_create_one_case((yyvsp[-1].expression_list), (yyvsp[0].block));
        }
#line 2780 "y.tab.c"
    break;

  case 149: /* default_opt: %empty  */
#line 649 "diksam.y"
        {
            (yyval.block) = NULL;
        }
#line 2788 "y.tab.c"
    break;

  case 150: /* default_opt: DEFAULT_T block  */
#line 653 "diksam.y"
        {
            (yyval.block) = (yyvsp[0].block);
        }
#line 2796 "y.tab.c"
    break;

  case 151: /* case_expression_list: assignment_expression  */
#line 659 "diksam.y"
        {
            (yyval.expression_list) = dkc_create_expression_list((yyvsp[0].expression));
        }
#line 2804 "y.tab.c"
    break;

  case 152: /* case_expression_list: expression_list COMMA assignment_expression  */
#line 663 "diksam.y"
        {
            (yyval.expression_list) = dkc_chain_expression_list((yyvsp[-2].expression_list), (yyvsp[0].expression));
        }
#line 2812 "y.tab.c"
    break;

  case 153: /* while_statement: label_opt WHILE LP expression RP block  */
#line 669 "diksam.y"
        {
            (yyval.statement) = dkc_create_while_statement((yyvsp[-5].identifier), (yyvsp[-2].expression), (yyvsp[0].block));
        }
#line 2820 "y.tab.c"
    break;

  case 154: /* for_statement: label_opt FOR LP expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RP block  */
#line 676 "diksam.y"
        {
            (yyval.statement) = dkc_create_for_statement((yyvsp[-9].identifier), (yyvsp[-6].expression), (yyvsp[-4].expression), (yyvsp[-2].expression), (yyvsp[0].block));
        }
#line 2828 "y.tab.c"
    break;

  case 155: /* do_while_statement: label_opt DO_T block WHILE LP expression RP SEMICOLON  */
#line 682 "diksam.y"
        {
            (yyval.statement) = dkc_create_do_while_statement((yyvsp[-7].identifier), (yyvsp[-5].block), (yyvsp[-2].expression));
        }
#line 2836 "y.tab.c"
    break;

  case 156: /* foreach_statement: label_opt FOREACH LP IDENTIFIER COLON expression RP block  */
#line 688 "diksam.y"
        {
            (yyval.statement) = dkc_create_foreach_statement((yyvsp[-7].identifier), (yyvsp[-4].identifier), (yyvsp[-2].expression), (yyvsp[0].block));
        }
#line 2844 "y.tab.c"
    break;

  case 157: /* expression_opt: %empty  */
#line 694 "diksam.y"
        {
            (yyval.expression) = NULL;
        }
#line 2852 "y.tab.c"
    break;

  case 159: /* return_statement: RETURN_T expression_opt SEMICOLON  */
#line 701 "diksam.y"
        {
            (yyval.statement) = dkc_create_return_statement((yyvsp[-1].expression));
        }
#line 2860 "y.tab.c"
    break;

  case 160: /* identifier_opt: %empty  */
#line 707 "diksam.y"
        {
            (yyval.identifier) = NULL;
        }
#line 2868 "y.tab.c"
    break;

  case 162: /* break_statement: BREAK identifier_opt SEMICOLON  */
#line 714 "diksam.y"
        {
            (yyval.statement) = dkc_create_break_statement((yyvsp[-1].identifier));
        }
#line 2876 "y.tab.c"
    break;

  case 163: /* continue_statement: CONTINUE identifier_opt SEMICOLON  */
#line 720 "diksam.y"
        {
            (yyval.statement) = dkc_create_continue_statement((yyvsp[-1].identifier));
        }
#line 2884 "y.tab.c"
    break;

  case 164: /* try_statement: TRY block catch_list FINALLY block  */
#line 726 "diksam.y"
        {
            (yyval.statement) = dkc_create_try_statement((yyvsp[-3].block), (yyvsp[-2].catch_clause), (yyvsp[0].block));
        }
#line 2892 "y.tab.c"
    break;

  case 165: /* try_statement: TRY block FINALLY block  */
#line 730 "diksam.y"
        {
            (yyval.statement) = dkc_create_try_statement((yyvsp[-2].block), NULL, (yyvsp[0].block));
        }
#line 2900 "y.tab.c"
    break;

  case 166: /* try_statement: TRY block catch_list  */
#line 734 "diksam.y"
        {
            (yyval.statement) = dkc_create_try_statement((yyvsp[-1].block), (yyvsp[0].catch_clause), NULL);
        }
#line 2908 "y.tab.c"
    break;

  case 168: /* catch_list: catch_list catch_clause  */
#line 741 "diksam.y"
        {
            (yyval.catch_clause) = dkc_chain_catch_list((yyvsp[-1].catch_clause), (yyvsp[0].catch_clause));
        }
#line 2916 "y.tab.c"
    break;

  case 169: /* @1: %empty  */
#line 747 "diksam.y"
        {
            (yyval.catch_clause) = dkc_start_catch_clause();
        }
#line 2924 "y.tab.c"
    break;

  case 170: /* catch_clause: CATCH @1 LP type_specifier IDENTIFIER RP block  */
#line 751 "diksam.y"
        {
            (yyval.catch_clause) = dkc_end_catch_clause((yyvsp[-5].catch_clause), (yyvsp[-3].type_specifier), (yyvsp[-2].identifier), (yyvsp[0].block));
        }
#line 2932 "y.tab.c"
    break;

  case 171: /* throw_statement: THROW expression SEMICOLON  */
#line 757 "diksam.y"
        {
            (yyval.statement) = dkc_create_throw_statement((yyvsp[-1].expression));
        }
#line 2940 "y.tab.c"
    break;

  case 172: /* throw_statement: THROW SEMICOLON  */
#line 761 "diksam.y"
        {
            (yyval.statement) = dkc_create_throw_statement(NULL);
        }
#line 2948 "y.tab.c"
    break;

  case 173: /* declaration_statement: type_specifier IDENTIFIER SEMICOLON  */
#line 767 "diksam.y"
        {
            (yyval.statement) = dkc_create_declaration_statement(DVM_FALSE, (yyvsp[-2].type_specifier), (yyvsp[-1].identifier), NULL);
        }
#line 2956 "y.tab.c"
    break;

  case 174: /* declaration_statement: type_specifier IDENTIFIER ASSIGN_T expression SEMICOLON  */
#line 771 "diksam.y"
        {
            (yyval.statement) = dkc_create_declaration_statement(DVM_FALSE, (yyvsp[-4].type_specifier), (yyvsp[-3].identifier), (yyvsp[-1].expression));
        }
#line 2964 "y.tab.c"
    break;

  case 175: /* declaration_statement: FINAL type_specifier IDENTIFIER SEMICOLON  */
#line 775 "diksam.y"
        {
            (yyval.statement) = dkc_create_declaration_statement(DVM_TRUE, (yyvsp[-2].type_specifier), (yyvsp[-1].identifier), NULL);
        }
#line 2972 "y.tab.c"
    break;

  case 176: /* declaration_statement: FINAL type_specifier IDENTIFIER ASSIGN_T expression SEMICOLON  */
#line 779 "diksam.y"
        {
            (yyval.statement) = dkc_create_declaration_statement(DVM_TRUE, (yyvsp[-4].type_specifier), (yyvsp[-3].identifier), (yyvsp[-1].expression));
        }
#line 2980 "y.tab.c"
    break;

  case 177: /* @2: %empty  */
#line 785 "diksam.y"
        {
            (yyval.block) = dkc_open_block();
        }
#line 2988 "y.tab.c"
    break;

  case 178: /* block: LC @2 statement_list RC  */
#line 789 "diksam.y"
        {
            (yyval.block) = dkc_close_block((yyvsp[-2].block), (yyvsp[-1].statement_list));
        }
#line 2996 "y.tab.c"
    break;

  case 179: /* block: LC RC  */
#line 793 "diksam.y"
        {
            Block *empty_block = dkc_open_block();
            (yyval.block) = dkc_close_block(empty_block, NULL);
        }
#line 3005 "y.tab.c"
    break;

  case 180: /* $@3: %empty  */
#line 801 "diksam.y"
        {
            dkc_start_class_definition(NULL, (yyvsp[-3].class_or_interface), (yyvsp[-2].identifier), (yyvsp[-1].extends_list));
        }
#line 3013 "y.tab.c"
    break;

  case 181: /* class_definition: class_or_interface IDENTIFIER extends LC $@3 member_declaration_list RC  */
#line 805 "diksam.y"
        {
            dkc_class_define((yyvsp[-1].member_declaration));
        }
#line 3021 "y.tab.c"
    break;

  case 182: /* $@4: %empty  */
#line 810 "diksam.y"
        {
            dkc_start_class_definition(&(yyvsp[-4].class_or_member_modifier), (yyvsp[-3].class_or_interface), (yyvsp[-2].identifier), (yyvsp[-1].extends_list));
        }
#line 3029 "y.tab.c"
    break;

  case 183: /* class_definition: class_or_member_modifier_list class_or_interface IDENTIFIER extends LC $@4 member_declaration_list RC  */
#line 813 "diksam.y"
        {
            dkc_class_define((yyvsp[-1].member_declaration));
        }
#line 3037 "y.tab.c"
    break;

  case 184: /* $@5: %empty  */
#line 817 "diksam.y"
        {
            dkc_start_class_definition(NULL, (yyvsp[-3].class_or_interface), (yyvsp[-2].identifier), (yyvsp[-1].extends_list));
        }
#line 3045 "y.tab.c"
    break;

  case 185: /* class_definition: class_or_interface IDENTIFIER extends LC $@5 RC  */
#line 821 "diksam.y"
        {
            dkc_class_define(NULL);
        }
#line 3053 "y.tab.c"
    break;

  case 186: /* $@6: %empty  */
#line 826 "diksam.y"
        {
            dkc_start_class_definition(&(yyvsp[-4].class_or_member_modifier), (yyvsp[-3].class_or_interface), (yyvsp[-2].identifier), (yyvsp[-1].extends_list));
        }
#line 3061 "y.tab.c"
    break;

  case 187: /* class_definition: class_or_member_modifier_list class_or_interface IDENTIFIER extends LC $@6 RC  */
#line 830 "diksam.y"
        {
            dkc_class_define(NULL);
        }
#line 3069 "y.tab.c"
    break;

  case 189: /* class_or_member_modifier_list: class_or_member_modifier_list class_or_member_modifier  */
#line 837 "diksam.y"
        {
            (yyval.class_or_member_modifier) = dkc_chain_class_or_member_modifier((yyvsp[-1].class_or_member_modifier), (yyvsp[0].class_or_member_modifier));
        }
#line 3077 "y.tab.c"
    break;

  case 191: /* class_or_member_modifier: VIRTUAL_T  */
#line 844 "diksam.y"
        {
            (yyval.class_or_member_modifier) = dkc_create_class_or_member_modifier(VIRTUAL_MODIFIER);
        }
#line 3085 "y.tab.c"
    break;

  case 192: /* class_or_member_modifier: OVERRIDE_T  */
#line 848 "diksam.y"
        {
            (yyval.class_or_member_modifier) = dkc_create_class_or_member_modifier(OVERRIDE_MODIFIER);
        }
#line 3093 "y.tab.c"
    break;

  case 193: /* class_or_member_modifier: ABSTRACT_T  */
#line 852 "diksam.y"
        {
            (yyval.class_or_member_modifier) = dkc_create_class_or_member_modifier(ABSTRACT_MODIFIER);
        }
#line 3101 "y.tab.c"
    break;

  case 194: /* class_or_interface: CLASS_T  */
#line 858 "diksam.y"
        {
            (yyval.class_or_interface) = DVM_CLASS_DEFINITION;
        }
#line 3109 "y.tab.c"
    break;

  case 195: /* class_or_interface: INTERFACE_T  */
#line 862 "diksam.y"
        {
            (yyval.class_or_interface) = DVM_INTERFACE_DEFINITION;
        }
#line 3117 "y.tab.c"
    break;

  case 196: /* extends: %empty  */
#line 868 "diksam.y"
        {
            (yyval.extends_list) = NULL;
        }
#line 3125 "y.tab.c"
    break;

  case 197: /* extends: COLON extends_list  */
#line 872 "diksam.y"
        {
            (yyval.extends_list) = (yyvsp[0].extends_list);
        }
#line 3133 "y.tab.c"
    break;

  case 198: /* extends_list: IDENTIFIER  */
#line 878 "diksam.y"
        {
            (yyval.extends_list) = dkc_create_extends_list((yyvsp[0].identifier));
        }
#line 3141 "y.tab.c"
    break;

  case 199: /* extends_list: extends_list COMMA IDENTIFIER  */
#line 882 "diksam.y"
        {
            (yyval.extends_list) = dkc_chain_extends_list((yyvsp[-2].extends_list), (yyvsp[0].identifier));
        }
#line 3149 "y.tab.c"
    break;

  case 201: /* member_declaration_list: member_declaration_list member_declaration  */
#line 889 "diksam.y"
        {
            (yyval.member_declaration) = dkc_chain_member_declaration((yyvsp[-1].member_declaration), (yyvsp[0].member_declaration));
        }
#line 3157 "y.tab.c"
    break;

  case 204: /* method_member: method_function_definition  */
#line 899 "diksam.y"
        {
            (yyval.member_declaration) = dkc_create_method_member(NULL, (yyvsp[0].function_definition), DVM_FALSE);
        }
#line 3165 "y.tab.c"
    break;

  case 205: /* method_member: class_or_member_modifier_list method_function_definition  */
#line 903 "diksam.y"
        {
            (yyval.member_declaration) = dkc_create_method_member(&(yyvsp[-1].class_or_member_modifier), (yyvsp[0].function_definition), DVM_FALSE);
        }
#line 3173 "y.tab.c"
    break;

  case 206: /* method_member: constructor_definition  */
#line 907 "diksam.y"
        {
            (yyval.member_declaration) = dkc_create_method_member(NULL, (yyvsp[0].function_definition), DVM_TRUE);
        }
#line 3181 "y.tab.c"
    break;

  case 207: /* method_member: class_or_member_modifier_list constructor_definition  */
#line 911 "diksam.y"
        {
            (yyval.member_declaration) = dkc_create_method_member(&(yyvsp[-1].class_or_member_modifier), (yyvsp[0].function_definition), DVM_TRUE);
        }
#line 3189 "y.tab.c"
    break;

  case 208: /* method_function_definition: type_specifier IDENTIFIER LP parameter_list RP throws_clause block  */
#line 917 "diksam.y"
        {
            (yyval.function_definition) = dkc_method_function_define((yyvsp[-6].type_specifier), (yyvsp[-5].identifier), (yyvsp[-3].parameter_list), (yyvsp[-1].exception_list), (yyvsp[0].block));
        }
#line 3197 "y.tab.c"
    break;

  case 209: /* method_function_definition: type_specifier IDENTIFIER LP RP throws_clause block  */
#line 921 "diksam.y"
        {
            (yyval.function_definition) = dkc_method_function_define((yyvsp[-5].type_specifier), (yyvsp[-4].identifier), NULL, (yyvsp[-1].exception_list), (yyvsp[0].block));
        }
#line 3205 "y.tab.c"
    break;

  case 210: /* method_function_definition: type_specifier IDENTIFIER LP parameter_list RP throws_clause SEMICOLON  */
#line 926 "diksam.y"
        {
            (yyval.function_definition) = dkc_method_function_define((yyvsp[-6].type_specifier), (yyvsp[-5].identifier), (yyvsp[-3].parameter_list), (yyvsp[-1].exception_list), NULL);
        }
#line 3213 "y.tab.c"
    break;

  case 211: /* method_function_definition: type_specifier IDENTIFIER LP RP throws_clause SEMICOLON  */
#line 930 "diksam.y"
        {
            (yyval.function_definition) = dkc_method_function_define((yyvsp[-5].type_specifier), (yyvsp[-4].identifier), NULL, (yyvsp[-1].exception_list), NULL);
        }
#line 3221 "y.tab.c"
    break;

  case 212: /* throws_clause: %empty  */
#line 936 "diksam.y"
        {
            (yyval.exception_list) = NULL;
        }
#line 3229 "y.tab.c"
    break;

  case 213: /* throws_clause: THROWS exception_list  */
#line 940 "diksam.y"
        {
            (yyval.exception_list) = (yyvsp[0].exception_list);
        }
#line 3237 "y.tab.c"
    break;

  case 214: /* exception_list: IDENTIFIER  */
#line 946 "diksam.y"
        {
            (yyval.exception_list) = dkc_create_throws((yyvsp[0].identifier));
        }
#line 3245 "y.tab.c"
    break;

  case 215: /* exception_list: exception_list COMMA IDENTIFIER  */
#line 950 "diksam.y"
        {
            (yyval.exception_list) = dkc_chain_exception_list((yyvsp[-2].exception_list), (yyvsp[0].identifier));
        }
#line 3253 "y.tab.c"
    break;

  case 216: /* constructor_definition: CONSTRUCTOR IDENTIFIER LP parameter_list RP throws_clause block  */
#line 956 "diksam.y"
        {
            (yyval.function_definition) = dkc_constructor_function_define((yyvsp[-5].identifier), (yyvsp[-3].parameter_list), (yyvsp[-1].exception_list), (yyvsp[0].block));
        }
#line 3261 "y.tab.c"
    break;

  case 217: /* constructor_definition: CONSTRUCTOR IDENTIFIER LP RP throws_clause block  */
#line 960 "diksam.y"
        {
            (yyval.function_definition) = dkc_constructor_function_define((yyvsp[-4].identifier), NULL, (yyvsp[-1].exception_list), (yyvsp[0].block));
        }
#line 3269 "y.tab.c"
    break;

  case 218: /* constructor_definition: CONSTRUCTOR IDENTIFIER LP parameter_list RP throws_clause SEMICOLON  */
#line 964 "diksam.y"
        {
            (yyval.function_definition) = dkc_constructor_function_define((yyvsp[-5].identifier), (yyvsp[-3].parameter_list), (yyvsp[-1].exception_list), NULL);
        }
#line 3277 "y.tab.c"
    break;

  case 219: /* constructor_definition: CONSTRUCTOR IDENTIFIER LP RP throws_clause SEMICOLON  */
#line 968 "diksam.y"
        {
            (yyval.function_definition) = dkc_constructor_function_define((yyvsp[-4].identifier), NULL, (yyvsp[-1].exception_list), NULL);
        }
#line 3285 "y.tab.c"
    break;

  case 220: /* access_modifier: PUBLIC_T  */
#line 974 "diksam.y"
        {
            (yyval.class_or_member_modifier) = dkc_create_class_or_member_modifier(PUBLIC_MODIFIER);
        }
#line 3293 "y.tab.c"
    break;

  case 221: /* access_modifier: PRIVATE_T  */
#line 978 "diksam.y"
        {
            (yyval.class_or_member_modifier) = dkc_create_class_or_member_modifier(PRIVATE_MODIFIER);
        }
#line 3301 "y.tab.c"
    break;

  case 222: /* initializer_opt: %empty  */
#line 984 "diksam.y"
        {
            (yyval.expression) = NULL;
        }
#line 3309 "y.tab.c"
    break;

  case 223: /* initializer_opt: ASSIGN_T expression  */
#line 988 "diksam.y"
        {
            (yyval.expression) = (yyvsp[0].expression);
        }
#line 3317 "y.tab.c"
    break;

  case 224: /* field_member: type_specifier IDENTIFIER initializer_opt SEMICOLON  */
#line 994 "diksam.y"
        {
            (yyval.member_declaration) = dkc_create_field_member(NULL, DVM_FALSE, (yyvsp[-3].type_specifier), (yyvsp[-2].identifier), (yyvsp[-1].expression));
        }
#line 3325 "y.tab.c"
    break;

  case 225: /* field_member: class_or_member_modifier_list type_specifier IDENTIFIER initializer_opt SEMICOLON  */
#line 999 "diksam.y"
        {
            (yyval.member_declaration) = dkc_create_field_member(&(yyvsp[-4].class_or_member_modifier), DVM_FALSE, (yyvsp[-3].type_specifier), (yyvsp[-2].identifier), (yyvsp[-1].expression));
        }
#line 3333 "y.tab.c"
    break;

  case 226: /* field_member: FINAL type_specifier IDENTIFIER initializer_opt SEMICOLON  */
#line 1003 "diksam.y"
        {
            (yyval.member_declaration) = dkc_create_field_member(NULL, DVM_TRUE, (yyvsp[-3].type_specifier), (yyvsp[-2].identifier), (yyvsp[-1].expression));
        }
#line 3341 "y.tab.c"
    break;

  case 227: /* field_member: class_or_member_modifier_list FINAL type_specifier IDENTIFIER initializer_opt SEMICOLON  */
#line 1008 "diksam.y"
        {
            (yyval.member_declaration) = dkc_create_field_member(&(yyvsp[-5].class_or_member_modifier), DVM_TRUE, (yyvsp[-3].type_specifier), (yyvsp[-2].identifier), (yyvsp[-1].expression));
        }
#line 3349 "y.tab.c"
    break;

  case 228: /* delegate_definition: DELEGATE type_specifier IDENTIFIER LP parameter_list RP throws_clause SEMICOLON  */
#line 1015 "diksam.y"
        {
            dkc_create_delegate_definition((yyvsp[-6].type_specifier), (yyvsp[-5].identifier), (yyvsp[-3].parameter_list), (yyvsp[-1].exception_list));
        }
#line 3357 "y.tab.c"
    break;

  case 229: /* delegate_definition: DELEGATE type_specifier IDENTIFIER LP RP throws_clause SEMICOLON  */
#line 1019 "diksam.y"
        {
            dkc_create_delegate_definition((yyvsp[-5].type_specifier), (yyvsp[-4].identifier), NULL, (yyvsp[-1].exception_list));
        }
#line 3365 "y.tab.c"
    break;

  case 230: /* enum_definition: ENUM IDENTIFIER LC enumerator_list RC  */
#line 1025 "diksam.y"
        {
            dkc_create_enum_definition((yyvsp[-3].identifier), (yyvsp[-1].enumerator));
        }
#line 3373 "y.tab.c"
    break;

  case 231: /* enum_definition: ENUM IDENTIFIER LC enumerator_list COMMA RC  */
#line 1029 "diksam.y"
        {
            dkc_create_enum_definition((yyvsp[-4].identifier), (yyvsp[-2].enumerator));
        }
#line 3381 "y.tab.c"
    break;

  case 232: /* enumerator_list: IDENTIFIER  */
#line 1035 "diksam.y"
        {
            (yyval.enumerator) = dkc_create_enumerator((yyvsp[0].identifier));
        }
#line 3389 "y.tab.c"
    break;

  case 233: /* enumerator_list: enumerator_list COMMA IDENTIFIER  */
#line 1039 "diksam.y"
        {
            (yyval.enumerator) = dkc_chain_enumerator((yyvsp[-2].enumerator), (yyvsp[0].identifier));
        }
#line 3397 "y.tab.c"
    break;

  case 234: /* const_definition: CONST IDENTIFIER ASSIGN_T expression SEMICOLON  */
#line 1045 "diksam.y"
        {
            dkc_create_const_definition(NULL, (yyvsp[-3].identifier), (yyvsp[-1].expression));
        }
#line 3405 "y.tab.c"
    break;

  case 235: /* const_definition: CONST type_specifier IDENTIFIER SEMICOLON  */
#line 1049 "diksam.y"
        {
            dkc_create_const_definition((yyvsp[-2].type_specifier), (yyvsp[-1].identifier), NULL);
        }
#line 3413 "y.tab.c"
    break;


#line 3417 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1053 "diksam.y"

