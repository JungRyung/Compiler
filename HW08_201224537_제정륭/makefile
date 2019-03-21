YACC=bison -dy
LEX=flex
a.exe:	lex.yy.c y.tab.c y.tab.h ast.h ast.c
	$(CXX) lex.yy.c y.tab.c ast.c
lex.yy.c:	att.l
	$(LEX) att.l
y.tab.c:	att.y
	$(YACC) att.y
y.tab.h:	att.y
	$(YACC) att.y
clean:
	$(RM) a.exe lex.yy.c y.tab.c y.tab.h
