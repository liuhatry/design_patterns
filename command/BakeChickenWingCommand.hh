#ifndef BAKECHICKENWINGCOMMAND_HH
#define BAKECHICKENWINGCOMMAND_HH
#include "Command.hh"
#include "Barbecuer.hh"
class BakeChickenWingCommand:public Command{
	public:
		BakeChickenWingCommand(Barbecuer *);
		virtual void ExecuteCommand();
};
#endif
