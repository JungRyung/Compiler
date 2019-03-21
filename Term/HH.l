%{
    #include <stdio.h>
    #include <stdlib.h> 
    #include "ast.h"
    #include "y.tab.h"
%}
%%
"true" 			{yylval.sval = strdup(yytext); return(TRUE);}
"false" 		{yylval.sval = strdup(yytext); return(FALSE);}
"int main()" 	{yylval.sval = strdup(yytext); return(MAINFUNC);}
"yield"			{yylval.sval = strdup(yytext); return(YIELD);}
"return" 		{yylval.sval = strdup(yytext); return(RETURN);}
"if"			{yylval.sval = strdup(yytext); return(IF);}
"else"			{yylval.sval = strdup(yytext); return(ELSE);}
"do"			{yylval.sval = strdup(yytext); return(DO);}
"while"			{yylval.sval = strdup(yytext); return(WHILE);}
"for"			{yylval.sval = strdup(yytext); return(FOR);}
"lambda"		{yylval.sval = strdup(yytext); return(LAMBDA);}
"printf"		{yylval.sval = strdup(yytext); return(SHORTFUNC);}
"scanf"	 		{yylval.sval = strdup(yytext); return(SHORTFUNC);}
"gets"			{yylval.sval = strdup(yytext); return(SHORTFUNC);}
"puts"  		{yylval.sval = strdup(yytext); return(SHORTFUNC);}
"int"			{yylval.sval = strdup(yytext); return(INT);}
"boolean" 		{yylval.sval = strdup(yytext); return(BOOLEAN);}
"char"  		{yylval.sval = strdup(yytext); return(CHAR);} 
"List" 			{yylval.sval = strdup(yytext); return(LIST);}
"string" 		{yylval.sval = strdup(yytext); return(STRING);}
"add" 			{yylval.sval = strdup(yytext); return(VECTOROP);}
"length" 		{yylval.sval = strdup(yytext); return(VECTOROP);}
"reverse" 		{yylval.sval = strdup(yytext); return(VECTOROP);}
"head"			{yylval.sval = strdup(yytext); return(VECTOROP);}
"tail"			{yylval.sval = strdup(yytext); return(VECTOROP);}
"take"			{yylval.sval = strdup(yytext); return(VECTOROP2);}
"drop"			{yylval.sval = strdup(yytext); return(VECTOROP2);}
"next"			{yylval.sval = strdup(yytext); return(YIELDOP);}
"!="			{yylval.sval = strdup(yytext); return(ASSIGNOP);}
"!"				{yylval.sval = strdup(yytext); return(PREFIXOP);}
"++"			{yylval.sval = strdup(yytext); return(PREFIXOP);}
"--"			{yylval.sval = strdup(yytext); return(PREFIXOP);}
"-="			{yylval.sval = strdup(yytext); return(ASSIGNOP);}
"+="			{yylval.sval = strdup(yytext); return(ASSIGNOP);}
"*="			{yylval.sval = strdup(yytext); return(ASSIGNOP);}
"/="			{yylval.sval = strdup(yytext); return(ASSIGNOP);}
"%="			{yylval.sval = strdup(yytext); return(ASSIGNOP);}
"^="			{yylval.sval = strdup(yytext); return(ASSIGNOP);}
"=="			{yylval.sval = strdup(yytext); return(MIDOP);}
"+"     		{yylval.sval = strdup(yytext); return(MIDOP);}
"-"     		{yylval.sval = strdup(yytext); return(MIDOP);}
"*"     		{yylval.sval = strdup(yytext); return(MIDOP);}
"/"     		{yylval.sval = strdup(yytext); return(MIDOP);}
"%"				{yylval.sval = strdup(yytext); return(MIDOP);}
"^"				{yylval.sval = strdup(yytext); return(MIDOP);}
"<="			{yylval.sval = strdup(yytext); return(MIDOP);}
"<."			{yylval.sval = strdup(yytext); return(MIDOP);}
">="			{yylval.sval = strdup(yytext); return(MIDOP);}
">."			{yylval.sval = strdup(yytext); return(MIDOP);}
"&&"			{yylval.sval = strdup(yytext); return(MIDOP);}
"||"			{yylval.sval = strdup(yytext); return(MIDOP);}
"="				{yylval.sval = strdup(yytext); return(ASSIGNOP);}
[0-9]+  		{yylval.ival = atoi(yytext); return(tINTEGER);}

([a-zA-Z]|"_")+[0-9]*([a-zA-Z]|"_")* {yylval.sval = yytext; return(tID);}
\".*\" {yylval.sval = yytext; return(tSTRING);}

\{				{return('{'); }
\}				{return('}'); }
\,				{return(','); }
\.				{return('.'); }
\<				{return('<'); }
\>				{return('>'); }
\[				{return('['); }
\]				{return(']'); }
\?				{return('?'); }
\:				{return(':'); }
\;				{return(';'); }
\(  		    {return('('); }
\)      		{return(')'); }
[ \t]   		; 

.       {printf("error near '%s' \n", yytext); exit(-1); }
%%

int yywrap() {return 1;}
