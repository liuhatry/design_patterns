#include "BakeMuttonCommand.hh"
BakeMuttonCommand::BakeMuttonCommand(Barbecuer *b):Command(b){
}
void BakeMuttonCommand::ExecuteCommand(){
	barbecuer_->BakeMutton();
}
