//
// main.cpp
// ~~~~~~~~
//
// Copyright (c) 2003-2014 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <iostream>
#include <string>
#include <unordered_map>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include "server.hpp"

#include "config_parser.hpp"
#include "server_config.hpp"

int main(int argc, char* argv[])
{
  try
  {
    if (argc != 2)
    {
      std::cerr << "Usage: ./webserver /path/to/config/file\n";
      return 1;
    }

    ServerConfig* server_config = new ServerConfig();
    // Init
    if (server_config->Init(argv[1]))
    {
      // Initialise the server.
      server s("0.0.0.0", *server_config);

      // Run the server until stopped.
      std::cout << "The server is running on port " << server_config->Port() << std::endl;
      s.run();
    }
    else
    {
      std::cout << "failed." << std::endl;
    }

    // Clean up?
    delete server_config;
  }
  catch (std::exception& e)
  {
    std::cerr << "exception: " << e.what() << "\n";
  }

  return 0;
}
