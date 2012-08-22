#include "concretePrototype1.hh"
concretePrototype1::concretePrototype1(string name_){
	name = name_;
}
concretePrototype1::concretePrototype1(concretePrototype1 & cp){
	name= cp.name;
	we = (workExperience*)(cp.we->clone());
}
void concretePrototype1::setWorkExperience(workExperience * we_){
	we= we_;
}
prototype * concretePrototype1::clone(){
	return new concretePrototype1(*this);
}
