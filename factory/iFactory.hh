#ifndef IFACTORY
#define IFACTORY
#include "leifeng.hh"

class iFactory{
	public:
		iFactory();
		~iFactory();
		virtual leifeng* createLeifeng()=0;
};
#endif
