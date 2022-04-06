#include <unordered_map>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int threeSumMulti(vector<int>& arr, int target) {
    long times = 0;
    for (auto& n : arr)
      freqs_[n]++;

    for (auto& a : freqs_) {
      for (auto& b : freqs_) {
        int i = a.first, j = b.first, k = target - i - j;
        if (!freqs_.count(k))
          continue;

        if (i == j && j == k)
          times += freqs_[i] * (freqs_[i] - 1) * (freqs_[i] - 2) / 6;
        else if (i == j && j != k)
          times += freqs_[i] * (freqs_[i] - 1) / 2 * freqs_[k];
        else if (i < j && j < k)
          times += freqs_[i] * freqs_[j] * freqs_[k];
      }
    }

    return times % mod_;
  }

  const long mod_ = 1e9 + 7;
  std::unordered_map<int, long> freqs_;
};
