#include "Person.hh"
Person::Person(){
}
Person::Person(string name){
	name_= name;
}
void Person::Show(){
	cout<<name_<<endl;
}
