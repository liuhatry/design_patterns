#ifndef FUND_HH
#define FUND_HH
#include "Stock.hh"
#include "NationalDebt.hh"
class Fund{
	public:
		Fund(Stock *s,NationalDebt *n);
		void Sell();
		void Buy();
	private:
		Stock * stock_;
		NationalDebt * nationalDebt_;
};
#endif
