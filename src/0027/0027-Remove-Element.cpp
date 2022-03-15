#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int removeElement(vector<int>& nums, int val) {
    int index = 0;
    for (auto i = 0; i < nums.size(); i++) {
      if (nums[i] != val)
        nums[index++] = nums[i];
    }
    return index;
  }
};
