%{  #include <stdio.h>
    #include <ctype.h>
    #include "ast.h"
    int yyerror(const char *msg), yylex();
%}
%union {
    Node  *pVal;
    int   iVal;
    char *sVal;
}
%type <pVal> Exp
%token <iVal> NUM
%token <sVal> ID
%left '-' '+'
%left '*' '/'
%nonassoc UNARYMINUS
%%
Line    : Exp 		 { $1->printTree(0); }
        ;
Exp     : Exp '+' Exp   { $$ = new Node(PLUS, 0, NULL, $1);
                           $1->bro = $3; }
        | Exp '-' Exp  { $$ = new Node(MINUS, 0, NULL, $1);
                            $1->bro = $3;}
        | Exp '*' Exp  { $$ = new Node(MUL, 0, NULL, $1);
                            $1->bro = $3;}
        | Exp '/' Exp  { $$ = new Node(DIVIDE, 0, NULL, $1);
                            $1->bro = $3;}
        | '-' Exp %prec UNARYMINUS    { $$ = new Node(UMINUS, 0, NULL, $2); }
    	| '(' Exp ')'	 { $$ = $2; }
	    | NUM		 { $$ = new Node(INT, $1); }
        | ID         { $$ = new Node(CHAR, $1); }
	    ;
%%
int main() { yyparse(); return 0; }
int yyerror(const char *msg) { fputs(msg, stderr); }
/*
int yylex() { int c = getchar();
    return (c == '\n')? 0: (isdigit(c))? yylval=c-'0', NUMBER: c;
}
*/