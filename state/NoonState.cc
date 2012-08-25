#include "NoonState.hh"
void NoonState::WriteProgram(Work *w){
	if(w->GetHour()<13)
		cout<<"Time:"<<w->GetHour()<<" Sleep!"<<endl;
	else 
	{
		//w->SetState(new NoonState());
		//w->WriteProgram();
		cout<<"Time:"<<w->GetHour()<<" Go home!"<<endl;
	}
}
