#ifndef COMMAND_HH
#define COMMAND_HH
#include "Barbecuer.hh"
class Command{
	public:
		Command(Barbecuer *);
		virtual void ExecuteCommand()=0;
	protected:
		Barbecuer *barbecuer_;
};
#endif
