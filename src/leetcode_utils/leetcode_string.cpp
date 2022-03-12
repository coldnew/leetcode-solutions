#include "leetcode_string.h"
#include <algorithm>

std::string StringRemoveSquareBreaket(const std::string& s) {
  std::string str = s;
  str.erase(std::remove(str.begin(), str.end(), '['), str.end());
  str.erase(std::remove(str.begin(), str.end(), ']'), str.end());
  return str;
}

std::vector<std::string> StringSplit(const std::string& s,
                                     const std::string& separator) {
  std::string str = s;
  std::vector<std::string> elms;
  int pos = 0;
  while ((pos = str.find(separator)) != std::string::npos) {
    std::string token = str.substr(0, pos);
    elms.push_back(token);
    str.erase(0, pos + separator.length());
  }
  elms.push_back(str);
  return elms;
}
