#include "HRDepartment.hh"
HRDepartment::HRDepartment(string name):Company(name){
}
void HRDepartment::display(int depth){
	string *s = new string(depth,'-');
	cout<<*s<<name_<<endl;
	delete s;
}
void HRDepartment::lineOfDuty(){
	cout<<name_<<" Employment!"<<endl;
}
void HRDepartment::add(Company *){
}
void HRDepartment::remove(Company *){
}
