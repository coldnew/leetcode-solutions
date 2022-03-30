#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int minNumberOperations(vector<int>& target) {
    int count = target[0];
    for (auto i = 1; i < target.size(); i++)
      count += max(target[i] - target[i - 1], 0);
    return count;
  }
};
