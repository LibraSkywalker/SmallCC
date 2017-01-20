AST:
	flex -o lexer.cpp lexer.l
	bison -o parser.cpp -d parser.y
	g++ lexer.cpp parser.cpp main.cpp AST.cpp -o try
Test_AST: 
	g++ AST.cpp test.cpp
clean:
	rm -f try
	rm -f lexer.cpp
	rm -f parser.cpp
	rm -f parser.hpp
