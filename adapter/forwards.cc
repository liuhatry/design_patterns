#include "forwards.hh"
forwards::forwards(string name):player(name){
}
forwards::~forwards(){
}
void forwards::attack(){
	cout<<name_<<" attack()"<<endl;
}
void forwards::defense(){
	cout<<name_<<" defense()"<<endl;
}
