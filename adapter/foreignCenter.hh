#ifndef FOREIGNCENTER
#define FOREIGNCENTER
#include <string>
#include <iostream>
using namespace std;
using namespace std;
class foreignCenter{
	public:
		foreignCenter(string name);
		void attack();
		void defense();
	private:
		string name_;
};
#endif
