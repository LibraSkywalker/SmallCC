%{
	#include <iostream>
	#include <cstdio>
	#include <cstring>
	#include "parser.hpp"
%}

%option noyywrap

OCT 0[1-7]([0-7])*
HEX 0[xX][1-9A-F]([0-9A-F])*
DEC [1-9]([0-9])*
ID [a-zA-Z_]([0-9a-zA-Z_])*

%%
[ \t\v\f\n]* {}
{OCT} {
	int value ;
	sscanf(yytext,"%o",&value);
	yylval.int_value = value;
	return INT;
}
{HEX} {
	int value;
	sscanf(yytext,"%x",&value);
	yylval.int_value = value;
	return INT;
}
{DEC} {
	int value;
	sscanf(yytext,"%d",&value);
	yylval.int_value = value;
	return INT;
}

"int" {
	yylval.string_value = new std::string(yytext);
	return TYPE;
}
";" {return SEMI;}
"," {return COMMA;}
"(" {return LP;}
")" {return RP;}
"[" {return LB;}
"]" {return RB;}
"{" {return LC;}
"}" {return RC;}
"." {return DOT;}
"-" {return SUB;}
"!" {return NOT;}
"~" {return BNOT;}
"++" {return INC;}
"--" {return DEC;}
"*" {return MUL;}
"/" {return DIV;}
"%" {return MOD;}
"+" {return ADD;}
"<<" {return SHL;}
">>" {return SHR;}
">" {return SGT;}
">=" {return SGE;}
"<" {return SLT;}
"<=" {return SEQ;}
"!=" {return SNE;}
"&" {return BAND;}
"^" {return BXOR;}
"|" {return BOR;}
"&&" {return AND;}
"||" {return OR;}
"=" {return ASSIGN;}
"+=" {return PLUSASSIGN;}
"-=" {return MINUSASSIGN;}
"*=" {return MULTIPLYASSIGN;}
"/=" {return DIVIDEASSIGN;}
"struct" {printf("struct");return STRUCT;}
"return" {return RETURN;}
"if" {return IF;}
"else" {return ELSE;}
"break" {return BREAK;}
"continue" {return CONT;}
"for" {return FOR;}
"read" {return READ;}
"write" {return WRITE;}

{ID} {
	yylval.string_value = new std::string(yytext);
	return ID;
}

. {  
    std::cout << "lexical error" << std::endl;  
    exit(1);  
}  

%%
