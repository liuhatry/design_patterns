#ifndef VOLUNTEERFACTORY
#define VOLUNTEERFACTORY
#include "leifeng.hh"
#include "iFactory.hh"
#include "volunteer.hh"
class volunteerFactory:public iFactory{
	public:
		volunteerFactory();
		virtual ~volunteerFactory();
		virtual leifeng* createLeifeng();

};
#endif
