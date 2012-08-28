#include "Country.hh"
#include "USA.hh"
#include "Iraq.hh"
#include "UnitedNations.hh"
#include "UNSC.hh"

int main(){
	UnitedNations *u = new UNSC();
	Country *c1= new USA(u);
	Country *c2= new Iraq(u);
	u->SetColleague1(c1);
	u->SetColleague2(c2);
	c1->Declare("No weapons!");
	c2->Declare("Fuck you!!!");
	return 0;
}
