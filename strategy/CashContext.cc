#include "CashContext.hh"

CashContext::CashContext(string type){
	if(type == "Normal"){
		cashSuper_ = new CashNormal();
	}
	else if (type == "Rebate"){
		cashSuper_=new CashRebate(0.8);
	}
}
double
CashContext::getResult(double money){
	return cashSuper_->acceptCash(money);
}
