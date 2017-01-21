#include <iostream>
#include "AST.h"
#include "semanticAnalyzer.h"
using namespace std;
EventList* Globe;

void semanticAnalyze(){
	{
        globeScope = currentScope = make_shared<Scope>();
        IntType = std::static_pointer_cast<TypeSymbol>(globeScope->putVariable("int",TYPESYMBOL));
		ReadFunc = std::static_pointer_cast<FunctionSymbol>(globeScope->putVariable("read",FUNCTIONSYMBOL));
		WriteFunc = std::static_pointer_cast<FunctionSymbol>(globeScope->putVariable("write",FUNCTIONSYMBOL));
		ReadFunc->addParameter(make_shared<VariableSymbol>(IntType));
		WriteFunc->addParameter(make_shared<VariableSymbol>(IntType));
        if (!Globe->check()){
            cout << "Semantic check failed\n" + SystemError << endl;
        } else {
         //   cout << "Semantic check succeed\n" << endl;
        }
    }
}

void mipsCodeGenerate(){
    cout <<".data"<< endl << endl;
    cout <<"VReg: .space 4096" << endl << endl;
    cout <<".text"<< endl << endl;
    currentScope = globeScope;
    Globe->generate();
}

int main()
{
    extern int yyparse(void);
    extern FILE *yyin;

    yyin= fopen("test","r");
    extern int yyparse(void);
    if(yyparse()){
        return 1;
    }

	semanticAnalyze();

    mipsCodeGenerate();

    return 0;
}
