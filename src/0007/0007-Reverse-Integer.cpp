#include <climits>
#include <cmath>
#include "leetcode_utils.h"

class Solution1 {
 public:
  int reverse(int x) {
    int result = 0;
    while (x != 0) {
      int tail = x % 10;

      if (abs(result) > (INT_MAX / 10))
        return 0;
      result = result * 10 + tail;
      x /= 10;
    }

    return result;
  }
};
