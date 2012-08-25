#ifndef FORENOONSTATE_HH
#define FORENOONSTATE_HH
#include "State.hh"
#include "NoonState.hh"
#include "Work.hh"
#include <iostream>
using namespace std;
class ForenoonState:public State{
	public:
		virtual void WriteProgram(Work *);
};
#endif
