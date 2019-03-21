#ifndef __AST_H__
#define __AST_H__

enum NKind{ PLUS, MINUS, MUL, DIVIDE, UMINUS, INT, CHAR };

class Node{
public:
	Node(NKind kind, int val, Node *bro, Node *son);
	Node(NKind kind, int val);
	Node(NKind kind, char *val);
	NKind kind;
	union{
		int ival;
		char *sval;
	};
	Node *bro, *son;

	void printTree(int depth);
};

#endif