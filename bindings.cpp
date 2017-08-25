/*----------------------------------------------------------------------------
 *
 *   Copyright (C) 2017 Deepanshu Thakur
 *
 *
 *   This file is part of the crtp bindings example blog.
 *
 *   crtp bindings is free: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   crtp bindings is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with crtp.  If not, see <http://www.gnu.org/licenses/>.
 *
 *---------------------------------------------------------------------------*/

#include "bindings.h"
#include "impl_b.h"

PYBIND11_MODULE(bindingsImplB, m) {
  register_interface<Interface<ImplB>>(m);
  pybind11::class_<ImplB, Interface<ImplB>>(m, "ImplB")
    .def(pybind11::init<>());
}
