#include <iostream>
#include <memory>
#include <mutex>

class singleton {
 public:
  using Ptr = std::shared_ptr<singleton>;
  static Ptr getInstance();

 private:
  singleton() {
    std::cout << "constructor called!" << std::endl;
  }

 private:
  static Ptr instance_ptr;
  static std::mutex m_mutex;
};
