#include "Man.hh"
void Man::Accept(Action *a){
	a->GetManConclusion(this);
}
string Man::GetName(){
	return "Man ";
}
