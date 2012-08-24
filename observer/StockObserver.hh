#ifndef STOCKOBSERVER_HH
#define STOCKOBSERVER_HH
#include <iostream>
#include <string>
#include "Observer.hh"
#include "Subject.hh"
using namespace std;
class StockObserver:public Observer{
	public:
		StockObserver(string ,Subject *);
		virtual void Update();
};
#endif
