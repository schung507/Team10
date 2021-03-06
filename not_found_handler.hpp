#ifndef NOT_FOUND_HANDLER_HPP
#define NOT_FOUND_HANDLER_HPP

#include <string>
#include "request_handler.hpp"
#include "request.hpp"
#include "response.hpp"
#include "server_config.hpp"


/// The common handler for all incoming requests.
class NotFoundHandler
  : public RequestHandler
{
public:
  NotFoundHandler();
  Status Init(const std::string& uri_prefix,
                      const NginxConfig& config);
  Status HandleRequest(const Request& request,
                               Response* response);

};

REGISTER_REQUEST_HANDLER(NotFoundHandler);
#endif // NOT_FOUND_HANDLER_HPP
