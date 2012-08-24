#ifndef WEBSITE_HH
#define WEBSITE_HH
#include "User.hh"
class WebSite{
	public:
		virtual void Use(User *u)=0;
};
#endif
