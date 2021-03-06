////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Open Space Toolkit ▸ I/O
/// @file           bindings/python/src/OpenSpaceToolkitIOPy.cxx
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <pybind11/pybind11.h>
#include <pybind11/operators.h>

#include <OpenSpaceToolkitIOPy/Utilities/ShiftToString.hpp>

#include <OpenSpaceToolkitIOPy/IP.cpp>
#include <OpenSpaceToolkitIOPy/URL.cpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

PYBIND11_MODULE (OpenSpaceToolkitIOPy, m)
{

    // Add optional docstring for package OpenSpaceToolkitCorePy
    m.doc() = "Addressing, networking, database connectors for OpenSpaceToolkit." ;

    // Add __path__ attribute to python package
    m.attr("__path__") = "ostk.io" ;

    // Change attribute __name__ to make OpenSpaceToolkitCorePy invisible in import path
    m.attr("__name__") = "ostk.io" ;

    // Package version information
    #ifdef VERSION_INFO
        m.attr("__version__") = VERSION_INFO ;
    #else
        m.attr("__version__") = "dev" ;
    #endif

    // Add python submodules to OpenSpaceToolkitCorePy
	OpenSpaceToolkitIOPy_URL(m) ;
	OpenSpaceToolkitIOPy_IP(m) ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
