#ifndef CONCRETECOMPANY
#define CONCRETECOMPANY
#include <iostream>
#include <string>
#include "Company.hh"
#include <list>
using namespace std;
class ConcreteCompany:public Company{
	public:
		ConcreteCompany(string name);
		virtual void add(Company *);
		virtual void remove(Company *);
		virtual void display(int depth);
		virtual void lineOfDuty();
		virtual ~ConcreteCompany();
	private:
		typedef list<Company *> ChildrenList;
		ChildrenList childrenList_;
};
#endif
