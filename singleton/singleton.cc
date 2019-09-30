#include "singleton.h"

std::shared_ptr<singleton> singleton::instance_ptr;
std::mutex singleton::m_mutex;

std::shared_ptr<singleton> singleton::getInstance(){
  // "double checked lock"
  if (!instance_ptr) {
    std::lock_guard<std::mutex> lk(m_mutex);
    if (!instance_ptr) {
      instance_ptr = std::shared_ptr<singleton>(new singleton());
    }
  }
  return instance_ptr;
}
