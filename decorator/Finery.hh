#ifndef FINERY_HH
#define FINERY_HH
#include "Person.hh"
#include <string>
using namespace std;
class Finery:public Person{
	public:
		virtual void Show();
		void Decorate(Person * component);
	protected:
		Person *component_;
};
#endif
