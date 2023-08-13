#ifndef STRING_PARSER_H
#define STRING_PARSER_H

#include <string>
#include <vector>

namespace cli {
namespace utils {

std::vector<std::string> split_by_char(const std::string&, const char&&);

} // utils
} // cli

#endif // STRING_PARSER_H