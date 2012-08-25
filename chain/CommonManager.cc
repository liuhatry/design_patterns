#include "CommonManager.hh"
CommonManager::CommonManager(string name):Manager(name){
}
void CommonManager::RequestApplications(Request *r){
	if(r->GetRequestType()=="Holiday"){
		cout<<name_<<":"<<r->GetRequestContent()<<" "<<r->GetRequestNumber()<<" days"<<" is allowed!"<<endl;
	}
	else
		superior_->RequestApplications(r);
}
