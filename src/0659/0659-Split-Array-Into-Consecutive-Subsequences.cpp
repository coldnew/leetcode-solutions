#include <unordered_map>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  bool isPossible(vector<int>& nums) {
    std::unordered_map<int, int> count;
    std::unordered_map<int, int> tails;
    for (auto& n : nums)
      count[n]++;

    for (auto& n : nums) {
      if (count[n] < 1)
        continue;

      if (tails[n] > 0) {
        tails[n]--;
        tails[n + 1]++;
      } else if (count[n + 1] > 0 && count[n + 2] > 0) {
        count[n + 1]--;
        count[n + 2]--;
        tails[n + 3]++;
      } else
        return false;

      count[n]--;
    }
    return true;
  }
};
