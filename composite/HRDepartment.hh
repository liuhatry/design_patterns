#ifndef HRDEPARTMENT
#define HRDEPARTMENT
#include <iostream>
#include <string>
using namespace std;
#include "Company.hh"
class HRDepartment:public Company{
	public:
		HRDepartment(string name);
		virtual void add(Company *);
		virtual void remove(Company *);
		virtual void display(int depth);
		virtual void lineOfDuty();
		virtual ~HRDepartment(){}
	protected:
};
#endif
