1. Description

HH.y���� Abstract Syntax Grammar�� �� terminal, non-terminal�� ���� ��� ������ �ۼ��Ǿ� �ִ�.
HH.l���� � ������ �Ľ��Ͽ� HH.y�� ��ū���� ������ ������ �ۼ��Ͽ���.
ast.h���� ����� Symbol Table�� �����Ͽ���
ast.cpp���� �� ������ ������ �� print�Լ�, Symbol Table ������ Code Generation�� �����Ͽ���.

2. How to build
flex HH.l
bison -dy HH.y
g++ -o HH.exe lex.yy.c y.tab.c ast.cpp

HH.exe < input.txt