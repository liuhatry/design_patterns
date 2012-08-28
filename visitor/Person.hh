#ifndef PERSON_HH
#define PERSON_HH
#include <string>
using namespace std;
class Action;
class Person{
	public:
		virtual void Accept(Action *)=0;
		virtual string GetName() = 0;
};
#endif
