#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int search(vector<int>& nums, int target) {
    return binary_search(nums, target, 0, nums.size() - 1);
  }

  int binary_search(vector<int>& nums, int target, int start, int end) {
    if (start > end)
      return -1;
    int middle = start + (end - start) / 2;
    if (nums[middle] == target)
      return middle;
    if (nums[middle] > target)
      return binary_search(nums, target, start, middle - 1);
    return binary_search(nums, target, middle + 1, end);
  }
};
