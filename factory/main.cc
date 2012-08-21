#include <iostream>
#include <cstdio>
#include "leifeng.hh"
#include "volunteerFactory.hh"
#include "underGraduateFactory.hh"
#include "iFactory.hh"
int main(){
	leifeng *xueleifeng;
	iFactory *leifengFactory = new volunteerFactory();
	xueleifeng = leifengFactory->createLeifeng();
	xueleifeng->sweep();
	delete xueleifeng;
	delete leifengFactory;
	iFactory *leifengFactory1  = new underGraduateFactory();
	return 0;
}
