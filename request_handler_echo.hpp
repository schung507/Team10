//
// request_handler_echo.hpp
// ~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2014 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef HTTP_REQUEST_HANDLER_ECHO_HPP
#define HTTP_REQUEST_HANDLER_ECHO_HPP

#include <string>
#include <boost/noncopyable.hpp>
#include "request_handler.hpp"

namespace http {
namespace server {

struct reply;
struct request;

/// The common handler for all incoming requests.
class request_handler_echo
  : public http::server::request_handler
{
public:
  request_handler_echo(){};
  /// Handle a request and produce a reply.
  void handle_request(const request& req, reply& rep) override;
  /// Perform URL-decoding on a string. Returns false if the encoding was
  /// invalid.
  const std::string doc_root_;
  static bool url_decode(const std::string& in, std::string& out);


};

} // namespace server
} // namespace http

#endif // HTTP_REQUEST_HANDLER_HPP
