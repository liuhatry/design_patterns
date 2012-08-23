#include <iostream>
#include "player.hh"
#include "forwards.hh"
#include "translator.hh"

using namespace std;

int main(){

	player *player_ = new forwards("jianeite");
	player *yaoming = new translator("yaoming");
	player_->attack();
	yaoming->defense();
	player_->defense();
	yaoming->attack();
	delete player_;
	delete yaoming;
	return 0;
}
