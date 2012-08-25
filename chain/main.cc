#include "Request.hh"
#include "Manager.hh"
#include "CommonManager.hh"
#include "Majordomo.hh"

int main(){
	Request *r1 = new Request("Holiday","zhoujin for holiday",34);
	Request *r2 = new Request("Money","madongsheng for money",123);
	Request *r3 = new Request("Money","zhoujin for money",23434);
	Manager *liu = new CommonManager("liu");
	Manager *hatry = new Majordomo("hatry");
	liu->SetSuperior(hatry);
	liu->RequestApplications(r1);
	liu->RequestApplications(r2);
	liu->RequestApplications(r3);

	return 0;
}
