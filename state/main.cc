#include "Work.hh"
#include "State.hh"
#include "ForenoonState.hh"
#include "NoonState.hh"

int main(){
	Work *w = new Work();
	State *s1 = new ForenoonState();
	w->SetState(s1);
	w->SetHour(10);
	w->WriteProgram();
	w->SetHour(12.5);
	w->WriteProgram();
	w->SetHour(15.5);
	w->WriteProgram();
	return 0;
}
