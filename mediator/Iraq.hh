#ifndef IRAQ_HH
#define IRAQ_HH
#include "Country.hh"
#include "UnitedNations.hh"
class Iraq:public Country{
	public:
		Iraq(UnitedNations *);
		virtual void Declare(string);
		void GetMessage(string);
};
#endif
