#include <iostream>
#include <cstdio>
#include "operation.hh"
#include "operationFactory.hh"
using namespace std;
int main(){
	operation *op;
	cout<<"Please input operation symbol!(+,-,*,/)"<<endl;
	char os = getchar();
	op = operationFactory::createOperation(os);
	cout<<"Please input operation numA!"<<endl;
	double numA;
	cin>>numA;
	op->setNumA(numA);
	cout<<"Please input operation numB!"<<endl;
	double numB;
	cin>>numB;
	op->setNumB(numB);
	cout<<op->getResult()<<endl;
	return 0;
}
