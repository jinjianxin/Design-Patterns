#include <iostream>

#include "operation.h"

using namespace std;

int main(int argc,char *argv[])
{
    Factory *factory = new Factory();

    Operator *oper = factory->createFactory("+");

    oper->numberA = 12 ;
    oper->numberB = 2;

    cout<<oper->numberA<<"+"<<oper->numberB<<"="<<oper->getResult()<<endl;

    oper = factory->createFactory("-");

    oper->numberA = 12 ;
    oper->numberB = 2;
    cout<<oper->numberA<<"-"<<oper->numberB<<"="<<oper->getResult()<<endl;

    oper = factory->createFactory("*");

    oper->numberA = 12 ;
    oper->numberB = 2;
    cout<<oper->numberA<<"*"<<oper->numberB<<"="<<oper->getResult()<<endl;

    oper = factory->createFactory("/");

    oper->numberA = 24 ;
    oper->numberB = 2;
    cout<<oper->numberA<<"/"<<oper->numberB<<"="<<oper->getResult()<<endl;


}
