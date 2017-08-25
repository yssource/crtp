#include "bindings.h"
#include "impl_b.h"

PYBIND11_MODULE(bindingsImplB, m) {
  register_interface<Interface<ImplB>>(m);
  pybind11::class_<ImplB, Interface<ImplB>>(m, "ImplB")
    .def(pybind11::init<>());
}
