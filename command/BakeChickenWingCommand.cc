#include "BakeChickenWingCommand.hh"
BakeChickenWingCommand::BakeChickenWingCommand(Barbecuer *b):Command(b){
}
void BakeChickenWingCommand::ExecuteCommand(){
	barbecuer_->BakeChickenWing();
}
