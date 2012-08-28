#include "UNSC.hh"
UNSC::UNSC(){
}
UNSC::UNSC(Country *c1,Country *c2){
	colleague1_=c1;
	colleague2_=c2;
}
void UNSC::Declare(string message,Country *c){
	if(c==colleague1_){
		colleague2_->GetMessage(message);
	}
	else
		colleague1_->GetMessage(message);
}
void UNSC::SetColleague1(Country *c){
	colleague1_=c;
}
void UNSC::SetColleague2(Country *c){
	colleague2_=c;
}
