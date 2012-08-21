#include "volunteerFactory.hh"

volunteerFactory::volunteerFactory():iFactory(){
}
volunteerFactory::~volunteerFactory(){
}
leifeng * volunteerFactory::createLeifeng(){
	return new volunteer();
}
