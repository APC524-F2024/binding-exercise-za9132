#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "integrator.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
  m.doc() = "Python bindings for se_for_sci_hw6 C++ library";
  py::class_<HarmonicOscillator>(m, "HarmonicOscillator")
    .def(py::init<>())
    .def("f", &HarmonicOscillator::f, "Harmonic oscillator ODE")
    .def("compute_step", &HarmonicOscillator::compute_step, "Compute an integration step")
    .def("integrate", &HarmonicOscillator::integrate, "Integrate the ODE");
}
