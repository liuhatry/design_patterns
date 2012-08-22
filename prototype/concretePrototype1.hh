#ifndef CONCRETEPROTOTYPE1
#define CONCRETEPROTOTUPE1
#include "prototype.hh"
#include <string>
#include "workExperience.hh"
using namespace std;
class concretePrototype1:public prototype{
	public:
		concretePrototype1(string name_="");
		concretePrototype1(concretePrototype1 &);
		virtual prototype * clone();
		void setWorkExperience(workExperience *);

	private:
		workExperience * we;
		string name;
};
#endif
