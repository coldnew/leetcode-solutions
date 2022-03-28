#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  bool search(vector<int>& nums, int target) {
    for (auto& n : nums)
      if (n == target)
        return true;
    return false;
  }
};
