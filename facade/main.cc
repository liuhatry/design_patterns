#include "Fund.hh"
#include "Stock.hh"
#include "NationalDebt.hh"

int main(){
	Stock *s=new Stock();
	NationalDebt *n = new NationalDebt();
	Fund *f= new Fund(s,n);
	f->Buy();
	f->Sell();
	delete f;
	delete s;
	delete n;
	return 0;
}
