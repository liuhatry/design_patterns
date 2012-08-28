#include "Success.hh"
void Success::GetManConclusion(Man *m){
	cout<<m->GetName()<<this->GetName()<<endl;
}
void Success::GetWomanConclusion(Woman *w){
	cout<<w->GetName()<<this->GetName()<<endl;
}
string Success::GetName(){
	return "Success, ";
}
