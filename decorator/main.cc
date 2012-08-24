#include "Person.hh"
#include "Finery.hh"
#include "TShirts.hh"
#include "Sneakers.hh"
int main(){
	Person *person = new Person("Hatry");
	TShirts *ts= new TShirts();
	Sneakers *sn= new Sneakers();

	
	ts->Decorate(person);
	sn->Decorate(ts);
	sn->Show();
	return 0;
}
