#include "Request.hh"
Request::Request(string type, string content, double number){
	requestType_=type;
	requestContent_= content;
	requestNumber_= number;
}
string Request::GetRequestType(){
	return requestType_;
}
string Request::GetRequestContent(){
	return requestContent_;
}
double Request::GetRequestNumber(){
	return requestNumber_;
}
