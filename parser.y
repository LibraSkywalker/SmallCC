%{  
	#include<stdio.h>  
	#include<stdlib.h>  
	#include<string>
	#include"ConstHeader.h"
	#include"AST.h"
	#define YYDEBUG 1  
	int yylex(void);
	int yyerror(char const *str) ;
	extern EventList* Globe;
%}  

%union {
	int int_value;
	std::string* string_value;
	class Expression* expression_value;
	class ExpressionList* expressionlist_value;
	class ArgumentList* argument_value;
	class BranchStatement* branch_value;
	class JumpStatement* jump_value;
	class LoopStatement* loop_value;
	class BlockStatement* block_value;
	class Statement* statement_value;
	class Statement* event_value;
	class EventList* eventlist_value;
	class ParameterList* parameter_value;
	class ArrayVariable* array_value;
	class Function* function_value;
	class Variable* variable_value;
	class VariableList* varlist_value;
	class Declaration* declare_value;
	class Type* type_value;
}

%token<int_value> INT
%token<string_value> ID TYPE READ WRITE


%right ASSIGN PLUSASSIGN MINUSASSIGN MULTIPLYASSIGN DIVIDEASSIGN ANDASSIGN XORASSIGN ORASSIGN LSHIFTASSIGN RSHIFTASSIGN
%left OR
%left AND
%left BOR
%left BXOR
%left BAND
%left SEQ SNE
%left SLT SLE SGT SGE
%left SHL SHR
%left ADD SUB
%left MUL DIV MOD
%right INC DEC NOT BNOT
%left DOT
%token SEMI COMMA  LB RB LC RC LP RP STRUCT RETURN IF ELSE BREAK CONT FOR 
   
%type<expression_value> expression emptyexpression expressionX
%type<expressionlist_value> arrs arguments
%type<branch_value> branchStatement
%type<jump_value> jumpStatement
%type<loop_value> loopStatement
%type<string_value> buildInFunction
%type<block_value> blockStatement
%type<statement_value> Statement
%type<function_value> functionDeclare
%type<array_value> array
%type<variable_value> variable
%type<varlist_value> variables uninitializedVariables parameters
%type<declare_value> VariableDeclare 
%type<type_value> typeDeclare attributeDeclare
%type<event_value> event
%type<eventlist_value> program Statements
%start program

%%


program : event program {
    $$ = $2;
    $$->insert($1);
}
| event{Globe = $$ = new EventList($1);}
;

event : typeDeclare SEMI{$$ = $1;}
| VariableDeclare {$$ = $1;}
| functionDeclare {$$ = $1;}
;

typeDeclare : STRUCT ID LC attributeDeclare RC{
    $$ = $4;
    $$->getName(*$2);
}
| STRUCT ID {$$ = new Type(*$2);}
| STRUCT LC attributeDeclare RC {$$ = $3;}
;

attributeDeclare : TYPE uninitializedVariables SEMI attributeDeclare{
    $$ = $4;
    $$->insert(new Declaration(*$1,*$2));
}
|TYPE uninitializedVariables SEMI {$$ = new Type(new Declaration(*$1,*$2));}
;

VariableDeclare : TYPE variables SEMI{$$ = new Declaration(*$1,*$2);}
|   typeDeclare uninitializedVariables SEMI{$$ = new Declaration($1,*$2);}
;

uninitializedVariables : ID COMMA uninitializedVariables{
    $$ = $3;
    $$->insert(new Variable(*$1));
}
| ID  {$$ = new VariableList(new Variable(*$1));}
;

variables : variable COMMA variables {
    $$ = $3;
    $$->insert($1);
}
| variable {$$ = new VariableList($1);};

variable : ID {$$ = new Variable(*$1);}
| array {$$ = $1;}
| ID ASSIGN expression {$$ = new InitVariable(*$1,$3,ASSIGN_OP);}
| array ASSIGN LC arguments RC {$$ = new InitArrayVariable(*$1,*$4,ASSIGN_OP);}
;

array : ID arrs{$$ = new ArrayVariable(*$1,*$2);}

functionDeclare: TYPE ID LP parameters RP blockStatement{
    $$ = new Function(*$1,*$2,*$4,$6);
}
| TYPE ID LP RP blockStatement {
	$$ = new Function(*$1,*$2,$5);
}
;

parameters : TYPE ID COMMA parameters {
    $$ = $4;
    $$->insert(new Variable(*$1,*$2));
}
| TYPE ID {$$ = new VariableList(new Variable(*$1,*$2));}
;


Statements : Statement Statements {
    $$ = $2;
    $$->insert($1);
}
| Statement {$$ = new EventList($1);}
;

Statement :  loopStatement {$$ = $1;}
| VariableDeclare {$$ = $1;}
| blockStatement {$$ = $1;}
| branchStatement {$$ = $1;}
| jumpStatement {$$ = $1;}
| expression SEMI{$$ = $1;}
;


blockStatement : LC Statements RC {$$ = new BlockStatement(*$2);}
| LC RC {$$ = new BlockStatement();};

