#ifndef OPERATION_MUL
#define OPERATION_MUL
#include "operation.hh"
class operationMul:public operation{
	public:
		operationMul();
		
		virtual double getResult();
		virtual ~operationMul();
};
#endif
