AST:
	flex -o lexer.cpp lexer.l
	bison -o parser.cpp -d parser.y
	g++ -std=c++11 lexer.cpp parser.cpp semanticAnalyzer.cpp main.cpp AST.cpp Generator.cpp -o try 2>> error

clean:
	rm -f try
	rm -f lexer.cpp
	rm -f parser.cpp
	rm -f parser.hpp
	rm -f error
