#include "singleton.hh"
singleton * singleton::instance ;
//garbo singleton::gb;
singleton::singleton(){
}
singleton * singleton::getInstance(){
	if (instance ==NULL)
	{
		instance = new singleton();
	}
	return instance;
}

