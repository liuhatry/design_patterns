#ifndef COMPANY
#define COMPANY
#include <string>
using namespace std;
class Company{
	public:
		Company(string name);
		virtual void add(Company *c)=0;
		virtual void remove(Company *c)=0;
		virtual void display(int depth) = 0;
		virtual void lineOfDuty() = 0;
		virtual ~Company();
	protected:
		string name_;
};
#endif
