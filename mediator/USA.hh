#ifndef USA_HH
#define USA_HH
#include "Country.hh"
#include "UnitedNations.hh"
class USA:public Country{
	public:
		USA(UnitedNations *);
		virtual void Declare(string);
		void GetMessage(string);
};
#endif
