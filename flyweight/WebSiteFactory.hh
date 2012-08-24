#ifndef WEBSITEFACTORY
#define WEBSITEFACTOTY
#include <string>
#include "WebSite.hh"
#include "ConcreteWebSite.hh"
#include <map>
using namespace std;
class WebSiteFactory{
	public:
		WebSite * GetWebSiteCategory(string key);
		~WebSiteFactory();
		int GetWebSiteCount();
	private:
		typedef map<string,WebSite*> flyweights;
		flyweights flyweights_;
};
#endif
