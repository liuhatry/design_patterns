#include "singleton.h"

int main() {
  singleton* s1 = singleton::getInstance();
  singleton* s2 = singleton::getInstance();
  if (s1 == s2) {
    cout<<"equal!"<<endl;
  }
  return 0;
}
