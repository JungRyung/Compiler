%{
	#include <stdio.h>
	#include <ctype.h>
	int yyerror(const char *msg), yylex();
%}
%token NUMBER
%%
Line	: Exp { printf("= %d \n", $1); }
		;
Exp 	: Exp '+' NUMBER { $$ = $1 + $3; }
		| NUMBER { $$ = $1; }
		;
%%
int main() { yyparse(); return 0; }
int yyerror(const char *msg) { fputs(msg, stderr); }
int yylex() { int c = getchar();
	while (c== ' '|| c== '\t')c = getchar();
	return (c == '\n')? 0: (isdigit(c))? yylval=c-'0', NUMBER: c;
}