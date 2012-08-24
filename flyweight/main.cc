#include "User.hh"
#include "WebSite.hh"
#include "ConcreteWebSite.hh"
#include "WebSiteFactory.hh"

#include <iostream>
using namespace std;
int main(){
	WebSiteFactory *f = new WebSiteFactory();
	User *u1 = new User("Hatry");
	User *u2 = new User("Liu");
	User *u3 = new User("Zhou");
	User *u4 = new User("Ma");
	User *u5 = new User("Zhao");
	WebSite * fx= f->GetWebSiteCategory("Product Display()");
	fx->Use(u1);
	fx->Use(u2);
	WebSite * fy= f->GetWebSiteCategory("Product Display()");
	fy->Use(u3);
	fy->Use(u4);
	WebSite * fz= f->GetWebSiteCategory("Blog()");
	fz->Use(u5);
	cout<<f->GetWebSiteCount()<<endl;

	return 0;
}
