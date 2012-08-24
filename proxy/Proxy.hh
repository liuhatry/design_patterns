#ifndef PROXY_HH
#define PROXY_HH
#include "IGiveGift.hh"
#include "Pursuit.hh"
#include "SchoolGirl.hh"
#include <string>
using namespace std;
class Proxy:public IGiveGift{
	public:
		virtual void GiveDolls();
		Proxy(string ,SchoolGirl *);
		~Proxy();
	private:
		 Pursuit * pursuit_;
};
#endif
