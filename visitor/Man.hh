#ifndef MAN_HH
#define MAN_HH
#include "Person.hh"
#include "Action.hh"
#include <string>
#include <iostream>
using namespace std;

class Man:public Person{
	public:
		virtual void Accept(Action *);
		virtual string GetName();
};
#endif
