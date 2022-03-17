#include <stack>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int scoreOfParentheses(string s) {
    int depth = 0;
    int score = 0;
    for (auto i = 0; i < s.size(); i++) {
      if (s[i] == '(') {
        depth++;
      } else {  // (s[i] == ')')
        depth--;
        if (s[i - 1] == '(')
          score += 1 << depth;
      }
    }
    return score;
  }
};

class Solution2 {
 public:
  int scoreOfParentheses(string s) {
    std::stack<char> sp;
    int score = 0;
    for (auto& c : s) {
      if (c == '(') {
        sp.push(c);
      } else {
        sp.pop();
        if (sp.top() == '(')
          score += 1 << sp.size();
      }
    }
    return score;
  }
};
