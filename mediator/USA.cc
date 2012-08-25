#include "USA.hh"
USA::USA(UnitedNations *u):Country(u){
}
void USA::Declare(string message){
	mediator_->Declare(message,this);
}
void USA::GetMessage(string message){
	cout<<message<<endl;
}
