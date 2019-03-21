#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/////'.'을 입력할 때 까지 계속해서 연산작업이 가능합니다.

void error(), match(char), S(), removeBlank();
char LA = 0, nextToken();
int value = 0, E(), T(), F(), D();

int main() {
	LA = nextToken();
	S();
	return 0;
}

char nextToken() {
	return getchar();
}

void removeBlank(){
	while(LA == ' '){
		match(LA);
	}
}

void error() {
	printf("Syntax error\n");
	exit(1);
}

void match(char c) {
	if (LA == c) LA = nextToken();
	else error();
}

void S() {
	int S_value;
	if (LA == '.'){
		exit(0);
	}
	else {
		S_value = E(); printf("%d\n",S_value); match('\n'); S();
	}
}

int E() {
	int E_value;
	int operator;
	E_value = T();
	removeBlank();
	while (LA == '+' || LA == '-') {
		operator = LA;
		match(LA);
		if(operator == '+'){
			E_value += T();
			return E_value;
		}
		else{
			E_value -= T();
			return E_value;
		}
	}
	return E_value;
}

int T() {
	int T_value;
	int operator;
	T_value = F();
	removeBlank();
	while (LA == '*' || LA == '/')
	{
		operator = LA;
		match(LA);
		if(operator == '*'){
			T_value *= F();
			return T_value;
		}
		else{
			T_value /= F();
			return T_value;
		}
	}
	return T_value;
}

int F() {
	int F_value;
	removeBlank();
	if (D()) {
		F_value = LA;

		match(LA);
		return F_value - 48;
	}

	else if (LA == '(') {
		match('('); F_value = E(); match(')');
		return F_value;
	}

	else{
		error();
	}
	return 0;
}

int D() {
	if (isdigit(LA)){
		return 1;
	}
	else{
		return 0;
	}
}