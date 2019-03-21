1. Description

HH.y에는 Abstract Syntax Grammar와 각 terminal, non-terminal에 대한 노드 구성이 작성되어 있다.
HH.l에서 어떤 구문을 파싱하여 HH.y에 토큰으로 보내야 할지를 작성하였다.
ast.h에서 노드들과 Symbol Table을 선언하였고
ast.cpp에서 각 노드들의 생성자 및 print함수, Symbol Table 생성과 Code Generation을 구현하였다.

2. How to build
flex HH.l
bison -dy HH.y
g++ -o HH.exe lex.yy.c y.tab.c ast.cpp

HH.exe < input.txt