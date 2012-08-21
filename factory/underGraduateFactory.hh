#ifndef UNDERGRADUATEFACTORY
#define UNDERGRADUATEFACTORY
#include "iFactory.hh"
#include "leifeng.hh"
#include "underGraduate.hh"
class underGraduateFactory:public iFactory{
	public:
	underGraduateFactory();
	virtual ~underGraduateFactory();
	virtual leifeng *createLeifeng();
};
#endif
