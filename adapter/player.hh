#ifndef PLAYER
#define PLAYER
#include <string>
using namespace std;
class player{
	public:
		player(string name);
		virtual void attack() = 0;
		virtual void defense() = 0;
		virtual ~player();
	protected:
		string name_;
};
#endif
