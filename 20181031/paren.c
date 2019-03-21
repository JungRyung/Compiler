#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void error(char *msg) {
	printf("ERROR: %s\n", msg);
	exit(1);
}

int LA;

int yylex() { 			//return ASCII
	return getchar();
}

int match(int t) {
	if (LA == t)
		LA = yylex();	//t와 같으면 다음토큰으로 LA설정
	else
		error("lexical error");	//t와 다르면 에러코드 출력
}

bool eof() {
	return LA == EOF;
}


void A(), L(), S();

// A: eof | L A
//
void A() {
	if (eof()) {
        puts("A -> eof");
		exit(0);
    }
	else {
        puts("A -> L A");
		L(); A();
	}
}

// L: S '\n'
//
void L() {
    puts("L -> S");
	S(); match('\n');
}


// S: '(' S ')' S |
//
void S() {
	if (LA == '(') {
        puts("S -> (S)S");
		match('('); S(); match(')'); S();
	}
	else
		puts("S -> ");
}

int main() {
	LA = yylex();
	A();
	return 0;
}

