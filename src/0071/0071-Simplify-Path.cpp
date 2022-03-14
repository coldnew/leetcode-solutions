#include <string>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  string simplifyPath(string path) {
    std::string current_dir;
    std::vector<std::string> dirs;
    for (auto& c : path) {
      if (c == '/') {
        if (current_dir.empty())
          continue;

        if (current_dir == ".")
          current_dir.clear();
        else if (current_dir == "..") {
          if (!dirs.empty())
            dirs.pop_back();
        } else
          dirs.push_back(current_dir);

        // remove current_dir since c == '/'
        current_dir.clear();
        continue;
      }

      current_dir.push_back(c);
    }

    // check if current_dir has pending data
    if (!current_dir.empty()) {
      if (current_dir == "..") {
        if (!dirs.empty())
          dirs.pop_back();
      } else if (current_dir != ".")
        dirs.push_back(current_dir);
    }

    std::string result;
    for (auto& s : dirs)
      result.append("/" + s);

    if (result.empty())
      return "/";

    return result;
  }
};
