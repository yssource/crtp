#ifndef INTERFACE_H_
#define INTERFACE_H_

#include <iostream>
#include <typeinfo>

template<typename Impl>
class Interface
{
 public:
  void print() {
    auto impl = static_cast<Impl*>(this);
    std::cout << typeid(impl).name() << std::endl;
  }
};

#endif // INTERFACE_H_
