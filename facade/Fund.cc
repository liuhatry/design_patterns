#include "Fund.hh"
Fund::Fund(Stock *s, NationalDebt *n){
	stock_=s;
	nationalDebt_=n;
}
void Fund::Buy(){
	stock_->Buy();
	nationalDebt_->Buy();
}
void Fund::Sell(){
	stock_->Sell();
	nationalDebt_->Sell();
}
