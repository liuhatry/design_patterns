#ifndef TESTPAPER_HH
#define TESTPAPER_HH
#include <iostream>
#include <string>
using namespace std;
class TestPaper{
	public:
		void TestQuestion();
		virtual string Answer()=0;
};
#endif
