#ifndef WOMAN_HH
#define WOMAN_HH
#include "Person.hh"
#include "Action.hh"
#include <string>
#include <iostream>
using namespace std;

class Woman:public Person{
	public:
		virtual void Accept(Action *);
		virtual string GetName();
};
#endif
