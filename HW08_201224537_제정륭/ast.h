#ifndef __AST_H__
#define __AST_H__

typedef enum { PLUS, MINUS, MUL, DIVIDE, UMINUS, INT, CHAR } NKind;

typedef struct _node {
    NKind     kind;
    int depth;
    union { 
	int   ival;
	char *sval;
    };
    struct _node *bro, *son;
} *Tree;

Tree mkleaf(NKind kind, int val);
Tree mknode(NKind kind, int val, Tree bro, Tree son); 
void printtree(Tree root, int depth);

#endif
