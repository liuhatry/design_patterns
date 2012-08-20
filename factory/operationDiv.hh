#ifndef OPERATION_DIV
#define OPERATION_DIV
#include "operation.hh"
class operationDiv:public operation{
	public:
		operationDiv();
		virtual double getResult();
		virtual ~operationDiv();
};
#endif
