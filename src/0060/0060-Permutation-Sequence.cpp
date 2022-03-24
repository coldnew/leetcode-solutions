#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  string getPermutation(int n, int k, std::string& number) {
    if (n == 1)
      return number;

    std::vector<int> factorial(n, 1);
    for (auto i = 1; i < n; i++)
      factorial[i] = factorial[i - 1] * i;

    int index = k / factorial[n - 1];
    std::string c = std::string(1, number[index]);
    number.erase(number.begin() + index);

    return c + getPermutation(n - 1, k % factorial[n - 1], number);
  }

  string getPermutation(int n, int k) {
    std::string number;
    for (auto i = 1; i <= n; i++)
      number += std::to_string(i);
    return getPermutation(n, k - 1, number);
  }
};
