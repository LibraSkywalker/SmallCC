#include <iostream>
#include "AST.h"
//#include "semanticAnalyzer.h"
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
        //globeScope = currentScope = new Scope();
        //Globe->check();
    }

    return 0;
}  
