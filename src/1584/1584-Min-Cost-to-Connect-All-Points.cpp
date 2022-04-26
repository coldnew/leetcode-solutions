#include <algorithm>
#include <climits>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int minCostConnectPoints(vector<vector<int>>& points) {
    std::vector<int> ds(points.size(), INT_MAX);

    for (auto i = 1; i < points.size(); i++)
      ds[i] = calDistance(points[0], points[i]);

    int ans = 0;
    for (auto i = 1; i < points.size(); i++) {
      auto it = std::min_element(ds.begin(), ds.end());
      const auto v = std::distance(ds.begin(), it);
      ans += ds[v];
      ds[v] = INT_MAX;
      for (auto i = 0; i < points.size(); i++) {
        if (ds[i] == INT_MAX)
          continue;
        ds[i] = std::min(ds[i], calDistance(points[i], points[v]));
      }
    }

    return ans;
  }

  int calDistance(const std::vector<int>& p1, const std::vector<int>& p2) {
    return abs(p1[0] - p2[0]) + abs(p1[1] - p2[1]);
  }
};
