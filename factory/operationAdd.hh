#ifndef OPERATION_ADD
#define OPERATION_ADD
#include "operation.hh"
class operationAdd:public operation{
	public:
		operationAdd();
		virtual double getResult();
		virtual ~operationAdd();
};
#endif
