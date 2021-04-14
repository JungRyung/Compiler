#include <stdio.h>
#include <stdlib.h>
#include "ast.h"
void printtree(Tree root,int depth) {
    int i;
    if(root == NULL)
        return;
    switch(root->kind){
        case PLUS :
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Op(+)\n");
        printtree(root->son,depth+1);
        printtree(root->bro,depth);
        break;
        case MINUS :
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Op(-)\n");
        printtree(root->son,depth+1);
        printtree(root->bro,depth);
        break;
        case MUL :
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Op(*)\n");
        printtree(root->son,depth+1);
        printtree(root->bro,depth);
        break;
        case DIVIDE :
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Op(/)\n");
        printtree(root->son,depth+1);
        printtree(root->bro,depth);
        break;
        case UMINUS :
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Uop(-)\n");
        printtree(root->son,depth+1);
        printtree(root->bro,depth);
        break;
        case INT :      
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Int(%d)\n",root->ival);
        printtree(root->son,depth+1);
        printtree(root->bro,depth);
        break;
        case CHAR :
        break;
    }   
}

Tree mkleaf(NKind kind, int val) {
    Tree t = (Tree)malloc(sizeof *t);
    t->kind = kind;
    t->ival = val;
    t->bro = t->son = NULL;
    return t;
}

Tree mknode(NKind kind, int val, Tree bro, Tree son) {
    Tree t = (Tree)malloc(sizeof *t);
    t->kind = kind;
    t->ival = val;
    t->bro = bro;
    t->son = son;
    return t;
}