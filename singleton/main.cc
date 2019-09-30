#include "singleton.h"

int main() {
  std::shared_ptr<singleton> s1 = singleton::getInstance();
  std::shared_ptr<singleton> s2 = singleton::getInstance();
  if (s1 && s1 == s2) {
    std::cout << "equal!" << std::endl;
  }
  return 0;
}
