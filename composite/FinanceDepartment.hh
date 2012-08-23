#ifndef FINANCEDEPARTMENT
#define FINANCEDEPARTMENT
#include <iostream>
#include <string>
using namespace std;
#include "Company.hh"
class FinanceDepartment:public Company{
	public:
		FinanceDepartment(string name);
		virtual void add(Company *);
		virtual void remove(Company *);
		virtual void display(int depth);
		virtual void lineOfDuty();
		virtual ~FinanceDepartment(){}
};
#endif
