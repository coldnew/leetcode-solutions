#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int twoCitySchedCost(vector<vector<int>>& costs) {
    // find min cost to go to A city, which means (A1 - B1) < (A2 - B2)
    std::sort(costs.begin(), costs.end(),
              [](std::vector<int>& a, std::vector<int>& b) -> bool {
                return (a[0] - a[1]) < (b[0] - b[1]);
              });

    int sum = 0;
    for (auto i = 0; i < costs.size(); i++) {
      if (i < costs.size() / 2)
        sum += costs[i][0];  // city A
      else
        sum += costs[i][1];  // city B
    }

    return sum;
  }
};
