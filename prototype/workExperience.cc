#include "workExperience.hh"
workExperience::workExperience(int workDate_,int workYear_){
	workDate=workDate_;
	workYear=workYear_;
}
prototype * workExperience::clone(){
	return new workExperience(*this);
}
