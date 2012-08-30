#include "GameRole.hh"
GameRole::GameRole(int vit,int atk,int def){
	vit_ = vit;
	atk_ = atk;
	def_ = def;
}
void
GameRole::fight(){
	vit_ = 0;
	atk_ = 23;
	def_ = 34;
}
void 
GameRole::display(){
	cout<<"vit="<<vit_<<endl;
	cout<<"atk="<<atk_<<endl;
	cout<<"def="<<def_<<endl;
}
void
GameRole::recoveryState(RoleStateMemento * m){
	vit_ = m->getVit();
	atk_ = m->getAtk();
	def_ = m->getDef();
}
RoleStateMemento *
GameRole::saveState(){
	RoleStateMemento * m = new RoleStateMemento(vit_,atk_,def_);
	return m;
}

