#include <algorithm>
#include <map>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    for (auto& n : nums)
      freqs_[n]++;

    // since std::map can't sort by value, copy to vector instead
    std::vector<std::pair<int, int>> vec(freqs_.begin(), freqs_.end());
    std::sort(vec.begin(), vec.end(),
              [](auto& a, auto& b) -> bool { return a.second > b.second; });

    std::vector<int> ans;
    for (auto i = 0; i < k; i++)
      ans.push_back(vec.at(i).first);

    return ans;
  }

  //       val, freq
  std::map<int, int> freqs_;
};
