#include <map>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int findDuplicate(vector<int>& nums) {
    std::map<int, int> m;
    for (auto& n : nums)
      m[n]++;

    for (auto& [k, v] : m) {
      if (v >= 2)
        return k;
    }
    return -1;
  }
};
