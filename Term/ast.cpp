#include "ast.h"

char *NodeName[] = { "Prog", "FuncDecls", "FuncDecl", "Func", "MainFunc", "ParameterList", "VarDecl",
				"Ids", "Statements", "Lambda", "If_Else_Statement", "For_Statement", "Do_While_Statement", "SFunc_Statement",
				"Yield_Statement", "Return_Statement", "BiOp", "TriOp", "PrefixOp", "VectorOp", "Yield", "Select", "Tuple", "Type", 
				"Array", "List", "Num", "String", "Bool", "Id" };
				
map<string, Symbol> symbolTable;
char func[100];
int offset;
int var = 0;
int stackSize;

ofstream output("HH.t");

Node::Node(): son(NULL), bro(NULL){}

Node::Node(Node *s): son(s), bro(NULL){}

void Node::inputSon(Node *son){
	this->son = son;
}

Prog::Prog(Node *func, Node *mainFunc)
: Node(func){
	this->tag = PROG;
	func->bro = mainFunc;
}
Prog::Prog(Node *mainFunc)
: Node(mainFunc){
	this->tag = PROG;
}
void Prog::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

FuncDecls::FuncDecls(Node *funcDecl, Node *funcDecls)
: Node(funcDecl){
	this->tag  = FUNCDECLS;
	funcDecl->bro = funcDecls->son;
}
void FuncDecls::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

FuncDecl::FuncDecl(Node *type, Node *id, Node *param, Node *funcDeclEnd)
: Node(type){
	this->tag = FUNCDECL;
	type->bro = id;
	id->bro = param;
	param->bro = funcDeclEnd;
}
void FuncDecl::print(){
	printf("tag: %s\n", NodeName[this->tag]);
	var = 1;
}

Func::Func(Node *id, Node *ids)
: Node(id){
	this->tag = FUNC;
	id->bro = ids;
}
void Func::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

MainFunc::MainFunc(Node *statements)
: Node(statements){
	this->tag = MAINFUNC;
}
void MainFunc::print(){
	printf("tag: %s\n", NodeName[this->tag]);
	strcpy(func, "main");
}


ParameterList::ParameterList(Node *type, Node *id, Node *paramList)
: Node(type){
	this->tag = PARAMETERLIST;
	type->bro = id;
	id->bro = paramList->son;
}
ParameterList::ParameterList(Node *type, Node *id)
: Node(type){
	this->tag = PARAMETERLIST;
	type->bro = id;
}
void ParameterList::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

VarDecl::VarDecl(Node *type, Node *ids)
: Node(type){
	this->tag = VARDECL;
	type->bro = ids;
}
void VarDecl::symbolGen(){
	add_Symbol(this->son);
}
void VarDecl::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

Ids::Ids(Node *id, Node *ids)
: Node(id){
	this->tag = IDS;
	id->bro = ids->son;
}
Ids::Ids(Node *id)
: Node(id){
	this->tag = IDS;
}
void Ids::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

Statements::Statements(Node *statement)
: Node(statement){
	this->tag = STATEMENTS;
}
Statements::Statements(Node *statement, Node *statements)
: Node(statement){
	this->tag = STATEMENTS;
	statement->bro = statements->son;
}
void Statements::print(){
	printf("tag: %s\n", NodeName[this->tag]);	
}

Lambda::Lambda(Node *parameterList, Node *exp)
: Node(parameterList){
	this->tag = LAMBDA;
	parameterList->bro = exp;
}
void Lambda::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

If_Else_Statement::If_Else_Statement(Node *exp, Node *stateTemp, Node *ifBack)
: Node(exp){
	this->tag = IFELSESTATEMENT;
	exp->bro = stateTemp;
	stateTemp->bro = ifBack;
}
void If_Else_Statement::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

For_Statement::For_Statement(Node *id1, Node *id2, Node *stateTemp)
: Node(id1){
	this->tag = FORSTATEMENT;
	id1->bro = id2;
	id2->bro = stateTemp;
}
For_Statement::For_Statement(Node *exp1, Node *exp2, Node *exp3, Node *stateTemp)
: Node(exp1){
	this->tag = FORSTATEMENT;
	exp1->bro = exp2;
	exp2->bro = exp3;
	exp3->bro = stateTemp;
}
void For_Statement::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

Do_While_Statement::Do_While_Statement(Node *doState, Node *exp, Node *stateTemp)
: Node(doState){
	this->tag = DOWHILESTATEMENT;
	if(doState == NULL)
		inputSon(exp);
	else
		doState->bro = exp;
	exp->bro = stateTemp;
}
void Do_While_Statement::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

