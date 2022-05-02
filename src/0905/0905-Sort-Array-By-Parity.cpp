#include <algorithm>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  vector<int> sortArrayByParity(vector<int>& nums) {
    std::sort(nums.begin(), nums.end(),
              [](auto& a, auto& b) -> bool { return a % 2 < b % 2; });
    return nums;
  }
};
