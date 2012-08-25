#ifndef COMMONMANAGER_HH
#define COMMONMANAGER_HH
#include "Manager.hh"
#include <iostream>
#include <string>
using namespace std;
class CommonManager:public Manager{
	public:
		CommonManager(string name);
		virtual void RequestApplications(Request *);
};
#endif
