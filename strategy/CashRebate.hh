#ifndef CASH_REBATE_HH
#define CASH_REBATE_HH
#include "CashSuper.hh"
class CashRebate:public CashSuper{
	public:
		CashRebate(double);
		virtual double acceptCash(double);
	private:
		double moneyRebate_;
};
#endif
