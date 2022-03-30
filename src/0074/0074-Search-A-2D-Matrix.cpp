#include <algorithm>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for (auto& m : matrix) {
      if (binary_search(m, target, 0, m.size() - 1))
        return true;
    }
    return false;
  }

  bool binary_search(std::vector<int> nums, int target, int start, int end) {
    if (start > end)
      return false;
    int middle = start + (end - start) / 2;
    if (nums[middle] == target)
      return true;
    if (nums[middle] > target)
      return binary_search(nums, target, start, middle - 1);
    return binary_search(nums, target, middle + 1, end);
  }
};

class Solution2 {
 public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for (auto& m : matrix) {
      if (binary_search(m, target))
        return true;
    }
    return false;
  }

  bool binary_search(std::vector<int>& nums, int target) {
    auto it = std::lower_bound(nums.begin(), nums.end(), target);
    if (it == nums.end() || *it != target)
      return false;
    return true;
  }
};

class Solution3 {
 public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for (auto& m : matrix) {
      if (std::binary_search(m.begin(), m.end(), target))
        return true;
    }
    return false;
  }
};
