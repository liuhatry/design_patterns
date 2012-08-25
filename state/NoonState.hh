#ifndef NOONSTATE_HH
#define NOONSTATE_HH
#include "State.hh"
#include "Work.hh"
#include <iostream>
using namespace std;
class NoonState:public State{
	public:
		virtual void WriteProgram(Work *);
};
#endif
