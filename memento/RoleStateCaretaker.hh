#ifndef	ROLE_STATE_CARETAKER_HH
#define	ROLE_STATE_CARETAKER_HH
#include "RoleStateMemento.hh"
class RoleStateCaretaker{
	public:
		RoleStateMemento * getMemento();
		void setMemento(RoleStateMemento *);
	private:
		RoleStateMemento * memento_;
};
#endif
