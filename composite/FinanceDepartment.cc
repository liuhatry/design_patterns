#include "FinanceDepartment.hh"
FinanceDepartment::FinanceDepartment(string name):Company(name){
}
void FinanceDepartment::display(int depth){
	string *s = new string(depth,'-');
	cout<<*s<<name_<<endl;
	delete s;
}
void FinanceDepartment::lineOfDuty(){
	cout<<name_<<" Finance!"<<endl;
}
void FinanceDepartment::add(Company *){
}
void FinanceDepartment::remove(Company *){
}
