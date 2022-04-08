#include <queue>
#include <vector>
#include "leetcode_utils.h"

using namespace std;

class KthLargest1 {
 public:
  KthLargest1(int k, vector<int>& nums) {
    for (auto& n : nums) {
      queue_.push(n);
      if (queue_.size() > k)
        queue_.pop();
    }
    k_ = k;
  }

  int add(int val) {
    queue_.push(val);
    if (queue_.size() > k_)
      queue_.pop();
    return queue_.top();
  }

 private:
  std::priority_queue<int, std::vector<int>, std::greater<int>> queue_{};
  int k_;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
