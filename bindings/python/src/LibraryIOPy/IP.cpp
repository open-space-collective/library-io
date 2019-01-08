////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Library/IO
/// @file           LibraryIOPy/IP.cpp
/// @author         Lucas Brémond <lucas.bremond@gmail.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <LibraryIOPy/IP/TCP.cpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline void                     LibraryIOPy_IP                              ( )
{
    
    boost::python::object module(boost::python::handle<>(boost::python::borrowed(PyImport_AddModule("Library.IO.IP")))) ;
    
    boost::python::scope().attr("IP") = module ;
    
    boost::python::scope scope = module ;
    
    LibraryIOPy_IP_TCP() ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////