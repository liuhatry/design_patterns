#ifndef PURSUIT_HH
#define PURSUIT_HH
#include <iostream>
#include <string>
using namespace std;
#include "IGiveGift.hh"
#include "SchoolGirl.hh"
class Pursuit:public IGiveGift{
	public:
		Pursuit(string name,SchoolGirl *sg);
		virtual void GiveDolls();
	private:
		SchoolGirl * schoolGirl_;
		string name_;
};
#endif
