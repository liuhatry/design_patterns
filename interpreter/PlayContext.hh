#ifndef PLAYCONTEXT
#define PLAYCONTEXT
#include <string>
using namespace std;
class PlayContext{
	private:
		string text_;
	public:
		void SetText(string);
		string GetText();
};
#endif
