#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int maxArea(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int area = 0;
    while (left < right) {
      area = std::max(area,
                      (right - left) * std::min(height[left], height[right]));
      if (height[left] < height[right])
        left++;
      else
        right--;
    }
    return area;
  }
};
