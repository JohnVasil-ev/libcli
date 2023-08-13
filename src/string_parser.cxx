#include "cli/string_parser.h"

namespace cli {
namespace utils {

std::vector<std::string> split_by_char(const std::string& str, const char&& divider)
{
  std::vector<std::string> vector;
  std::string tmp_str;

  for (const char& c : str)
  	if (c != divider && c != ' ')
  	{
      tmp_str.push_back(c);
  	}
  	else if (c == divider)
  	{
      vector.push_back(tmp_str);
      tmp_str.clear();
  	}

  if (!tmp_str.empty())
    vector.push_back(tmp_str);

  return vector;
}

} // utils	
} // cli