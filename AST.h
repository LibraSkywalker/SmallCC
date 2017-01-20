#ifndef SMALLCCOMPILER_SYMBOLTABLE_H
#define SMALLCCOMPILER_SYMBOLTABLE_H

#include <cstdio>
#include <string>
#include <list>
using namespace std;

class Node{
protected:
    int classType;
};

class Statement : public Node{

};

class Expression: public Statement{};

class EventList : public Node{
    list<Statement*> data;
public:
    EventList();
    EventList(Statement& now);
    void insert(Statement& now);
};

class ExpressionList : public Node {
    list<Expression*> data;
public:
    ExpressionList(Expression& now);
    ExpressionList();
    void insert(Expression& now);
};

class Variable : public Expression {
public:	
	string name;
	string type_name;
    Variable(){}
    Variable(string name);
	Variable(string type_name,string name);
};

class ArrayVariable: public Variable{
public:
    ExpressionList position;
    ArrayVariable():Variable(){}
    ArrayVariable(string name,ExpressionList& position);
};

class InitVariable: public Variable{
	int command;
    Expression* initializer;
public:
	InitVariable(string name,Expression& initializer,int command);
};


class InitArrayVariable : public ArrayVariable{
	int command;
    ExpressionList initializer;
public:
    InitArrayVariable(ArrayVariable& preview,ExpressionList& initializer,int command);
};

class VariableList : public Node{
    list<Variable*> data;
public:
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
    Type(){}
	Type(string name);
    Type(Declaration newDeclaration);
    void getName(string name);
    void insert(Declaration newDeclaration);
};

class Declaration : public Statement{
    Type type;
	string type_name;
    VariableList variableList;
public:
    Declaration(){}
    Declaration(Type& type,VariableList& variableList);
	Declaration(string type_name,VariableList& variableList);
};

class Literal : public Expression{
    int data;

public:
    Literal(int data);
	void print();
};

class Attribute : public Expression{
    string name;
    string attribute;
public:
    Attribute();
    Attribute(string name,string attribute);
};

class FunctionCall : public Expression{
    string name;
    ExpressionList parameters;
    FunctionCall();
public:
    FunctionCall(string name,ExpressionList& parameters);
};

class UnaryExpression : public Expression{
    int command;
    Expression* child;
    UnaryExpression();

public:
    UnaryExpression(Expression& child,int command);
};

class BinaryExpression : public Expression{
    int command;
    Expression *Left, *Right;
    BinaryExpression();

public:
    BinaryExpression(Expression& Left,Expression& Right,int command);
};

class BlockStatement : public Statement{
    EventList events;
public:
    BlockStatement();
    BlockStatement(EventList& events);
};

class BranchStatement : public Statement{
    Expression *condition;
    Statement *AcceptStatement;
    Statement *DenyStatement;
    bool hasDenyStatement;
public:
    BranchStatement();
    BranchStatement(Expression& condition, Statement& AcceptStatement);
    BranchStatement(Expression& condition, Statement& AcceptStatement, Statement& DenyStatement);
};

class JumpStatement : public Statement{
    int command;
public:
    JumpStatement();
    JumpStatement(int command);
};

class LoopStatement : public Statement{
    Expression *initializer,*condition,*iteration;
    Statement *loopBody;
public:
    LoopStatement();
    LoopStatement(Expression &initializer,Expression &condition,Expression &iteration,Statement &loopBody);
};


class Function : public Statement{
    Type type;
    string name;
    string type_name;
    VariableList parameters;
    BlockStatement functionBody;

public:
    Function(){}
    Function(string type_name,string name,VariableList& parameterList,BlockStatement& functionBody);
    Function(string type_name,string name,BlockStatement& functionBody);
};

#endif //SMALLCCOMPILER_SYMBOLTABLE_H
