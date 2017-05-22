%{
#include<stdio.h>
int yyerror(const char *s);
int yylex(void);
%}
%union{
  int		int_val;
}
%start prog_start
%token <int_val> INTEGER
%error-verbose
%token FUNCTION
%token BEGIN_PARAMS
%token END_PARAMS
%token BEGIN_LOCALS
%token END_LOCALS
%token BEGIN_BODY
%token END_BODY
%token ARRAY
%token OF
%token IF
%token THEN 
%token ENDIF
%token ELSE 
%token WHILE
%token DO
%token BEGINLOOP
%token ENDLOOP
%token CONTINUE
%token READ
%token WRITE
%token AND
%token OR
%token NOT
%token TRUE 
%token FALSE
%token RETURN 
%token SUB
%token ADD
%token MULT
%token DIV
%token MOD
%token EQ
%token NEQ
%token LT
%token GT
%token LTE
%token GTE
%token SEMICOLON
%token COLON
%token COMMA
%token L_PAREN
%token R_PAREN
%token L_SQUARE_BRACKET
%token R_SQUARE_BRACKET 
%right ASSIGN 
%token IDENT
%token NUMBER
%%

prog_start:	 functions {printf("prog_start -> functions \n");}
		;

functions: 	 function functions 
		| epsilon 
		;

function: 	FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY \n");} 
		;

declarations: 	declaration SEMICOLON declarations {printf("declarations -> declaration SEMICOLON declaration \n");}
		| epsilon {printf("declarations -> epsilon \n");}
		;

declaration: 	ident declaration1 COLON array INTEGER {printf("declaration -> ident declaration COLON array INTEGER \n");}
		;

declaration1: 	COMMA ident declaration1 {printf("declaration1 -> COMMA ident declaration1 \n");} 
		| epsilon {printf("declaration1 -> epsilon \n");}
		; 

array: 		ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF {printf("array -> ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF \n");}
		| epsilon {printf("array -> epsilon \n");}
		;

statements: 	statement SEMICOLON statements {printf("statements -> statement SEMICOLON statements \n");}
		| epsilon {printf("statements -> epsilon \n");}
		;

statement: 	var ASSIGN expression {printf("statement -> var ASSIGN expression \n");}
		| IF boolexpr THEN statement SEMICOLON statements else ENDIF {printf("statement -> IF boolexpr THEN statement SEMICOLON statements else ENDIF \n");}
		| WHILE boolexpr BEGINLOOP statement SEMICOLON statements ENDLOOP {printf("statement ->  WHILE boolexpr BEGINLOOP statement SEMICOLON statements ENDLOOP \n");}
		| DO BEGINLOOP statement SEMICOLON statements ENDLOOP WHILE boolexpr {printf("statement -> DO BEGINLOOP statement SEMICOLON statements ENDLOOP WHILE boolexpr \n");}  
		| READ var vars {printf("statement -> READ var vars \n");} 
		| WRITE var vars {printf("statement -> WRITE var vars \n");} 
		| CONTINUE {printf("statement -> CONTINUE \n");} 
		| RETURN expression  {printf("statement -> RETURN expression \n");}
		;

vars: 		COMMA var vars {printf("vars -> COMMA var vars \n");} 
		| epsilon {printf("vars -> epsilon \n");} 
		;

else: 		ELSE statement SEMICOLON statements {printf("else -> ELSE statement SEMICOLON statements \n");} 
		| epsilon {printf("else -> epsilon \n");} 
		;

var: 		ident {printf("var -> ident \n");} 
		| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET \n");} 
		;

boolexpr: 	relation_and_expr boolexpr1  {printf("boolexpr -> relation_and_expr boolexpr1 \n");}
		;
 
boolexpr1:	OR boolexpr {printf("boolexpr1 -> OR boolexpr \n");} 
		| epsilon {printf("boolexpr1 -> epsilon \n");} 
		;

relation_and_expr: 	relation_expr relation_and_expr1 {printf("relation_and_expr -> relation_expr relation_and_expr1 \n");} 
			;
relation_and_expr1: 	AND relation_and_expr {printf("relation_and_expr1 -> AND relation_and_expr \n");} 
			| epsilon {printf("relation_and_expr1 -> epsilon \n");} 
			;

relation_expr: 	not relation_expr1 {printf("relation_expr -> not relation_expr1 \n");}  
		;
relation_expr1: expression comp expression {printf("relation_expr1 -> expression comp expression\n");} 
		| TRUE {printf("relation_expr1 -> TURE \n");} 
		| FALSE  {printf("relation_expr1 -> FALSE \n");} 
		| L_PAREN boolexpr R_PAREN {printf("relation_expr1 -> L_PAREN boolexpr R_PAREN \n");} 
		; 


not: 		NOT {printf("not -> NOT \n");} 
		| epsilon {printf("not -> epsilon \n");} 
		;

comp: 		EQ {printf("comp -> EQ \n");} 
		| NEQ {printf("comp -> NEQ \n");}  
		| LT {printf("comp -> LT \n");}  
		| GT {printf("comp -> GT \n");}  
		| LTE {printf("comp -> LTE \n");}  
		| GTE {printf("comp -> GTE \n");}  
		;
expression:	 multiplicative_expr expression1 {printf("expression -> multiplicative_expr expression1 \n");}  
		; 

expression1: 	ADD expression {printf("expression1 -> ADD expression \n");}  
		| SUB expression {printf("expression1 -> SUB expression \n");}  
		| epsilon {printf("expression1 -> epsilon \n");}  
		;

multiplicative_expr: 	term multiplicative_expr1 {printf("multiplicative_expr -> term multiplicative_expr1 \n");}  
			;
			
multiplicative_expr1:	MULT multiplicative_expr {printf("multiplicative_expr1 -> MULT multiplicative_expr \n");}  
			| DIV multiplicative_expr {printf("multiplicative_expr1 -> DIV multiplicative_expr \n");}  
			| MOD multiplicative_expr {printf("multiplicative_expr1 -> MOD multiplicative_expr \n");}  
			| epsilon {printf("multiplicative_expr1 -> epsilon \n");}  
			;


term: 		negative1 term1 {printf("term -> negative term1 \n");}  
		| SUB var {printf("term -> SUB var \n");}  
		| ident term3 {printf("term -> ident term3 \n");}  
		;
 

term3: 		L_PAREN term2 R_PAREN {printf("term3 -> L_PAREN term2 R_PAREN \n");}  
		| epsilon  {printf("term3 -> epsilon \n");} 
		;

term1: 		 NUMBER {printf("term1 -> NUMBER \n");}  
		| L_PAREN expression R_PAREN {printf("term1 -> L_PAREN expression R_PAREN \n");}  
		; 

term2: 		expression expressions {printf("term2 -> expression expressions \n");}  
		| epsilon {printf("term2 -> epsilon \n");}  
		;
	
expressions:	 COMMA expression expressions {printf("expressions -> COMMA expression expressions \n");}  
		| epsilon {printf("exprssions -> epsilon \n");}  
		;

negative1: 	SUB {printf("negative1 -> SUB \n");}  
		| epsilon {printf("negative1 -> epsilon \n");}  
		;

epsilon: 	/* empty */
		;
ident: 		IDENT {printf("ident -> IDENT  \n");}
		;
%%
int yyerror(const char *s)
{
  printf("error %s \n", s);
  return 0;
}
int main() {
	yyparse();
	return 0;
}
