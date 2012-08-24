#include "Proxy.hh"
Proxy::Proxy(string name1,SchoolGirl *sg){
	pursuit_ = new Pursuit(name1,sg);
}
void Proxy::GiveDolls(){
	pursuit_->GiveDolls();
}
Proxy::~Proxy(){
	delete pursuit_;
}
