%{
    #include "ㅛ.tab.h"
%}

%%
[0-9]+	{yylval = atoi(yytext); return NUMBER; }
[ \t];
[ ] {;}
\n return 0;
"+" return '+';
"-" return '-';
"*" return '*';
"/" return '/';
"(" return '(';
")" return ')';
%%
int yywrap() {
    return 1;
}
