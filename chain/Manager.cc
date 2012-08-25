#include "Manager.hh"
Manager::Manager(string name){
	name_= name;
}
void Manager::SetSuperior(Manager * m){
	superior_=m;
}
