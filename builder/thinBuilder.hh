#ifndef THINBUILDER
#define THINBUILDER
#include "builder.hh"
#include "iostream"
using namespace std;
class thinBuilder:public builder{
	public:
		thinBuilder();
		virtual ~thinBuilder();
		virtual void buildPart1();
		virtual void buildPart2();

};
#endif
