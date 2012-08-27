#include "ObjectStructure.hh"
ObjectStructure::ObjectStructure(Person *m,Person *w){
	man_ = m;
	woman_ = w;
}
void ObjectStructure:: Display(Action *a){
	man_->Accept(a);
	woman_->Accept(a);
}
