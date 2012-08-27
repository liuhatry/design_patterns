#include "Woman.hh"
void Woman::Accept(Action *a){
	a->GetWomanConclusion(this);
}
string Woman::GetName(){
	return "Woman ";
}
