#ifndef PERSON_HH
#define PERSON_HH
#include <string>
#include <iostream>
using namespace std;
class Person{
	public:
		Person(string name);
		Person();
		virtual void Show();
	private:
		string name_;
};
#endif
