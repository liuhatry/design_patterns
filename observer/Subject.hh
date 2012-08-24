#ifndef SUBJECT_HH
#define SUBJECT_HH
#include <string>
#include "Observer.hh"
using namespace std;
class Subject{
	public:
		virtual void Attach(Observer *observer)=0;
		virtual void Detach(Observer *observer)=0;
		virtual void Notify()=0;
		virtual string State()=0;

};
#endif
