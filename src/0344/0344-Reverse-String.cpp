#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  void reverseString(vector<char>& s) {
    for (auto i = 0; i < s.size() / 2; i++)
      std::swap(s[i], s[s.size() - i - 1]);
  }
};
