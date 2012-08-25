#include "ForenoonState.hh"
void ForenoonState::WriteProgram(Work *w){
	if(w->GetHour()<12)
		cout<<"Time:"<<w->GetHour()<<" Work and Work!"<<endl;
	else 
	{
		w->SetState(new NoonState());
		w->WriteProgram();
	}
}
