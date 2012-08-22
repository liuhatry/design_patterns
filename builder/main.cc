#include <iostream>
#include <cstdio>
#include "director.hh"
#include "fatBuilder.hh"
#include "thinBuilder.hh"
#include "builder.hh"
int main(){
	builder *fatbuilder= new fatBuilder();
	builder *thinbuilder= new thinBuilder();
	director * fatdirector_ = new director(fatbuilder);
	fatdirector_->create();
	director * thindirector_ = new director(thinbuilder);
	thindirector_->create();
	delete thindirector_;
	delete fatdirector_;
	delete fatbuilder;
	delete thinbuilder;
	return 0;
}
