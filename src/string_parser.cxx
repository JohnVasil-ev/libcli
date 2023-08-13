#include "cli/string_parser.h"

namespace cli {
namespace utils {

std::vector<std::string> split_by(std::string&& str, std::string&& divider)
{
  std::vector<std::string> vector;
  std::string tmp_str;

  for (const char& c : str)
  	if (std::strcmp(c, divider) == 0)
  	{
  		vector.push_back(tmp_str);
  		tmp_str.clear();
  	}
  	else
  	{
  		tmp_str.push_back(c);
  	}

  return vector;
}

} // utils	
} // cli