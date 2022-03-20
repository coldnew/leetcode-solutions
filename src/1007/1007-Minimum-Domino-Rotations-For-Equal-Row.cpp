#include <map>
#include <stack>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
    int max_freq = 0, domino = 0;
    for (auto i = 0; i < tops.size(); i++) {
      freq_[tops[i]]++;
      freq_[bottoms[i]]++;
      if (freq_[tops[i]] > max_freq) {
        max_freq = freq_[tops[i]];
        domino = tops[i];
      }
      if (freq_[bottoms[i]] > max_freq) {
        max_freq = freq_[bottoms[i]];
        domino = bottoms[i];
      }
    }

    if (max_freq < tops.size())
      return -1;

    int swap_top = 0;
    int swap_bottom = 0;
    for (auto i = 0; i < tops.size(); i++) {
      if ((tops[i] == domino) && bottoms[i] == domino)
        continue;
      else if ((tops[i] != domino) && (bottoms[i] != domino))
        return -1;
      else if (bottoms[i] != domino)
        swap_bottom++;
      else if (tops[i] != domino)
        swap_top++;
    }
    return std::min(swap_top, swap_bottom);
  }

  //       ith domino, freq
  std::map<int, int, std::greater<int>> freq_;
};

// 2, 1, 2, 4, 2, 2
// 5, 2, 6, 2, 3, 2
// u, d, u, d, u, u
// -> 2

// 3, 5, 1, 2, 3
// 3, 6, 3, 3, 4
// o, x, d, d, u
// -> -1
