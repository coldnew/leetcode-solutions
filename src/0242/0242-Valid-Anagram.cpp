#include <map>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  bool isAnagram(string s, string t) {
    //         char       count
    std::map<char, int> dict;
    for (auto& c : s)
      dict[c]++;
    for (auto& c : t)
      dict[c]--;

    bool result = true;
    for (auto& k : dict)
      result &= k.second == 0;
    return result;
  }
};
