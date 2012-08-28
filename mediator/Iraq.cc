#include "Iraq.hh"
Iraq::Iraq(UnitedNations *u):Country(u){
}
void Iraq::Declare(string message){
	mediator_->Declare(message,this);
}
void Iraq::GetMessage(string message){
	cout<<message<<endl;
}
