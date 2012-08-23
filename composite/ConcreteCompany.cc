#include "ConcreteCompany.hh"
ConcreteCompany::ConcreteCompany(string name):Company(name){
}
ConcreteCompany::~ConcreteCompany(){
}
void ConcreteCompany::add(Company *c){
	childrenList_.push_back(c);
}
void ConcreteCompany::remove(Company *c){
	childrenList_.remove(c);
}
void ConcreteCompany::display(int depth){
	string *s= new string(depth,'-');
	cout<<*s<<name_<<endl;
	delete s;
	ChildrenList::iterator it;
	for(it = childrenList_.begin();it!=childrenList_.end();it++){			
		(*it)->display(depth+2);
	}
		
}
void ConcreteCompany::lineOfDuty(){
	cout<<name_<<":"<<endl;
	ChildrenList::iterator it;
	for(it = childrenList_.begin();it!=childrenList_.end();it++){	
		(*it)->lineOfDuty();
	}
		
}
