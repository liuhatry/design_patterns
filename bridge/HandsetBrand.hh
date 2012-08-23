#ifndef HANDSETBRAND
#define HANDSETBRAND
#include "HandsetSoft.hh"
class HandsetBrand{
	public:
		virtual void run() = 0;
		virtual void setSoft(HandsetSoft *) = 0;
	protected:
		HandsetSoft *soft;

};
#endif