jumpStatement : CONT SEMI {$$ = new JumpStatement(CONT_OP);}
| BREAK SEMI {$$ = new JumpStatement(BREAK_OP);}
| RETURN expression SEMI {$$ = new JumpStatement($2);}
;

branchStatement : IF LP expression RP Statement ELSE Statement {$$ = new BranchStatement($3,$5,$7);}
| IF LP expression RP Statement {$$ = new BranchStatement($3,$5);}
;

loopStatement : FOR LP expressionX SEMI expressionX SEMI expressionX RP Statement{
        $$ = new LoopStatement($3,$5,$7,$9);
}
;

expressionX: expression {$$ = $1;}
| emptyexpression {$$ = $1;}


expression : INT {$$ = new Literal($1);}
| ID {$$ = new Variable(*$1);}
| LP expression RP {$$ = $2;}
| ID DOT ID {$$ = new Attribute(*$1,*$3);}
| ID arrs {$$ = new ArrayVariable(*$1,*$2);}
| buildInFunction LP arguments RP {$$ = new FunctionCall(*$1,*$3);}
| ID LP arguments RP {$$ = new FunctionCall(*$1,*$3);}
| ID LP RP {$$ = new FunctionCall(*$1);}
| SUB expression {$$ = new UnaryExpression($2,NEG_OP);}
| NOT expression {$$ = new UnaryExpression($2,NOT_OP);}
| BNOT expression {$$ = new UnaryExpression($2,BIT_NOT_OP);}
| INC expression {$$ = new UnaryExpression($2,INC_OP);}
| DEC expression {$$ = new UnaryExpression($2,DEC_OP);}
| expression MUL expression {$$ = new BinaryExpression($1,$3,MUL_OP);}
| expression DIV expression {$$ = new BinaryExpression($1,$3,DIV_OP);}
| expression MOD expression {$$ = new BinaryExpression($1,$3,MOD_OP);}
| expression ADD expression {$$ = new BinaryExpression($1,$3,ADD_OP);}
| expression SUB expression {$$ = new BinaryExpression($1,$3,SUB_OP);}
| expression SHL expression {$$ = new BinaryExpression($1,$3,SHL_OP);}
| expression SHR expression {$$ = new BinaryExpression($1,$3,SHR_OP);}
| expression SGT expression {$$ = new BinaryExpression($1,$3,SGT_OP);}
| expression SGE expression {$$ = new BinaryExpression($1,$3,SGE_OP);}
| expression SLT expression {$$ = new BinaryExpression($1,$3,SLT_OP);}
| expression SLE expression {$$ = new BinaryExpression($1,$3,SLE_OP);}
| expression SEQ expression {$$ = new BinaryExpression($1,$3,SEQ_OP);}
| expression SNE expression {$$ = new BinaryExpression($1,$3,SNE_OP);}
| expression BAND expression {$$ = new BinaryExpression($1,$3,BIT_AND_OP);}
| expression BXOR expression {$$ = new BinaryExpression($1,$3,BIT_XOR_OP);}
| expression BOR expression {$$ = new BinaryExpression($1,$3,BIT_OR_OP);}
| expression AND expression {$$ = new BinaryExpression($1,$3,AND_OP);}
| expression OR expression {$$ = new BinaryExpression($1,$3,OR_OP);}
| expression ASSIGN expression {$$ = new BinaryExpression($1,$3,ASSIGN_OP);}
| expression PLUSASSIGN expression {$$ = new BinaryExpression($1,$3,PLUS_ASSIGN_OP);}
| expression MINUSASSIGN expression {$$ = new BinaryExpression($1,$3,MINUS_ASSIGN_OP);}
| expression MULTIPLYASSIGN expression {$$ = new BinaryExpression($1,$3,MULTIPLY_ASSIGN_OP);}
| expression DIVIDEASSIGN expression {$$ = new BinaryExpression($1,$3,DIVIDE_ASSIGN_OP);}
| expression ANDASSIGN expression {$$ = new BinaryExpression($1,$3,AND_ASSIGN_OP);}
| expression XORASSIGN expression {$$ = new BinaryExpression($1,$3,XOR_ASSIGN_OP);}
| expression ORASSIGN expression {$$ = new BinaryExpression($1,$3,OR_ASSIGN_OP);}
| expression LSHIFTASSIGN expression {$$ = new BinaryExpression($1,$3,SHL_ASSIGN_OP);}
| expression RSHIFTASSIGN expression {$$ = new BinaryExpression($1,$3,SHR_ASSIGN_OP);}
;

emptyexpression : {$$ = new Literal(1);}

arrs : LB expression RB arrs {
    $$ = $4;
    $$->insert($2);
}
    | LB expression RB  {$$ = new ExpressionList($2);}
;

arguments : expression COMMA arguments{
    $$ = $3;
    $$->insert($1);
}
| expression {$$ = new ExpressionList($1);}
;

buildInFunction : READ {$$ = $1;}
	| WRITE {$$ = $1;}
;


%%
int yyerror(char const *str)  
{  
    extern char *yytext;  
    extern int yylineno;
	cout << "Error." << endl;
    fprintf(stderr,"parser error near %s on line %d\n",yytext,yylineno);  
    return 0;  
}  
