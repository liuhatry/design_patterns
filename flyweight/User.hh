#ifndef USER_HH
#define USER_HH
#include <string>
using namespace std;
class User{
	public:
		User(string name);
		string GetName();
	private:
		string name_;
};
#endif
