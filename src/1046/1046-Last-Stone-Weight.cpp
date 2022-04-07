#include <algorithm>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int lastStoneWeight(vector<int>& stones) {
    int i = stones.size() - 1;
    while (stones.size() != 1) {
      std::sort(stones.begin(), stones.end(), std::less<int>());
      int weight = stones[i] - stones[i - 1];
      stones.erase(stones.begin() + i);
      stones.erase(stones.begin() + i - 1);
      stones.push_back(weight);
      i--;
    }

    return stones.at(0);
  }
};
