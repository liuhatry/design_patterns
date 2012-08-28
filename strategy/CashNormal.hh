#ifndef CASH_NORMAL_HH
#define CASH_NORMAL_HH
#include "CashSuper.hh"
class CashNormal:public CashSuper{
	public:
		virtual double acceptCash(double);
};
#endif
