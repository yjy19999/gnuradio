/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(probe_mpsk_snr_est_c.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(39a4460eb1ae1d465a2117cfd6b1c337)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/probe_mpsk_snr_est_c.h>
// pydoc.h is automatically generated in the build directory
#include <probe_mpsk_snr_est_c_pydoc.h>

void bind_probe_mpsk_snr_est_c(py::module& m)
{

    using probe_mpsk_snr_est_c = ::gr::digital::probe_mpsk_snr_est_c;


    py::class_<probe_mpsk_snr_est_c,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<probe_mpsk_snr_est_c>>(
        m, "probe_mpsk_snr_est_c", D(probe_mpsk_snr_est_c))

        .def(py::init(&probe_mpsk_snr_est_c::make),
             py::arg("type"),
             py::arg("msg_nsamples") = 10000,
             py::arg("alpha") = 0.001,
             D(probe_mpsk_snr_est_c, make))


        .def("snr", &probe_mpsk_snr_est_c::snr, D(probe_mpsk_snr_est_c, snr))


        .def("signal", &probe_mpsk_snr_est_c::signal, D(probe_mpsk_snr_est_c, signal))


        .def("noise", &probe_mpsk_snr_est_c::noise, D(probe_mpsk_snr_est_c, noise))


        .def("type", &probe_mpsk_snr_est_c::type, D(probe_mpsk_snr_est_c, type))


        .def("msg_nsample",
             &probe_mpsk_snr_est_c::msg_nsample,
             D(probe_mpsk_snr_est_c, msg_nsample))


        .def("alpha", &probe_mpsk_snr_est_c::alpha, D(probe_mpsk_snr_est_c, alpha))


        .def("set_type",
             &probe_mpsk_snr_est_c::set_type,
             py::arg("t"),
             D(probe_mpsk_snr_est_c, set_type))


        .def("set_msg_nsample",
             &probe_mpsk_snr_est_c::set_msg_nsample,
             py::arg("n"),
             D(probe_mpsk_snr_est_c, set_msg_nsample))


        .def("set_alpha",
             &probe_mpsk_snr_est_c::set_alpha,
             py::arg("alpha"),
             D(probe_mpsk_snr_est_c, set_alpha))

        ;
}