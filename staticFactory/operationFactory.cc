#include "operationFactory.hh"
#include "operationAdd.hh"
#include "operationSub.hh"
#include "operationMul.hh"
#include "operationDiv.hh"
operation * operationFactory::createOperation(char operate){
	operation *oper;
	switch(operate)
	{
	case '+':
		oper = new operationAdd();
		break;
	case '-':
		oper = new operationSub();
		break;
	case '*':
		oper = new operationMul();
		break;
	case '/':
		oper = new operationDiv();
		break;
	}
	return oper;
}
