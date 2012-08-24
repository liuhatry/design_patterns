#include "ConcreteWebSite.hh"
ConcreteWebSite::ConcreteWebSite(string name){
	name_ = name;
}
void ConcreteWebSite::Use(User *u){
	cout<<name_<<" "<<u->GetName()<<endl;
}
