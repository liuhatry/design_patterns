#include "Pursuit.hh"
Pursuit::Pursuit(string name,SchoolGirl *sg){
	schoolGirl_=sg;
	name_=name;
}
void Pursuit::GiveDolls(){
	cout<<"I am "<<name_<<". "<<schoolGirl_->GetName()<<" Give you dolls. I love you!"<<endl;
}
