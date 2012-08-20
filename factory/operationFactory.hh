#ifndef OPERATION_FACTORY
#define OPERATION_FACTORY
#include "operation.hh"
class operationFactory
{
	public:
		static operation* createOperation(char opreate);

};
#endif
