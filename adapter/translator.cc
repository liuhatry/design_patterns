#include "translator.hh"
translator::translator(string name):player(name){
	fc = new foreignCenter(name);
}
translator::~translator(){
	delete fc;
}
void translator::attack(){
	fc->attack();
}
void translator::defense(){
	fc->defense();
}
