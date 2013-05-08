#ifndef _OPERATOR_H
#define _OPERATOR_H

#include <iostream>
#include <string>

class Operator 
{
	public:
		int numberA;
		int numberB;
		virtual int getResult() = 0;
};

class OperatorAdd : public Operator
{
	public:
	int getResult();
};

class OperatorSub : public Operator
{
	public:
		int getResult();
};

class OperatorMul : public Operator
{
	public:
		int getResult();
};

class OperatorDiv : public Operator
{
	public:
		int getResult();
};

class Factory 
{
	public:
		Operator * createFactory(const char *ope = "+");
		Operator *oper;
};

#endif

