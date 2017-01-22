#include <iostream>
#include "AST.h"
#include "semanticAnalyzer.h"
using namespace std;
EventList* Globe;

bool semanticAnalyze(){
	{
        globeScope = currentScope = make_shared<Scope>();
        IntType = std::static_pointer_cast<TypeSymbol>(globeScope->putVariable("int",TYPESYMBOL));
		ReadFunc = std::static_pointer_cast<FunctionSymbol>(globeScope->putVariable("read",FUNCTIONSYMBOL));
		WriteFunc = std::static_pointer_cast<FunctionSymbol>(globeScope->putVariable("write",FUNCTIONSYMBOL));
		ReadFunc->addParameter(make_shared<VariableSymbol>(IntType));
		WriteFunc->addParameter(make_shared<VariableSymbol>(IntType));
        if (!Globe->check()){
             fprintf(stderr,"Semantic check failed\n%s", SystemError.c_str());
			cout << "Error." << endl;
            return 1;
        } else {
            return 0;
         //   cout << "Semantic check succeed\n" << endl;
        }
    }
}

void mipsCodeGenerate(){
    cout <<".data"<< endl << endl;
    cout <<"VReg: .space 32768" << endl << endl;
    cout <<".text"<< endl << endl;
    currentScope = globeScope;
    Globe->generate();
}

int main(int argc,char* argv[])
{

	if (argc <= 1){
        fprintf(stderr,"need more arguments\n");
		return 1;
	}

    extern int yyparse(void);
    extern FILE *yyin;
    //yyin= fopen("test","r");
    yyin= fopen(argv[1],"r");
	freopen(argv[2],"w",stdout);

    extern int yyparse(void);
    if(yyparse()){
        return 1;
    }

	if (semanticAnalyze() != 0) return 1;

    mipsCodeGenerate();

    return 0;
}
