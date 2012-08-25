#ifndef UNITEDNATIONS_HH
#define UNITEDNATIONS_HH
class Country;
#include <string>
using namespace std;
class UnitedNations{
	public:
		virtual void Declare(string,Country *)=0;
		virtual void SetColleague1(Country *)=0;
		virtual void SetColleague2(Country *)=0;
};
#endif
