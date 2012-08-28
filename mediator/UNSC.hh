#ifndef UNSC_HH
#define UNSC_HH
#include "UnitedNations.hh"
#include <string>
#include <iostream>
#include "Country.hh"
#include "USA.hh"
#include "Iraq.hh"
class UNSC:public UnitedNations{
	public:
		UNSC();
		UNSC(Country*,Country*);
		virtual void Declare(string,Country*);
		virtual void SetColleague1(Country *);
		virtual void SetColleague2(Country *);
	private:
		Country * colleague1_;
		Country * colleague2_;
};
#endif
