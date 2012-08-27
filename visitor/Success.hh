#ifndef SUCCESS_HH
#define SUCCESS_HH
#include "Action.hh"
#include <string>
#include <iostream>
#include "Man.hh"
#include "Woman.hh"
using namespace std;
class Success:public Action{
	public:
		virtual void GetManConclusion(Man *);
		virtual void GetWomanConclusion(Woman *);
		virtual string GetName();
};
#endif
