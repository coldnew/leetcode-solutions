#include <algorithm>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  void nextPermutation(vector<int>& nums) {
    std::next_permutation(nums.begin(), nums.end());
  }
};
