#include "operation.h"

int OperatorAdd::getResult()
{
    return numberA+numberB;
};

int OperatorSub::getResult()
{
    return numberA-numberB;
}

int OperatorMul::getResult()
{
    return numberA*numberB;
}

int OperatorDiv::getResult()
{
    if(numberB == 0)
    {
        return 0;
    }

    return numberA/numberB;
}


Operator *Factory::createFactory(const char* ope)
{
    switch(*ope)
    {
    case '+':
    {
        oper = new OperatorAdd();
    }
    break;
    case '-':
    {
        oper = new OperatorSub();
    }
    break;
    case '*':
    {
        oper = new OperatorMul();
    }
    break;
    case '/':
    {
        oper = new OperatorDiv();
    }
    break;
    }

    return oper;
}

