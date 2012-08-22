#include "prototype.hh"
#include "concretePrototype1.hh"
#include "workExperience.hh"

int main(){
	concretePrototype1 *cp1 = new concretePrototype1("liu");
	workExperience *we1 = new workExperience(2005,23);
	cp1->setWorkExperience(we1);
	concretePrototype1 *cp2 = (concretePrototype1*)cp1->clone();
	delete cp1;
	delete cp2;
	delete we1;

	return 0;
}

