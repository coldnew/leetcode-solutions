#include "leetcode_utils.h"

#include <algorithm>
#include <vector>

using namespace std;

class Solution1 {
 public:
  vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    //                    row  sum
    std::vector<std::pair<int, int>> scores;
    int i = 0;
    for (auto& row : mat) {
      int sum = 0;
      for (auto& col : row)
        sum += col;
      scores.emplace_back(i++, sum);
    }

    std::sort(
        scores.begin(), scores.end(),
        [](const std::pair<int, int>& a, const std::pair<int, int>& b) -> bool {
          if (a.second == b.second)
            return a.first < b.first;
          return a.second < b.second;
        });

    std::vector<int> result;
    for (auto i = 0; i < k; i++)
      result.push_back(scores[i].first);

    return result;
  }
};
