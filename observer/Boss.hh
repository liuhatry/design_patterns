#ifndef BOSS_HH
#define BOSS_HH
#include "Subject.hh"
#include "Observer.hh"
#include <string>
#include <vector>
using namespace std;
class Boss:public Subject{
	public:
		Boss(string);
		virtual void Attach(Observer *observer);
		virtual void Detach(Observer *observer);
		virtual void Notify();
		virtual string State();
	private:
		typedef vector<Observer *> observers;
		observers observers_;
		string action_;
};
#endif
