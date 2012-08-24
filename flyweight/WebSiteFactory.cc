#include "WebSiteFactory.hh"
WebSite * WebSiteFactory::GetWebSiteCategory(string key){
	flyweights::iterator it = flyweights_.find(key);
	if (it!=flyweights_.end())
		return it->second;
	else
	{
		WebSite *ws = new ConcreteWebSite(key);
		flyweights_.insert(make_pair(key,ws));
	return flyweights_.find(key)->second;
}
}
WebSiteFactory::~WebSiteFactory(){
	flyweights::iterator it = flyweights_.begin();
	while(it!=flyweights_.end()){
		delete it->second;
		it++;
	}
}
int WebSiteFactory::GetWebSiteCount(){
	return flyweights_.size();
}
