//
// request.hpp
// ~~~~~~~~~~~
//
// Copyright (c) 2003-2014 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef HTTP_REQUEST_HPP
#define HTTP_REQUEST_HPP

#include <string>
#include <vector>
#include "header.hpp"

namespace http {
namespace server {

/// A request received from a client.
struct request
{
  std::string method;
  std::string uri;
  int http_version_major;
  int http_version_minor;
  std::vector<header> headers;
  
  std::string toString() const{
    std::string result = "";
    result += method;
    result += " ";
    result += uri;
    result += " HTTP/";
    result += std::to_string(http_version_major);
    result += ".";
    result += std::to_string(http_version_minor);
    return result;
  }
};

} // namespace server
} // namespace http

#endif // HTTP_REQUEST_HPP
