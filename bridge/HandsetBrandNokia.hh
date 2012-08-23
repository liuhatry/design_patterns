#ifndef HANDSETBRANDNOLIA
#define HANDSETBRANDNOLIA
#include "HandsetBrand.hh"
class HandsetBrandNokia:public HandsetBrand{
	public:
		HandsetBrandNokia(HandsetSoft *soft_);
		virtual void run();
		virtual void setSoft(HandsetSoft *soft_);
};
#endif
