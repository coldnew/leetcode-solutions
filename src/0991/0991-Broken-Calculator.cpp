#include "leetcode_utils.h"

#include <iostream>

using namespace std;

class Solution1 {
 public:
  // target = startValue * 2x - 1y;
  //
  //  if (target % 2 == 1)
  //    y = 1;
  //  else
  //    y = 0;
  //
  // ->
  //   startValue = (target + 1) / 2n // when target is odd
  //   startValue = (target) / 2n     // when target is even
  int brokenCalc(int startValue, int target) {
    int count = 0;

    if (startValue >= target)
      return startValue - target;

    while (startValue < target) {
      // target is odd
      if (target & 1)
        target += 1;
      else
        target /= 2;

      count++;
    }

    return count + brokenCalc(startValue, target);
  }
};

class Solution2 {
 public:
  int brokenCalc(int startValue, int target) {
    if (startValue >= target)
      return startValue - target;
    if ((target & 1) == 1)
      return 1 + brokenCalc(startValue, target + 1);
    return 1 + brokenCalc(startValue, target / 2);
  }
};
