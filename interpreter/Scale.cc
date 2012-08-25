#include "Scale.hh"
void Scale::Execute(string key,string value){
	string scale;
	if(value == "1")
		scale = "low";
	else if(value == "2")
		scale = "mid";
	else if(value == "3")
		scale = "hig";
	cout<<scale;
}
