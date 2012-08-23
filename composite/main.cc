#include "Company.hh"
#include "ConcreteCompany.hh"
#include "FinanceDepartment.hh"
#include "HRDepartment.hh"

int main(){
	Company *root = new ConcreteCompany("BeijingRoot");
	Company *BeijingHR = new HRDepartment("BeijingHR");
	Company *BeijingFinance = new FinanceDepartment("BeijingFinance");
	root->add(BeijingHR);
	root->add(BeijingFinance);

	Company *Jinan = new ConcreteCompany("Jinan");
	Company *JinanHR = new HRDepartment("JinanHR");
	Company *JinanFinance = new FinanceDepartment("JinanFinance");
	Jinan->add(JinanHR);
	Jinan->add(JinanFinance);

	root->add(Jinan);

	Jinan->remove(JinanHR);
	root->display(1);
	root->lineOfDuty();
	
	delete root;
	return 0;
}
