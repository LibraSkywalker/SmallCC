#include <iostream>
#include "AST.h"
#include "semanticAnalyzer.h"
using namespace std;
EventList* Globe;

int main()  
{  
    extern int yyparse(void);  
    extern FILE *yyin;  
      
    yyin= fopen("test","r");
    extern int yyparse(void); 
    if(yyparse()){  
        fprintf(stderr,"Error! Error! Error!\n");  
        return 1;
    }

    {
        globeScope = currentScope = make_shared<Scope>();
        IntType = std::static_pointer_cast<TypeSymbol>(globeScope->putVariable("int",TYPESYMBOL));
        if (!Globe->check()){
            cout << "Semantic check failed\n" + SystemError << endl;
        } else {
            cout << "Semantic check succeed\n" << endl;
        }
    }

    return 0;
}  
