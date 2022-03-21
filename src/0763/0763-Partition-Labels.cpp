#include <map>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

// ababcbacadefegdehijhklij
// a -> 8
// b -> 3
// c -> 7
// ababcbaca -> last pos is a, 8
//
// d -> 14
// e -> 15
// f -> 11
// g -> 13
// defegde -> last pos is e, 15
//
// i -> 22
// j -> 23
// h -> 19
// k -> 20
// l -> 21
// ijhklij -> last pos is j, 23
//
class Solution1 {
 public:
  vector<int> partitionLabels(string s) {
    int start = 0, end = 0;
    for (auto i = 0; i < s.length(); i++) {
      end = std::max(end, lastOfStr(s[i], s));
      if (end == i) {
        result_.push_back(i - start + 1);
        start = i + 1;
      }
    }

    return result_;
  }

  int lastOfStr(const char c, const std::string& s) {
    int end = 0;
    for (auto i = 0; i < s.length(); i++) {
      if (c == s[i])
        end = i;
    }
    return end;
  }

  std::vector<int> result_;
};

class Solution2 {
 public:
  vector<int> partitionLabels(string s) {
    // record last pos of every alphabet
    for (auto i = 0; i < s.length(); i++)
      pos_[s[i]] = i;

    // find end on pos_
    int start = 0, end = 0;
    for (auto i = 0; i < s.length(); i++) {
      end = std::max(end, pos_[s[i]]);
      if (end == i) {
        result_.push_back(i - start + 1);
        start = i + 1;
      }
    }

    return result_;
  }

  //   alphabet, last pos
  std::map<char, int> pos_;
  std::vector<int> result_;
};
