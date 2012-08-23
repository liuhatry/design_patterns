#ifndef FORWARDS
#define FORWARDS
#include "player.hh"
#include <iostream>
using namespace std;
class forwards:public player{
	public:
		forwards(string name);
		virtual void attack();
		virtual void defense();
		virtual ~forwards();
};
#endif
