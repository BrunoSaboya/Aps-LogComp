%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

%token T_LAMBDA
%token T_ASSIGN
%token T_IF
%token T_LOOP
%token T_ELSE
%token T_IDENTIFIER
%token T_INT
%token T_STRING
%token T_VAR
%token T_EQUAL
%token T_AND
%token T_OR
%token T_MUNDIAL
%token T_CORINTHIANS
%token T_PALMEIRAS
%token T_TITE
%token T_DUILIO
%token T_DOT
%token T_RENATO
%token T_MENEZES
%token T_FECHADO
%token T_MINTIRA
%token T_VDD
%token T_FAKE
%token T_NOT
%token T_NUMBER
%token T_STRING_LITERAL

%start sentence

%%

sentence : T_LAMBDA
         | assign
         | if
         | loop
         ;

assign : T_VAR T_IDENTIFIER ',' T_ASSIGN boolean_expression
       ;

if          : T_IF boolean_expression block T_ELSE block
            | T_IF boolean_expression block
            ;

loop : T_LOOP boolean_expression block
     ;

block : '{' sentence '}'
      ;

boolean_expression : boolean_clause
                  | boolean_expression T_OR boolean_clause
                  ;

boolean_clause : relational_expression
               | boolean_clause T_AND relational_expression
               ;

relational_expression : expression T_MUNDIAL | T_CORINTHIANS | T_PALMEIRAS | T_VDD | T_FAKE expression
                   ;

expression : term
          | expression T_TITE | T_DUILIO | T_DOT term
          ;

term : factor
     | term T_RENATO | T_MENEZES factor
     ;

factor : T_NUMBER
       | T_STRING_LITERAL
       | T_IDENTIFIER

%%

int main() {
    yyparse();
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}