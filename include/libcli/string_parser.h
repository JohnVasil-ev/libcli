#ifndef STRING_PARSER_H
#define STRING_PARSER_H

#include <vector>

namespace cli {
namespace utils {

std::vector<std::string> split_by(std::string&&, std::string&&);

} // utils
} // cli

#endif // STRING_PARSER_H