SFunc_Statement::SFunc_Statement(char *SFunc, Node *exp)
: Node(exp){
	this->tag = SFUNCSTATEMENT;
	this->Short_Func = (char *)malloc(strlen(SFunc)+1);
	strcpy(Short_Func, SFunc);
}
void SFunc_Statement::codeGen(){
	if(strcmp(this->Short_Func, "printf") == 0){
		Symbol s = lookup(this->son->son, this->function);
		if(strcmp(s.type, "int") == 0){
			output << "ldo " << s.offset << endl;
			output << "out" << endl;
		}
		else if(strcmp(s.type, "string") == 0){

		}
		output << "ldc \'\\n\'" << endl;
		output << "outc" << endl;
	}
}
void SFunc_Statement::print(){
	printf("tag: %s\n", NodeName[this->tag]);
	this->function = new char[strlen(func)];
	strcpy(this->function, func);
}

Yield_Statement::Yield_Statement(Node *exp)
: Node(exp){
	this->tag = YIELDSTATEMENT;
}
void Yield_Statement::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

Return_Statement::Return_Statement(Node *exp)
: Node(exp){
	this->tag = RETURNSTATEMENT;
}
void Return_Statement::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

BiOp::BiOp(Node *exp, char *Op, Node *temp)
: Node(exp){
	this->tag = BIOP;
	this->op = (char *)malloc(strlen(Op)+1);
	strcpy(op, Op);
	exp->bro = temp;
}
void BiOp::codeGen(){
	if(strcmp(this->op, "+") == 0){
		output << "add" << endl;
	}
	else if(strcmp(this->op, "-") == 0){
		output << "neg" << endl;
		output << "add" << endl;
	}
	else if(strcmp(this->op, "*") == 0){
		output << "mul" << endl;
	}
	else if(strcmp(this->op, "/") == 0){
		output << "div" << endl;
	}
	else if(strcmp(this->op, "<=") == 0){
		Symbol s = lookup(this->son->son, this->function);
		output << "ldo " << s.offset << endl;
		output << "leq" << endl;
	}
	else if(strcmp(this->op, "=") == 0){
		Symbol s = lookup(this->son->son, this->function);
		output << "str " << s.offset << endl;
	}
}
void BiOp::print(){
	printf("tag: %s, op: %s\n", NodeName[this->tag], this->op);
	this->function = new char[strlen(func)];
	strcpy(this->function, func);
}

TriOp::TriOp(Node *exp, Node *temp1, Node *temp2)
: Node(exp){
	this->tag = TRIOP;
	exp->bro = temp1;
	temp1->bro = temp2;
}
void TriOp::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

PrefixOp::PrefixOp(char *Op, Node *temp)
: Node(temp){
	this->tag = PREFIXOP;
	this->op = (char *)malloc(strlen(Op)+1);
	strcpy(op, Op);
}
void PrefixOp::codeGen(){
	if(strcmp(this->op, "++") == 0){
		Symbol s = lookup(this->son->son, this->function);
		output << "lod " << s.offset << endl;
		output << "dup" << endl;
		output << "add" << endl;
		output << "str " << s.offset << endl;
	}
}
void PrefixOp::print(){
	printf("tag: %s, op: %s\n", NodeName[this->tag], this->op);
	this->function = new char[strlen(func)];
	strcpy(this->function, func);
}

VectorOp::VectorOp(Node *exp, char *Op)
: Node(exp){
	this->tag = VECTOROP;
	this->op = (char *)malloc(strlen(Op)+1);
	strcpy(op, Op);
}
VectorOp::VectorOp(Node *exp, char *Op, Node *literal)
: Node(exp){
	this->tag = VECTOROP;
	this->op = (char *)malloc(strlen(Op)+1);
	strcpy(op, Op);
	exp->bro = literal;
}
void VectorOp::print(){
	printf("tag: %s, op: %s\n", NodeName[this->tag], this->op);
}

Yield::Yield(Node *exp, char *Op)
: Node(exp){
	this->tag = YIELD;
	this->op = (char *)malloc(strlen(Op)+1);
	strcpy(op, Op);
}
void Yield::print(){
	printf("tag: %s, op: %s\n", NodeName[this->tag], this->op);
} 

Select::Select(Node *exp, Node *exp2)
: Node(exp){
	this->tag = SELECT;
	exp->bro = exp2;
}
void Select::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

