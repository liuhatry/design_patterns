#include "Person.hh"
#include "Action.hh"
#include "Man.hh"
#include "Woman.hh"
#include "ObjectStructure.hh"
#include "Success.hh"

int main(){
	
	Person *m= new Man;
	Person *w= new Woman;
	Action *a= new Success;
	ObjectStructure *o= new ObjectStructure(m,w);

	o->Display(a);
	return 0;
}
