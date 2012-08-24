#ifndef OBSERVER_HH
#define OBSERVER_HH
class Subject;
#include <string>
using namespace std;
class Observer{
	public:
		Observer(string name,Subject *s);
		virtual void Update()=0;
	protected:
		string name_;
		Subject *subject_;
};
#endif
