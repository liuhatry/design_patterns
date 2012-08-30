#include "RoleStateMemento.hh"
RoleStateMemento::RoleStateMemento(int vit, int atk, int def){
	vit_ = vit;
	atk_ = atk;
	def_ = def;
}
int
RoleStateMemento::getVit(){
	return vit_;
}
int
RoleStateMemento::getAtk(){
	return atk_;
}
int
RoleStateMemento::getDef(){
	return def_;
}
