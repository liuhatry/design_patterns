#include "Majordomo.hh"
Majordomo::Majordomo(string name):Manager(name){
}
void Majordomo::RequestApplications(Request *r){
	if(r->GetRequestType()=="Holiday"){
		cout<<name_<<":"<<r->GetRequestContent()<<" "<<r->GetRequestNumber()<<"days"<<" is allowed!"<<endl;
	}
	else if(r->GetRequestType()=="Money" && r->GetRequestNumber()<=1000)
		cout<<name_<<":"<<r->GetRequestContent()<<" "<<r->GetRequestNumber()<<"yuan"<<" is allowed!"<<endl;

	else
		cout<<name_<<":"<<r->GetRequestContent()<<" "<<r->GetRequestNumber()<<" is not allowed!"<<endl;
}
