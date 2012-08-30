#include "GameRole.hh"
#include "RoleStateMemento.hh"
#include "RoleStateCaretaker.hh"

int main(){
	GameRole * liu = new GameRole(100,100,100);
	liu->display();
	RoleStateCaretaker * hatry = new RoleStateCaretaker();
	hatry->setMemento(liu->saveState());
	liu->fight();
	liu->display();
	liu->recoveryState(hatry->getMemento());
	liu->display();
	return 0;
}
