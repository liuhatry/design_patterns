#include "CashContext.hh"
#include <iostream>
#include <string>
using namespace std;
int main(){
	CashContext *c1=new CashContext("Normal");
	cout<<c1->getResult(800)<<endl;
	CashContext *c2=new CashContext("Rebate");
	cout<<c2->getResult(800)<<endl;
	return 0;
}
