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

#line 275 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
