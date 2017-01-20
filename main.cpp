#include <iostream>
#include "AST.h"
#include "semanticAnalyzer.h"
using namespace std;
EventList* Globe;

int main()  
{  
    extern int yyparse(void);  
    extern FILE *yyin;  
      
    yyin=stdin;  
    extern int yyparse(void); 
    if(yyparse()){  
        fprintf(stderr,"Error! Error! Error!\n");  
        return 1;
    }

    {
        globeScope = currentScope = new Scope();
        IntType = (TypeSymbol*) globeScope->putVariable("int",TYPESYMBOL);
        if (!Globe->check()){
            cout << "Semantic check failed\n" + SystemError << endl;
        } else {
            cout << "Semantic check succeed\n" << endl;
        }
    }

    return 0;
}  
