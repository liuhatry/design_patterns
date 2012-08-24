#ifndef CONCRETEWEBSITE_HH
#define CONCRETEWEBSITE_HH
#include "User.hh"
#include "WebSite.hh"
#include <iostream>
#include <string>
using namespace std;
class ConcreteWebSite:public WebSite{
	public:
		ConcreteWebSite(string name="");
		virtual void Use(User *u);
	private:
		string name_;


};
#endif
