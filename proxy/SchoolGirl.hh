#ifndef SCHOOLGIRL_HH
#define SCHOOLGIRL_HH
#include <string>
using namespace std;
class SchoolGirl{
	public:
		SchoolGirl(string name= "");
		string GetName();
	private:
		string name_;
};
#endif
