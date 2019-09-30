#include <iostream>

using namespace std;

class singleton {
 public:
  static singleton* getInstance();

 private:
  static singleton* instance;
  singleton() {}

  class garbo {
   public:
    ~garbo() {
      if (singleton::instance) {
        delete singleton::instance;
      }
    }
  };
  static garbo gb;
};
