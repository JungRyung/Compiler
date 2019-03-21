#ifndef __AST_H__
#define __AST_H__

#include <cstdio>
#include <malloc.h>
#include <string.h>
#include <map>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

typedef struct _symbol{
	int offset;		// offset
	char *type;		// type
	char *name;		// 이름
	char *function;	// 함수
}Symbol;

class Node {
public:
	enum { PROG, FUNCDECLS, FUNCDECL, FUNC, MAINFUNC, PARAMETERLIST, VARDECL,
			IDS, STATEMENTS, LAMBDA, IFELSESTATEMENT, FORSTATEMENT, DOWHILESTATEMENT, SFUNCSTATEMENT,
			YIELDSTATEMENT, RETURNSTATEMENT, BIOP, TRIOP, PREFIXOP, VECTOROP, YIELD, SELECT, TUPLE, TYPE, 
			ARRAY, LIST, NUM, STRING, BOOL_TYPE, ID
	} tag;
    char *function;
	Node *bro, *son;
	Node();
	Node(Node *s);
	void inputSon(Node *son);

	virtual char *getName(){}
	virtual void addSymbol(){}
	virtual void symbolGen(){}
	virtual void codeGen(){}
	virtual void print() = 0;
};

class Prog: public Node{
public:
	Prog(Node *func, Node *mainFunc);
	Prog(Node *mainFunc);
	virtual void print();
};

class FuncDecls: public Node{
public:
	FuncDecls(Node *funcDecl, Node *funcDecls);
	virtual void print();
};

class FuncDecl: public Node{
public:
	FuncDecl(Node *type, Node *id, Node *paramList, Node *funcDeclEnd);
	virtual void print();
};

class Func : public Node{
	public:
		Func(Node *id, Node *Ids);
		virtual void print();
};

class MainFunc: public Node{
public:
	MainFunc(Node *statements);
	virtual void print();
};

class ParameterList: public Node{
public:
	ParameterList(Node *type, Node *id);
	ParameterList(Node *type, Node *id, Node *parameterList);
	virtual void print();
};

class VarDecl: public Node{
	public:
		VarDecl(Node *type, Node *ids);
		virtual void symbolGen();
		virtual void print();
};

class Ids: public Node{
	public:
		Ids(Node *id, Node *ids);
		Ids(Node *id);
		virtual void print();
};

class Statements: public Node{
public:
	Statements(Node *statement);
	Statements(Node *statement, Node *statements);
	virtual void print();
};

class Lambda: public Node{
public:
	Lambda(Node *parameterList, Node *exp);
	virtual void print();
};

class If_Else_Statement: public Node{
public:
	If_Else_Statement(Node *exp, Node *stateTemp, Node *ifBack);
	virtual void print();
};

class For_Statement: public Node{
public:
	For_Statement(Node *id1, Node *id2, Node *stateTemp);
	For_Statement(Node *exp1, Node *exp2, Node *exp3, Node *stateTemp);
	virtual void print();
};

class Do_While_Statement: public Node{
	public:
		Do_While_Statement(Node *doState, Node *exp, Node *stateTemp);
		virtual void print();
};

class SFunc_Statement: public Node{
	public:
		char *Short_Func;
		SFunc_Statement(char *SFunc, Node *exp);
		virtual void codeGen();
		virtual void print();
};

class Yield_Statement: public Node{
	public:
		Yield_Statement(Node *exp);
		virtual void print();
};

class Return_Statement: public Node{
	public:
		Return_Statement(Node *exp);
		virtual void print();
};
class BiOp: public Node{
public:
	char *op;
	BiOp(Node *exp, char *Op, Node *temp);
	virtual void codeGen();
	virtual void print();
};

class TriOp: public Node{
	public:
		TriOp(Node *exp, Node *temp1, Node *temp2);
		virtual void print();
};

class PrefixOp: public Node{
public:
	char *op;
	PrefixOp(char *Op, Node *temp);
	virtual void codeGen();
	virtual void print();
};

class VectorOp: public Node{
public:
	char *op;
	VectorOp(Node *exp, char *Op);
	VectorOp(Node *exp, char *Op, Node *literal);
	virtual void print();
};

class Yield: public Node{
	public:
		char *op;
		Yield(Node *exp, char *Op);
		virtual void print();
};

class Select: public Node{
	public:
		Select(Node *exp, Node *exp2);
		virtual void print();
};

class Tuple: public Node{
	public:
		Tuple(Node *exp);
		virtual void print();
};

class Type: public Node{
public:
	char *name;
	Type(char *type);
	virtual void print();
	virtual void addSymbol();
};

class Array: public Node{
public:
	Array(Node *type, Node *literal);
	virtual void print();
};

class List: public Node{
public:
	char *name;
	List(char *list, Node *type);
	virtual void print();
};

class Num: public Node{
public:
	int num;
	Num(int num);
	virtual void codeGen();
	virtual void print();
};

class String: public Node{
public:
	char *str;
	String(char *string);
	virtual void codeGen();
	virtual void print();
};

class Bool: public Node{
public:
	int val;
	char *str;
	Bool(char *string);
	virtual void print();
};


class Id: public Node{
public:
	char *name;
	Id(char *name);
	virtual char *getName();
	virtual void print();
	virtual void addSymbol();
};

void mainInit();

void add_Symbol(Node *n);
Symbol lookup(Node *n, char *func);

void symbol_Gen(Node *n);
void code_Gen(Node *n);

void printTree(Node *root);

#endif
