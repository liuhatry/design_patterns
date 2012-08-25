#ifndef BAKEMUTTONCOMMAND_HH
#define BAKEMUTTONCOMMAND_HH
#include "Command.hh"
#include "Barbecuer.hh"
class BakeMuttonCommand:public Command{
	public:
		BakeMuttonCommand(Barbecuer *);
		virtual void ExecuteCommand();
};
#endif
