#include "User.hh"
User::User(string name){
	name_= name;
}
string User::GetName(){
	return name_;
}
