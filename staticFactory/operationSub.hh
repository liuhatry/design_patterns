#ifndef OPERATION_SUB 
#define OPERATION_SUB
#include "operation.hh"
class operationSub:public operation{
	public:
		operationSub();
		virtual double getResult();
		virtual ~operationSub();
};
#endif
