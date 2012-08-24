#include "Boss.hh"
Boss::Boss(string action){
	action_=action;
}
void Boss::Attach(Observer *observer){
	observers_.push_back(observer);
}
void Boss::Detach(Observer *observer){
	for(observers::iterator it=observers_.begin();it!=observers_.end();it++){
		if(*it ==observer)
			it=observers_.erase(it);
		}
}
void Boss::Notify(){
	for(observers::iterator it = observers_.begin();it!=observers_.end();it++){
		(*it)->Update();
	}
}
string Boss::State(){
	return action_;
}
