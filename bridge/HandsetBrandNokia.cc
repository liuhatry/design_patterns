#include "HandsetBrandNokia.hh"
HandsetBrandNokia::HandsetBrandNokia(HandsetSoft *soft_){
	soft = soft_;
}
void HandsetBrandNokia::run(){
	soft->run();
}
void HandsetBrandNokia::setSoft(HandsetSoft * soft_){
	soft = soft_;
}
