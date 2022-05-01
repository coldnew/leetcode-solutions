#include <stack>
#include <string>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  bool backspaceCompare(string s, string t) {
    auto s1 = stringToStack(s);
    auto t1 = stringToStack(t);

    return backspaceCompare(s1, t1);
  }

 private:
  std::stack<char> stringToStack(const std::string& s) {
    std::stack<char> stack;
    for (auto& c : s) {
      if (c == '#') {
        if (!stack.empty())
          stack.pop();
        continue;
      }
      stack.push(c);
    }
    return stack;
  }

  bool backspaceCompare(std::stack<char>& s, std::stack<char>& t) {
    if (s.size() != t.size())
      return false;

    while (!s.empty() && !t.empty()) {
      if (s.top() != t.top())
        return false;
      s.pop();
      t.pop();
    }

    return true;
  }
};
