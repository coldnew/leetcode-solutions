#include "leetcode_utils.h"

class Solution1 {
 public:
  bool isPowerOfTwo(int n) { return (n > 0) && !(n & (n - 1)); }
};
