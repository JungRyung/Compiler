#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <ctype.h>
#include "ast.h"

using namespace std;

void Node::printTree(int depth) {
    int i;
    if(this == NULL)
        return;
    switch(this->kind){
        case PLUS :
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Op(+)\n");
        this->son->printTree(depth+1);
        this->bro->printTree(depth);
        break;
        case MINUS :
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Op(-)\n");
        this->son->printTree(depth+1);
        this->bro->printTree(depth);
        break;
        case MUL :
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Op(*)\n");
        this->son->printTree(depth+1);
        this->bro->printTree(depth);
        break;
        case DIVIDE :
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Op(/)\n");
        this->son->printTree(depth+1);
        this->bro->printTree(depth);
        break;
        case UMINUS :
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Uop(-)\n");
        this->son->printTree(depth+1);
        this->bro->printTree(depth);
        break;
        case INT :      
        for(i=0; i<depth; ++i)
            printf("\t");
        printf("Int(%d)\n",this->ival);
        this->son->printTree(depth+1);
        this->bro->printTree(depth);
        break;
        case CHAR :
        for(i=0; i<depth; ++i)
            printf("\t");
        cout << "ID(" << *(this->sval) << ")" << endl;
        this->son->printTree(depth+1);
        this->bro->printTree(depth);
        break;
    }   
}

Node::Node(NKind kind, int val, Node *bro, Node *son){
    this->kind = kind;
    this->ival = val;
    this->bro = bro;
    this->son = son;
};

Node::Node(NKind kind, int val){
    this->kind = kind;
    this->ival = val;
    this->bro = this->son = NULL;
};

Node::Node(NKind kind, char *val){
    this->kind = kind;
    this->sval = val;
    this->bro = this->son = NULL;
};