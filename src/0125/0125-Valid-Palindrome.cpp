#include <string>
#include "leetcode_utils.h"
using namespace std;

class Solution1 {
 public:
  bool isPalindrome(string s) { return isPalindrome(s, 0, s.size() - 1); }

  bool isPalindrome(const std::string& s, int left, int right) {
    while (left < right) {
      if (!isAlphaNumberic(s[left])) {
        left++;
        continue;
      }
      if (!isAlphaNumberic(s[right])) {
        right--;
        continue;
      }
      if (tolower(s[left]) != tolower(s[right]))
        return false;
      left++;
      right--;
    }
    return true;
  }
  bool isAlphaNumberic(const char c) { return (isalpha(c) || isdigit(c)); }
};
