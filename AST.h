#ifndef SMALLCCOMPILER_SYMBOLTABLE_H
#define SMALLCCOMPILER_SYMBOLTABLE_H

#include <cstdio>
#include <string>
#include <list>
#include <iostream>
#include "semanticAnalyzer.h"
using namespace std;

class Node{
protected:
    int classType;
public:
    virtual void print(){
        cout << "Type: " << classType << endl;
    }
};

class Statement : public Node{
public:
	virtual bool check(){}
};

class Expression: public Statement{
public:
    TypeSymbol* type;
    bool left;
    virtual bool check(){}
};

class EventList : public Node{
public:
    EventList();
    list<Statement*> data;
    EventList(Statement& now);
    void insert(Statement& now);
	bool check();
};

class ExpressionList : public Node {
public:
    list<Expression*> data;
    ExpressionList(Expression& now);
    ExpressionList();
    void insert(Expression& now);
};

class Variable : public Expression {
public:	
	string name;
	string type_name;
    VariableSymbol* variableSymbol;
    Variable(){}
    Variable(string name);
	Variable(string type_name,string name);
    virtual bool check();
};

class ArrayVariable: public Variable{
public:
    ExpressionList position;
    ArrayVariable():Variable(){}
    ArrayVariable(string name,ExpressionList& position);
    virtual bool check();
};

class InitVariable: public Variable{
	int command;
    Expression* initializer;
public:
	InitVariable(string name,Expression& initializer,int command);
    bool check();
};


class InitArrayVariable : public ArrayVariable{
	int command;
    ExpressionList initializer;
public:
    InitArrayVariable(ArrayVariable& preview,ExpressionList& initializer,int command);
    bool check();
};

class VariableList : public Node{
public:
    list<Variable*> data;
    VariableList(){}
    VariableList(Variable now);
    void insert(Variable now);
};

class Declaration;

class Type : public Statement{
    string name;
    bool declare;
    list<Declaration*> declarationList;
public:
    TypeSymbol *typeSymbol;
    Type(){}
	Type(string name);
    Type(Declaration newDeclaration);
    void getName(string name);
    void insert(Declaration newDeclaration);
    bool check();
};

class Declaration : public Statement{
    Type type;
	string type_name;
public:
    VariableList variableList;
    Declaration(){}
    Declaration(Type& type,VariableList& variableList);
	Declaration(string type_name,VariableList& variableList);
    bool check();
};

class Literal : public Expression{
    int data;
public:
    Literal(int data);
	void print();
    bool check();
};

class Attribute : public Expression{
    string name;
    string attribute;
public:
    Attribute();
    Attribute(string name,string attribute);
    bool check();
};

class FunctionCall : public Expression{
    string name;
    ExpressionList parameters;
    FunctionCall();

public:
    FunctionCall(string name,ExpressionList& parameters);
    bool check();
};

class UnaryExpression : public Expression{
    int command;
    Expression* child;
    UnaryExpression();

public:
    UnaryExpression(Expression& child,int command);
    bool check();
};

class BinaryExpression : public Expression{
    int command;
    Expression *Left, *Right;
    BinaryExpression();

public:
    BinaryExpression(Expression& Left,Expression& Right,int command);
    bool check();
};

class BlockStatement : public Statement{
public:
	EventList events;
    BlockStatement();
    BlockStatement(EventList& events);
    bool check();
};

class BranchStatement : public Statement{
    Expression *condition;
    Statement *AcceptStatement;
    Statement *DenyStatement;
    bool hasDenyStatement;
public:
    Scope *leftScope,*rightScope;
    BranchStatement();
    BranchStatement(Expression& condition, Statement& AcceptStatement);
    BranchStatement(Expression& condition, Statement& AcceptStatement, Statement& DenyStatement);
    bool check();
};

class JumpStatement : public Statement{
    int command;
    Expression* returnValue;
public:
    JumpStatement();
    JumpStatement(Expression& returnValue);
    JumpStatement(int command);
    bool check();
};

class LoopStatement : public Statement{
    Expression *initializer,*condition,*iteration;
    Statement *loopBody;
public:
    Scope *loopScope;
    LoopStatement();
    LoopStatement(Expression &initializer,Expression &condition,Expression &iteration,Statement &loopBody);
    bool check();
};


class Function : public Statement{
    Type type;
    string name;
    string type_name;
    VariableList parameters;
    BlockStatement functionBody;

public:
    FunctionSymbol* functionSymbol;
    Function(){}
    Function(string type_name,string name,VariableList& parameterList,BlockStatement& functionBody);
    Function(string type_name,string name,BlockStatement& functionBody);
    bool check();
};

#endif //SMALLCCOMPILER_SYMBOLTABLE_H
