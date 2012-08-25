#include "Command.hh"
#include "BakeMuttonCommand.hh"
#include "BakeChickenWingCommand.hh"
#include "Barbecuer.hh"
#include "Waiter.hh"

int main(){
	Barbecuer *boy = new Barbecuer();
	Command *bake1 =new BakeMuttonCommand(boy);
	Command *bake2 =new BakeMuttonCommand(boy);
	Command *bake3 =new BakeChickenWingCommand(boy);
	Waiter *girl = new Waiter();

	girl->SetOrder(bake1);
	girl->SetOrder(bake2);
	girl->SetOrder(bake3);
	
	girl->Notify();

	girl->CancelOrder(bake1);

	girl->Notify();
	return 0;
}
