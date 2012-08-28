#ifndef CASH_CONTEXT_HH
#define CASH_CONTEXT_HH
#include "CashSuper.hh"
#include "CashNormal.hh"
#include "CashRebate.hh"
#include <string>
using namespace std;
class CashContext{
	public:
		CashContext(string);
		double getResult(double);
	private:
		CashSuper *cashSuper_;
};
#endif
