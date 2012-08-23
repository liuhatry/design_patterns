#ifndef HANDSETGAME
#define HANDSETGAME
#include <iostream>
#include "HandsetSoft.hh"
using namespace std;
class HandsetGame:public HandsetSoft{
	public:
		virtual void run();
};
#endif
