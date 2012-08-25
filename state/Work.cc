#include "Work.hh"
void Work::SetState(State *s){
	state_=s;
}
void Work::SetHour(double h){
	hour_=h;
}
void Work::SetFinished(bool f){
	finished_=f;
}
double Work::GetHour(){
	return hour_;
}
bool Work::GetFinished(){
	return finished_;
}
void Work::WriteProgram(){
	state_->WriteProgram(this);
}
