#ifndef SMALLCCOMPILER_SYMBOLTABLE_H
#define SMALLCCOMPILER_SYMBOLTABLE_H

#include <cstdio>
#include <string>
#include <list>
#include <iostream>
#include "semanticAnalyzer.h"
#include "Generator.h"
#include "ConstHeader.h"

using namespace std;

class Node{
protected:
public:
    int classType;
    virtual void print(){
        cout << "Type: " << classType << endl;
    }
};

class Statement : public Node{
public:
	virtual bool check() = 0;
    virtual void generate() = 0;
};

class Expression: public Statement{
public:
    shared_ptr<TypeSymbol> type;
    bool left;
    int virtualRegister;
    virtual bool check() = 0;
    virtual void generate() = 0;
};

class EventList : public Node{
public:
    EventList();
    list<shared_ptr<Statement>> data;
    EventList(Statement* now); //use by parser
    void insert(Statement* now); //use by parser
	bool check();
    void generate();
};

class ExpressionList : public Node {
public:
    list<shared_ptr<Expression>> data;
    ExpressionList(Expression* now); //use by parser
    ExpressionList();
    void insert(Expression* now); //use by parser
};

class Variable : public Expression {
public:
	string name;
	string type_name;
    bool forDeclare = false;
    void declareClaim();
    shared_ptr<VariableSymbol> variableSymbol;
    Variable(){}
    Variable(string name); //use by parser
	Variable(string type_name,string name); //use by parser
    virtual bool check();
    virtual void generate();
};

class ArrayVariable: public Variable{
public:
    ExpressionList position;
    ArrayVariable():Variable(){}
    ArrayVariable(string name,ExpressionList& position); //use by parser
    virtual bool check();
    virtual void generate();
};

class InitVariable: public Variable{
	int command;
    shared_ptr<Expression> initializer;
public:
	InitVariable(string name,Expression* initializer,int command); //use by parser
    bool check();
    void generate();
};


class InitArrayVariable : public ArrayVariable{
	int command;
    ExpressionList initializer;
public:
    InitArrayVariable(ArrayVariable& preview,ExpressionList& initializer,int command); //use by parser
    bool check();
    void generate();
};

class VariableList : public Node{
public:
    list<shared_ptr<Variable>> data;
    VariableList();
    VariableList(Variable* now);
    void insert(Variable* now);
};

class Declaration;

class Type : public Statement{
    string name;
    bool declare;
    list<shared_ptr<Declaration>> declarationList;
public:
    shared_ptr<TypeSymbol> typeSymbol;
    Type(){}
	Type(string name); //use by parser
    Type(Declaration* newDeclaration); //use by parser
    void getName(string name); //use by parser
    void insert(Declaration* newDeclaration); //use by parser
    bool check();
    void generate();
};

class Declaration : public Statement{
    shared_ptr<Type> type;
	string type_name;
public:
    VariableList variableList;
    Declaration(){}
    Declaration(Type* type,VariableList& variableList); //use by parser
	Declaration(string type_name,VariableList& variableList); //use by parser
    bool check();
    void generate();
};

class Literal : public Expression{
    int data;
public:
    Literal(int data);
	void print();
    bool check();
    void generate();
};

class Attribute : public Expression{
    string name;
    string attribute;
public:
	shared_ptr<VariableSymbol> variableSymbol;
    Attribute();
    Attribute(string name,string attribute); //use by parser
    bool check();
    void generate();
};

class FunctionCall : public Expression{
    string name;
    ExpressionList parameters;
    FunctionCall();

public:
    shared_ptr<FunctionSymbol> functionSymbol;
    FunctionCall(string name,ExpressionList& parameters); //use by parser
    FunctionCall(string name);
    bool check();
    void generate();
};

class UnaryExpression : public Expression{
    int command;
    shared_ptr<Expression> child;
    UnaryExpression();

public:
    UnaryExpression(Expression* child,int command); //use by parser
    bool check();
    void generate();
};

class BinaryExpression : public Expression{
    int command;
    shared_ptr<Expression> Left, Right;
    BinaryExpression();

public:
    BinaryExpression(Expression* Left,Expression* Right,int command); //use by parser
    bool check();
    void generate();
};

class BlockStatement : public Statement{
public:
	EventList events;
    BlockStatement();
    BlockStatement(EventList& events);
    bool check();
    void generate();
};

class BranchStatement : public Statement{
    shared_ptr<Expression> condition;
    shared_ptr<Statement> AcceptStatement;
    shared_ptr<Statement> DenyStatement;
    bool hasDenyStatement;
public:
    shared_ptr<Scope> leftScope,rightScope;
    BranchStatement();
    BranchStatement(Expression* condition, Statement* AcceptStatement); //use by parser
    BranchStatement(Expression* condition, Statement* AcceptStatement, Statement* DenyStatement); //use by parser
    bool check();
    void generate();
};

class JumpStatement : public Statement{
    int command;
    shared_ptr<Expression> returnValue;
public:
    JumpStatement();
    JumpStatement(Expression* returnValue); //use by parser
    JumpStatement(int command); //use by parser
    bool check();
    void generate();
};

class LoopStatement : public Statement{
    shared_ptr<Expression> initializer,condition,iteration;
    shared_ptr<Statement> loopBody;
public:
    shared_ptr<Scope> loopScope;
    LoopStatement();
    LoopStatement(Expression *initializer,Expression *condition,Expression *iteration,Statement *loopBody); //use by parser
    bool check();
    void generate();
};


class Function : public Statement{
    Type type;
    string name;
    string type_name;
    VariableList parameters;
    shared_ptr<Scope> bodyScope;
    shared_ptr<BlockStatement> functionBody;

public:
    shared_ptr<FunctionSymbol> functionSymbol;
    Function(){}
    Function(string type_name,string name,VariableList& parameterList,BlockStatement* functionBody); //use by parser
    Function(string type_name,string name,BlockStatement* functionBody); //use by parser
    bool check();
    void generate();
};

#endif //SMALLCCOMPILER_SYMBOLTABLE_H
