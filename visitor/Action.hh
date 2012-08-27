#ifndef ACTION_HH
#define ACTION_HH
#include <string>
using namespace std;
class Man;
class Woman;
class Action{
	public:
		virtual void GetManConclusion(Man *)=0;
		virtual void GetWomanConclusion(Woman *)=0;
		virtual string GetName() =0;
};
#endif
