#include "Subject.hh"
#include "Boss.hh"
#include "Observer.hh"
#include "StockObserver.hh"

int main(){
	Subject *sub=new Boss("Hatry is coming");
	Observer *zhoujin= new StockObserver("zhoujin",sub);	
	Observer *madongs= new StockObserver("madongsheng",sub);	
	Observer *zhaoyan= new StockObserver("zhaoyan",sub);	
	sub->Attach(zhoujin);
	sub->Attach(madongs);
	sub->Attach(zhaoyan);
	sub->Notify();
	sub->Detach(madongs);
	sub->Notify();

	return 0;
}

