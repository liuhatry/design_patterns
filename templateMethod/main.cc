#include "TestPaper.hh"
#include "TestPaperA.hh"
using namespace std;

int main(){
	TestPaper * tp= new TestPaperA();
	tp->TestQuestion();
	return 0;
}
