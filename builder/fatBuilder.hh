#ifndef FATBUILDER
#define FATBUILDER
#include "builder.hh"
#include "iostream"
using namespace std;
class fatBuilder:public builder{
	public:
		fatBuilder();
		virtual ~fatBuilder();
		virtual void buildPart1();
		virtual void buildPart2();

};
#endif
