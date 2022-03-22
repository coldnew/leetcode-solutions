#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  string getSmallestString(int n, int k) {
    // NOTE:
    // a = 1, b = 2, ... , z = 26
    if (n == 0)
      return "";
    // a1 + a2 + a3 + ... + an >= 26 (assum an min to a, aka, 1)
    if (k - (n - 1) >= 26)
      return getSmallestString(n - 1, k - 26) + 'z';
    // a1 + a2 + a3 + ... + an between 1 ~ 26
    if ((k - (n - 1) >= 1) && ((k - (n - 1)) < 26))
      return getSmallestString(n - 1, n - 1) +
             static_cast<char>('a' + k - (n - 1) - 1);
    return "";
  }
};

// NOTE: This version will 'Time Limit Exceeded'
class Solution2 {
 public:
  string getSmallestString(int n, int k) {
    std::string result;

    // put almost all 'z' at the end
    while (k - 26 >= n) {
      result += "z";
      k -= 26;
      n -= 1;
    }

    // put almost all 'a' at the begin
    // only one char between aaa...z should be found
    int middle = k - n + 1;
    result.insert(0, 1, static_cast<char>('a' + middle - 1));
    n -= 1;
    while (n > 0) {
      result.insert(0, "a");
      n -= 1;
    }
    return result;
  }
};

class Solution3 {
 public:
  string getSmallestString(int n, int k) {
    std::string result;

    // put almost all 'z' at the end
    while (k - 26 >= n) {
      result += "z";
      k -= 26;
      n -= 1;
    }

    // put almost all 'a' at the begin
    // only one char between aaa...z should be found
    int middle = k - n + 1;
    result.insert(0, 1, static_cast<char>('a' + middle - 1));
    n -= 1;
    std::string prefix;
    prefix.append(n, 'a');
    return prefix + result;
  }
};
