#include <stack>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  string minRemoveToMakeValid(string s) {
    const char kInvalidChar = '*';
    std::stack<int> sp;
    for (auto i = 0; i < s.length(); i++) {
      char c = s[i];
      if (c == '(')
        sp.push(i);
      else if (c == ')') {
        if (!sp.empty())
          sp.pop();
        else
          s[i] = kInvalidChar;
      }
    }

    while (!sp.empty()) {
      s[sp.top()] = kInvalidChar;
      sp.pop();
    }

    s.erase(std::remove(s.begin(), s.end(), kInvalidChar), s.end());
    return s;
  }
};
