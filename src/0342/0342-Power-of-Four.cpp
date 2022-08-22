#include "leetcode_utils.h"

class Solution1 {
 public:
  bool isPowerOfFour(int n) {
    if (n < 1)
      return false;
    if (n & (n - 1))
      return false;
    if (n & 0x55555555)
      return true;
    return false;
  }
};

class Solution2 {
 public:
  bool isPowerOfFour(int n) {
    if (n == 1)
      return true;
    while (n != 0) {
      if (n % 4 != 0)
        return false;
      n %= 4;
    }
    return true;
  }
};
