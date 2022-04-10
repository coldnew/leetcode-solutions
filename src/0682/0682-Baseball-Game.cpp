#include <numeric>
#include <vector>

#include "leetcode_utils.h"
using namespace std;

class Solution1 {
 public:
  int calPoints(vector<string>& ops) {
    std::vector<int> records;
    for (const auto& op : ops) {
      if (op == "+")
        records.emplace_back(records[records.size() - 2] + records.back());
      else if (op == "D")
        records.emplace_back(2 * records.back());
      else if (op == "C")
        records.pop_back();
      else
        records.emplace_back(stoi(op));
    }
    return std::accumulate(records.begin(), records.end(), 0);
  }
};
