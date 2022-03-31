#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int splitArray(vector<int>& nums, int m) {
    // find result range in left....right
    int left = 0, right = 0;
    for (auto& num : nums) {
      left = std::max(num, left);
      right += num;
    }

    while (left < right) {
      int middle = left + ((right - left) >> 1);
      if (subArrayCount(nums, middle) <= m)
        right = middle;
      else
        left = middle + 1;
    }

    return left;
  }

  int subArrayCount(vector<int>& nums, int max) {
    int count = 1, sum = 0;
    for (auto& num : nums) {
      sum += num;
      if (sum > max) {
        count++;
        sum = num;
      }
    }
    return count;
  }
};
