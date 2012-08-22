#include <iostream>
using namespace std;
class singleton{
	private:
		static singleton *instance;
		 singleton();
		 class garbo{
			 public:
				 ~garbo(){
					 if(singleton::instance){
						 delete singleton::instance;
					 }
				 }
		 };
		 static garbo gb;
	public:
		static singleton * getInstance();
};
