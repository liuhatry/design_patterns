#ifndef NOTE
#define NOTE
#include "Expression.hh"
#include <iostream>
using namespace std;
class Note:public Expression{
	public:
		virtual void Execute(string, string);
};
#endif
