#ifndef SCALE
#define SCALE
#include "Expression.hh"
#include <string>
#include <iostream>
using namespace std;
class Scale:public Expression{
	public:
		virtual void Execute(string, string);
};
#endif
