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

class Solution2 {
 public:
  void reverseString(vector<char>& s) {
    for (auto i = 0; i < s.size() / 2; i++) {
      s[i] = s[i] ^ s[s.size() - i - 1];
      s[s.size() - i - 1] = s[i] ^ s[s.size() - i - 1];
      s[i] = s[i] ^ s[s.size() - i - 1];
    }
  }
};

class Solution3 {
 public:
  void reverseString(vector<char>& s) {
    for (auto i = 0; i < s.size() / 2; i++) {
      s[i] = s[i] + s[s.size() - i - 1];
      s[s.size() - i - 1] = s[i] - s[s.size() - i - 1];
      s[i] = s[i] - s[s.size() - i - 1];
    }
  }
};