Tuple::Tuple(Node *exp)
: Node(exp){
	this->tag = TUPLE;
}
void Tuple::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

Type::Type(char *type){
	this->tag = TYPE;
	this->name = (char *)malloc(strlen(type)+1);
	strcpy(name, type);
}
void Type::print(){
	printf("tag: %s, TypeName: %s\n", NodeName[this->tag], this->name);
}

Array::Array(Node *type, Node *literal)
: Node(type){
	this->tag = ARRAY;
	type->bro = literal;
}
void Array::print(){
	printf("tag: %s\n", NodeName[this->tag]);
}

List::List(char *list, Node *type)
: Node(type){
	this->tag = LIST;
	this->name = (char *)malloc(strlen(list)+1);
	strcpy(name, list);
}
void List::print(){
	printf("tag: %s, name: %s\n", NodeName[this->tag], this->name);
}

Num::Num(int num){
	this->tag = NUM;
	this->num = num;
}
void Num::codeGen(){
	output << "ldc " << this->num << endl;
}
void Num::print(){
	printf("tag: %s, value: %d\n", NodeName[this->tag], this->num);
}

String::String(char *string){
	this->tag = STRING;
	this->str = (char *)malloc(strlen(string)+1);
	strcpy(str, string);
}
void String::codeGen(){
	output << "ldc " << strlen(this->str)-2 << endl;
	for(int i = 1; i <= strlen(this->str)-2; i++){
		output << "ldc " << str[i] << endl;
	}
}
void String::print(){
	printf("tag: %s, value: %s\n", NodeName[this->tag], this->str);
}

Bool::Bool(char *string){
	this->tag = BOOL_TYPE;
	this->str = (char *)malloc(strlen(string)+1);
	strcpy(str, string);
	if(strcmp(str, "true") == 0)
		this->val = 1;
	else
		this->val = 0;
}
void Bool::print(){
	printf("tag: %s, value: %s, %d\n", NodeName[this->tag], this->str, this->val);
}

Id::Id(char *name){
	this->tag = ID;
	this->name = (char *)malloc(strlen(name)+1);
	strcpy(this->name, name);
}
char *Id::getName(){
	return this->name;
}
void Id::print(){
	printf("tag: %s, value: %s \n", NodeName[this->tag], this->name);
	if(var == 1){
		strcpy(func, this->name);
		var = 0;
	}
	this->function = new char[strlen(func)];
	strcpy(this->function, func);
}

Symbol s;

void Type::addSymbol(){
	s.type = new char[strlen(this->name)];
	strcpy(s.type, this->name);
	s.function = new char[strlen(func)];
	strcpy(s.function, func);
}

void Id::addSymbol(){
	stackSize++;
	s.name = new char[strlen(this->name)];
	strcpy(s.name, this->name);
	s.offset = ++offset;
	string key = s.name;
	key += s.function;
	symbolTable[key] = s;

	map<string, Symbol>::iterator it = symbolTable.find(key);

	cout << "insert symbol" << endl;
	cout << "type: " << it->second.type << endl;
	cout << "name: " << it->second.name << endl;
	// cout << "function: " << it->second.function << endl;
	cout << "func: " << this->function << endl;
	cout << "offset: " << it->second.offset << endl;
	cout << endl << endl;
}

void add_Symbol(Node *n){
	if(n == NULL)
		return;
	n->addSymbol();
	add_Symbol(n->son);
	add_Symbol(n->bro);
}

void symbol_Gen(Node *n){
	if(n == NULL)
		return;
	n->symbolGen();
	symbol_Gen(n->son);
	symbol_Gen(n->bro);
}

Symbol lookup(Node *n, char *func){
	string key = n->getName();
	key += func;
	return symbolTable[key];
}

void mainInit(){
	output << "ssp " << stackSize << endl;
}

void code_Gen(Node *n){
	if(n == NULL)
		return;
	code_Gen(n->son);
	n->codeGen();
	code_Gen(n->bro);
}





void printTreeIndent(Node *root, int lmargin);

void printTree(Node *root)
{
    if (root == NULL) return;
    printTreeIndent(root, 0);
}

const int INDENT_LEVEL = 4;

void indent(int n)
{
    if (n > 0) {
        printf(" ");
        indent(--n);
    }
}

void printTreeIndent(Node *root, int lmargin)
{
	if(root == NULL) return;
    indent(lmargin);
    root->print();
    printTreeIndent(root->son, lmargin+INDENT_LEVEL);
    printTreeIndent(root->bro, lmargin);
}
    