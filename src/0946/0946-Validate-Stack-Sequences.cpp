#include "leetcode_utils.h"

#include <stack>
#include <vector>

using namespace std;

class Solution1 {
 public:
  bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    std::stack<int> sp;
    int i = 0, j = 0;

    while (j < popped.size()) {
      if (!sp.empty() && sp.top() == popped[j]) {
        sp.pop();
        j++;
      } else if (i < popped.size())
        sp.push(pushed.at(i++));
      else
        return false;
    }

    return true;
  }
};

class Solution2 {
 public:
  bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    std::stack<int> sp;
    int i = 0;
    for (auto& p : pushed) {
      sp.push(p);
      while (!sp.empty() && sp.top() == popped[i]) {
        sp.pop();
        i++;
      }
    }

    return sp.empty();
  }
};
