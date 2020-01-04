////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project        Open Space Toolkit ▸ I/O
/// @file           OpenSpaceToolkitIOPy/IP/TCP/HTTP/Request.cpp
/// @author         Lucas Brémond <lucas@loftorbital.com>
/// @license        Apache License 2.0

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <OpenSpaceToolkit/IO/IP/TCP/HTTP/Request.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

inline void                     OpenSpaceToolkitIOPy_IP_TCP_HTTP_Request             ( )
{

    using namespace boost::python ;

    using ostk::core::types::String ;

    using ostk::io::URL ;
    using ostk::io::ip::tcp::http::Request ;

    scope in_Request = class_<Request>("Request", init<const Request::Method&, const URL&, const String&>())

        .def(self_ns::str(self_ns::self))
        .def(self_ns::repr(self_ns::self))

		.def("isDefined", &Request::isDefined)
        .def("getMethod", &Request::getMethod)
        .def("getUrl", &Request::getUrl)
        .def("getBody", &Request::getBody)

        .def("Undefined", &Request::Undefined).staticmethod("Undefined")
        .def("Get", &Request::Get).staticmethod("Get")
        .def("StringFromMethod", &Request::StringFromMethod).staticmethod("StringFromMethod")

    ;

    enum_<Request::Method>("Method")

        .value("Undefined", Request::Method::Undefined)
        .value("Get", Request::Method::Get)
        .value("Head", Request::Method::Head)
        .value("Post", Request::Method::Post)
        .value("Put", Request::Method::Put)
        .value("Delete", Request::Method::Delete)
        .value("Trace", Request::Method::Trace)
        .value("Options", Request::Method::Options)
        .value("Connect", Request::Method::Connect)
        .value("Patch", Request::Method::Patch)
    ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
