#ifndef TESTPAPERA_HH
#define TESTPAPERA_HH
#include <iostream>
#include <string>
using namespace std;
#include "TestPaper.hh"
class TestPaperA:public TestPaper{
	public:
		virtual string Answer();
};
#endif
