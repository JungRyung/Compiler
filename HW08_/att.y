%{  #include <stdio.h>
    #include <ctype.h>
    #include "ast.h"
    int yyerror(const char *msg), yylex();
%}
%union {
    Tree  pVal;
    int   iVal;
    char *sVal;
}
%type <pVal> Exp
%token <iVal> NUM
%left '-' '+'
%left '*' '/'
%nonassoc UNARYMINUS
%%
Line    : Exp 		 { printtree($1,0); }
        ;
Exp     : Exp '+' Exp   { $$ = mknode(PLUS, 0, NULL, $1);
                           $1->bro = $3; }
        | Exp '-' Exp  { $$ = mknode(MINUS, 0, NULL, $1);
                            $1->bro = $3;}
        | Exp '*' Exp  { $$ = mknode(MUL, 0, NULL, $1);
                            $1->bro = $3;}
        | Exp '/' Exp  { $$ = mknode(DIVIDE, 0, NULL, $1);
                            $1->bro = $3;}
        | '-' Exp %prec UNARYMINUS    { $$ = mknode(UMINUS, 0, NULL, $2); }
    	| '(' Exp ')'	 { $$ = $2; }
	    | NUM		 { $$ = mkleaf(INT, $1); }
	    ;
%%
int main() { yyparse(); return 0; }
int yyerror(const char *msg) { fputs(msg, stderr); }
/*
int yylex() { int c = getchar();
    return (c == '\n')? 0: (isdigit(c))? yylval=c-'0', NUMBER: c;
}
*/

