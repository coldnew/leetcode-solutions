#include <map>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  int numRescueBoats(vector<int>& people, int limit) {
    std::sort(people.begin(), people.end(), std::greater<int>());

    int total_boat = 0;
    int wait_for_rescue = people.size() - 1, rescued = 0;
    while (wait_for_rescue >= rescued) {
      if (people[wait_for_rescue] + people[rescued] <= limit)
        wait_for_rescue -= 1;

      rescued += 1;
      total_boat += 1;
    }

    return total_boat;
  }
};
