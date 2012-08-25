#ifndef WAITER_HH
#define WAITER_HH
#include <vector>
#include "Command.hh"
class Waiter{
	public:
		void SetOrder(Command*);
		void CancelOrder(Command*);
		void Notify();
	private:
		typedef vector<Command*> OrderList;
		OrderList orderList_;

};
#endif
