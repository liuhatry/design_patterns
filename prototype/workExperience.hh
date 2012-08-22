#ifndef WORKEXPERIENCE
#define WORKEXPERIENCE
#include "prototype.hh"
class workExperience:public prototype{
	public:
		workExperience(int workDate_,int workYear);
		virtual prototype * clone();
	private:
		int workDate;
		int workYear;
};
#endif
