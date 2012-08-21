#include "underGraduateFactory.hh"

underGraduateFactory::underGraduateFactory():iFactory(){
}
underGraduateFactory::~underGraduateFactory(){
}
leifeng *underGraduateFactory::createLeifeng(){
	return new underGraduate();
}
