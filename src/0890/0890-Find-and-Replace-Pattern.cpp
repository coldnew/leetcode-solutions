#include <unordered_map>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
      auto p = buildPattern(pattern);
      std::vector<std::string> result;
      for (auto& w : words)
        if (buildPattern(w) == p)
          result.push_back(w);
      return result;
  }

  std::string buildPattern(const std::string& str) {
    std::string s = str;
    std::unordered_map<char, int> m;
    for (auto i = 0; i < s.size(); i++) {
        char c = s[i];
        if (m.count(c) == 0)
            m[c] = m.size();
        s[i] = m[s[i]];
    }
    return s;
  }
};
