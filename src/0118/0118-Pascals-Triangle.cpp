#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  vector<vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> triangle(numRows);
    for (int i = 0; i < numRows; i++) {
      triangle[i].resize(i + 1);
      triangle[i][0] = triangle[i][i] = 1;
      for (int j = 1; j < i; j++)
        triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
    }
    return triangle;
  }
};
