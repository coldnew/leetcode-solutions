#include <stack>
#include <string>

#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  bool isValid(string s) {
    std::stack<char> sp;
    for (auto& c : s) {
      if (sp.empty() || isOpenBracket(c)) {
        sp.push(c);
        continue;
      }

      // since stack store open brackets, and c is the closed bracket,
      // we need to find if they are matched
      auto s = findMatchOpenBracket(c);
      if (s == sp.top())
        sp.pop();
      else
        return false;
    }

    return sp.empty();
  }

  bool isOpenBracket(char c) {
    if ((c == '[') || (c == '(') || (c == '{'))
      return true;
    return false;
  }

  char findMatchOpenBracket(char c) {
    if (c == ']')
      return '[';
    if (c == ')')
      return '(';
    if (c == '}')
      return '{';
    return ' ';
  }
};
