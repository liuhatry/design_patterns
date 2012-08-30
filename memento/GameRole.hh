#ifndef GAME_ROLE
#define GAME_ROLE
#include "RoleStateMemento.hh"
#include <iostream>
using namespace std;
class GameRole{
	public:
		GameRole(int,int,int);
		void fight();
		void display();
		RoleStateMemento * saveState();
		void recoveryState(RoleStateMemento *);
	private:
		int vit_;
		int atk_;
		int def_;
};
#endif
