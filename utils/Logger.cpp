#include <utils/Logger.hpp>

namespace Logger {
  std::ostream &Error(std::string message)
  {
    return std::cerr << "Error: " << message << std::endl;
  }
}
