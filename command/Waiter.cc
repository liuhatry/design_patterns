#include "Waiter.hh"
void Waiter::SetOrder(Command *c){
	orderList_.push_back(c);
}
void Waiter::CancelOrder(Command *c){
	OrderList::iterator it=orderList_.begin();
	for(;it!=orderList_.end();it++){
		(*it)==c;
		orderList_.erase(it);
		break;
	}
}
void Waiter::Notify(){
	OrderList::iterator it=orderList_.begin();
	for(;it!=orderList_.end();it++){
		(*it)->ExecuteCommand();
	}

}
