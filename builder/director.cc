#include "director.hh"
director::director(builder *b){
	builder_=b;
}
director::~director(){
}
void director::create(){
	builder_->buildPart1();
	builder_->buildPart2();
	builder_->buildPart2();
	builder_->buildPart1();
}
