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
