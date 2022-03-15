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

class Solution2 {
 public:
  string minRemoveToMakeValid(string s) {
    std::stack<int> sp;       // position of (
    std::stack<int> invalid;  // position of invalid )
    for (auto i = 0; i < s.length(); i++) {
      char c = s[i];
      if (c == '(')
        sp.push(i);
      else if (c == ')') {
        if (!sp.empty())
          sp.pop();
        else
          invalid.push(i);
      }
    }

    // remove not match (
    while (!sp.empty()) {
      s.erase(sp.top(), 1);
      sp.pop();
    }

    // remove invalid char from s
    while (!invalid.empty()) {
      s.erase(invalid.top(), 1);
      invalid.pop();
    }

    return s;
  }
};
