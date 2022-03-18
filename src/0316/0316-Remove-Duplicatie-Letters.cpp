#include <set>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  string removeDuplicateLetters(string s) {
    std::vector<int> freq('z' + 1, 0);
    std::vector<bool> visited('z' + 1, false);

    for (auto c : s)
      freq[c]++;

    string result;
    for (auto c : s) {
      freq[c]--;

      if (visited[c])
        continue;

      if (!result.empty()) {
        char prev = result.back();
        while (prev > c && freq[prev]) {
          visited[prev] = false;
          result.pop_back();
          prev = result.back();
        }
      }

      result += c;
      visited[c] = true;
    }
    return result;
  }
};
