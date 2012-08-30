#include "RoleStateCaretaker.hh"
RoleStateMemento *
RoleStateCaretaker::getMemento(){
	return memento_;
}
void 
RoleStateCaretaker::setMemento(RoleStateMemento * memento){
	memento_ = memento;
}
