#include "CashRebate.hh"
CashRebate::CashRebate(double c){
	moneyRebate_ = c;
}
double
CashRebate::acceptCash(double money){
	return moneyRebate_*money;
}
