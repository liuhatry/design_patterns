#ifndef REQUEST_HH
#define REQUEST_HH
#include <string>
using namespace std;
class Request{
	public:
		Request(string,string,double);
		string GetRequestType();
		string GetRequestContent();
		double GetRequestNumber();
	private:
		string requestType_;
		string requestContent_;
		double requestNumber_;
};
#endif
