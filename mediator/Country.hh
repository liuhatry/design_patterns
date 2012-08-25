#ifndef COUNTRY
#define COUNTRY
#include <string>
#include <iostream>
#include "UnitedNations.hh"
using namespace std;
class Country{
	public:
		Country(UnitedNations *);
		virtual void Declare(string)=0;
		virtual void GetMessage(string)=0;
	protected:
		UnitedNations *mediator_;
};
#endif
