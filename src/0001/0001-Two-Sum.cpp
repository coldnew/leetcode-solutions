#include <vector>
#include "leetcode_utils.h"

using namespace std;
class Solution1 {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    for (auto i = 0; i < nums.size(); i++) {
      for (auto j = i + 1; j < nums.size(); j++)
        if (nums[i] + nums[j] == target)
          return {i, j};
    }
    return {};
  }
};
