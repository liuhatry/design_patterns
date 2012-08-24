#include "Proxy.hh"
#include "SchoolGirl.hh"

int main(){
	SchoolGirl *sg=new SchoolGirl("Jiao Jiao");
	Proxy *ma= new Proxy("zhoujin",sg);
	ma->GiveDolls();
	return 0;
}
