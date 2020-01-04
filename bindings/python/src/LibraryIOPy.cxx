////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Open Space Toolkit ▸ I/O
/// @file           OpenSpaceToolkit/IO/LibraryIOPy.hpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <boost/python.hpp>

#include <LibraryIOPy/IP.cpp>
#include <LibraryIOPy/URL.cpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOST_PYTHON_MODULE (LibraryIOPy)
{

	boost::python::object package = boost::python::scope() ;

	package.attr("__path__") = "Library" ;

	LibraryIOPy_URL() ;
	LibraryIOPy_IP() ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
