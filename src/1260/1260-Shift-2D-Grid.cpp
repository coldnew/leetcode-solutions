#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    k %= n * m;
    if (k == 0)
      return grid;

    std::vector<std::vector<int>> result(n, std::vector<int>(m));
    for (auto i = 0; i < n; i++)
      for (auto j = 0; j < m; j++) {
        int pos = (i * m + j + k) % (n * m);
        result[pos / m][pos % m] = grid[i][j];
      }
    return result;
  }
};
