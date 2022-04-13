#include <iostream>
#include <vector>
#include "leetcode_utils.h"
using namespace std;

class Solution1 {
 public:
  enum Direction {
    Right = 0,
    Down,
    Left,
    Up,
  };

  vector<vector<int>> generateMatrix(int n) {
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));
    int val = 1;
    int left = 0, right = n - 1, top = 0, bottom = n - 1;

    int direction = Right;
    while (val <= n * n) {
      if (direction == Right) {
        for (auto i = left; i <= right; i++)
          matrix[top][i] = val++;
        top++;
        direction = Down;
      } else if (direction == Down) {
        for (auto i = top; i <= bottom; i++)
          matrix[i][right] = val++;
        right--;
        direction = Left;
      } else if (direction == Left) {
        for (auto i = right; i >= left; i--)
          matrix[bottom][i] = val++;
        bottom--;
        direction = Up;
      } else if (direction == Up) {
        for (auto i = bottom; i >= top; i--)
          matrix[i][left] = val++;
        left++;
        direction = Right;
      }
    }
    return matrix;
  }
};
