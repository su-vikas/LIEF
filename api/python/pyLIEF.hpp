/* Copyright 2017 R. Thomas
 * Copyright 2017 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef PY_LIEF_H_
#define PY_LIEF_H_

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/operators.h>
#include <functional>

#include "encoding.hpp"

#include "pyIterators.hpp"

namespace py = pybind11;

using namespace pybind11::literals;

void init_LIEF_Logger(py::module&);
void init_LIEF_exceptions(py::module&);
void init_LIEF_module(py::module&);
void init_ELF_module(py::module&);
void init_PE_module(py::module&);
void init_MachO_module(py::module&);
void init_utils_functions(py::module&);
void init_json_functions(py::module&);

#define RST_CLASS_REF(X) ":class:`~"#X"`"

#endif
