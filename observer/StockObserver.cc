#include "StockObserver.hh"
StockObserver::StockObserver(string name,Subject *s):Observer(name,s){
}
void StockObserver::Update(){
	cout<<subject_->State()<<" "<<name_<<" Close Stock! Contine to Work!"<<endl;
}
