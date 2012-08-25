#ifndef MAJORDOMO
#define MAJORDOMO
#include "Manager.hh"
#include <iostream>
#include <string>
using namespace std;
class Majordomo:public Manager{
	public:
		Majordomo(string name);
		virtual void RequestApplications(Request *);
};
#endif
