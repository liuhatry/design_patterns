#include "singleton.h"

singleton* singleton::instance;

singleton* singleton::getInstance(){
  if (!instance) {
    instance = new singleton();
  }
  return instance;
}

