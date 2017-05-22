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

prog_start:	 functions 
		;

functions: 	 function functions 
		| epsilon 
		;

function: 	FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY 
		;

declarations: 	declaration SEMICOLON declarations 
		| epsilon 
		;

declaration: 	ident declaration1 COLON array INTEGER 
		;

declaration1: 	COMMA ident declaration1 
		| epsilon 
		; 

array: 		ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF 
		| epsilon 
		;

statements: 	statement SEMICOLON statements 
		| epsilon 
		;

statement: 	var ASSIGN expression 
		| IF boolexpr THEN statement SEMICOLON statements else ENDIF 
		| WHILE boolexpr BEGINLOOP statement SEMICOLON statements ENDLOOP 
		| DO BEGINLOOP statement SEMICOLON statements ENDLOOP WHILE boolexpr 
		| READ var vars 
		| WRITE var vars 
		| CONTINUE 
		| RETURN expression  
		;

vars: 		COMMA var vars 
		| epsilon 
		;

else: 		ELSE statement SEMICOLON statements 
		| epsilon 
		;

var: 		ident 
		| ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET 
		;

boolexpr: 	relation_and_expr boolexpr1  
		;
 
boolexpr1:	OR boolexpr 
		| epsilon 
		;

relation_and_expr: 	relation_expr relation_and_expr1 
			;
relation_and_expr1: 	AND relation_and_expr 
			| epsilon 
			;

relation_expr: 	not relation_expr1 {}
		;
relation_expr1: expression comp expression 
		| TRUE 
		| FALSE  
		| L_PAREN boolexpr R_PAREN 
		; 


not: 		NOT 
		| epsilon 
		;

comp: 		EQ 
		| NEQ 
		| LT 
		| GT 
		| LTE 
		| GTE 
		;
expression:	 multiplicative_expr expression1 
		; 

expression1: 	ADD expression 
		| SUB expression 
		| epsilon 
		;

multiplicative_expr: 	term multiplicative_expr1 
			;
			
multiplicative_expr1:	MULT multiplicative_expr 
			| DIV multiplicative_expr 
			| MOD multiplicative_expr 
			| epsilon 
			;


term: 		negative1 term1 
		| SUB var 
		| ident term3 
		;
 

term3: 		L_PAREN term2 R_PAREN 
		| epsilon  
		;

term1: 		 NUMBER 
		| L_PAREN expression R_PAREN 
		; 

term2: 		expression expressions 
		| epsilon 
		;
	
expressions:	 COMMA expression expressions 
		| epsilon 
		;

negative1: 	SUB 
		| epsilon 
		;

epsilon: 	/* empty */
		;
ident: 		IDENT 
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
