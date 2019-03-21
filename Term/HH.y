%{
    #include <stdio.h>
    #include "ast.h"
    Node *Root;
	
	int yylex(void);
    int yyerror(char *msg);
%}
%union{
    char *sval;
    int ival;
    Node *pval;
}


%token <ival> tINTEGER 
%token <sval> TRUE FALSE MAINFUNC YIELD RETURN IF ELSE DO WHILE FOR INT BOOLEAN CHAR LIST STRING 
				tSTRING tID LAMBDA SHORTFUNC MIDOP PREFIXOP VECTOROP VECTOROP2 YIELDOP ASSIGNOP
%type  <pval> Prg MainFunc FuncDecls FuncDecl tFunc FuncDeclEnd VarDecl ids ParameterList
				Exp Exp2 Temp Type Statements Statement StateTemp IfBack DoState Literal BooleanLiteral id
				

%%
Start			: Prg 													{Root = $1;}
				;
Prg 			: FuncDecls MainFunc 									{$$ = new Prog($1, $2);}
				| MainFunc 												{$$ = $1;}
   				;
FuncDecls 		: FuncDecl FuncDecls 									{$$ = new FuncDecls($1, $2);}
	  			| FuncDecl     											{$$ = $1;}
	  			; 	
FuncDecl 		: Type id '(' ParameterList ')' FuncDeclEnd				{$$ = new FuncDecl($1,$2,$4,$6);}
	 			;
				
FuncDeclEnd		:  '{' Statements '}'								{$$ = $2;}
				| ';'													{$$ = NULL;}
				;
tFunc			: id '(' ids ')'									{$$ = new Func($1,$3);}
				| LAMBDA '(' ParameterList ':' Exp ')' 			{$$ = new Lambda($3,$5); }
				;
				
MainFunc 		: MAINFUNC '{' Statements '}' 						{$$ = new MainFunc($3);}
	 			;

ParameterList 	: Type id ',' ParameterList 							{$$ = new ParameterList($1,$2,$4);}
				| Type id												{$$ = new ParameterList($1,$2);}
				|														{$$ = NULL; }
				;
VarDecl  		: Type Exp  											{$$ = new VarDecl($1, $2);}
				;	
ids 			: id ',' ids 											{$$ = new Ids($1,$3);}
				| id													{$$ = new Ids($1);}
				;

Statements 		: Statement ';' Statements 								{$$ = new Statements($1,$3); }
				| Statement ';'											{$$ = new Statements($1); }
				;
   
Statement 		: VarDecl 												{$$ = $1;}
				| IF '(' Exp ')' StateTemp IfBack						{$$ = new If_Else_Statement($3,$5,$6); }
		  		| DoState WHILE '(' Exp ')' StateTemp					{$$ = new Do_While_Statement($1,$4,$6);}
	  			| FOR '(' Exp ';' Exp ';' Exp ')' StateTemp				{$$ = new For_Statement($3,$5,$7,$9);}
	  			| FOR '(' id ':' id ')' StateTemp						{$$ = new For_Statement($3,$5,$7);} 
	  			| SHORTFUNC '(' Exp ')' 								{$$ = new SFunc_Statement($1, $3);}
	  			| YIELD Exp  											{$$ = new Yield_Statement($2);}
	  			| RETURN Exp 											{$$ = new Return_Statement($2);}
	  			| StateTemp												{$$ = $1;}
	  			;
IfBack 			: ELSE StateTemp										{$$ = $2; }
	   			| 														{$$ = NULL; }
	   			;
DoState 		: DO Statement											{$$ = $2;}
				|														{$$ = NULL; }
				;
	   
StateTemp 		:  Exp													{$$ = $1; }
	  			| '{' Statements '}'									{$$ = $2;}
	  			;
Exp				: Exp ASSIGNOP Exp2  									{$$ = new BiOp($1,$2,$3);}
	 			| Exp '?' Temp ':' Temp									{$$ = new TriOp($1,$3,$5);}
	 			| PREFIXOP Temp											{$$ = new PrefixOp($1,$2);}
	 			| Exp '.' VECTOROP '(' ')' 								{$$ = new VectorOp($1,$3);}
	 			| Exp '.' VECTOROP2 '(' Literal ')' 					{$$ = new VectorOp($1,$3,$5);}
	 			| Exp '.' YIELDOP '(' ')' 								{$$ = new Yield($1,$3);}
	 			| Exp '[' Exp ']'										{$$ = new Select($1,$3);}
				| Exp2													{$$ = $1;}
				;
Exp2			: Exp2 MIDOP Temp										{$$ = new BiOp($1,$2,$3);}
				| Temp													{$$ = $1;}
				;
Temp 			: '(' Exp ')'											{$$ = new Tuple($2);}
	 			| ids													{$$ = $1;}
				| tFunc													{$$ = $1;}
	 			;
Type 			: INT													{$$ = new Type($1);}
	 			| BOOLEAN												{$$ = new Type($1);}
	 			| CHAR													{$$ = new Type($1);}
     			| Type '[' Literal ']' 									{$$ = new Array($1,$3);}
	 			| LIST '<' Type '>' 									{$$ = new List($1,$3);}
	 			| STRING 												{$$ = new Type($1);}
	 			;
	 
Literal 		: tINTEGER 												{$$ = new Num($1);}
				| tSTRING 												{$$ = new String($1);}
				| BooleanLiteral 										{$$ = $1;}
				;
	
BooleanLiteral 	: TRUE													{$$ = new Bool($1);}
				| FALSE													{$$ = new Bool($1);}
				;
		
id				: Literal 												{$$ = $1;}
	  			| tID 													{$$ = new Id($1);}
	 			;

%%
int main() {yyparse(); printTree(Root); symbol_Gen(Root); mainInit(); code_Gen(Root); return 0;}
int yyerror(char *s) { printf("Error: %s\n", s); }
