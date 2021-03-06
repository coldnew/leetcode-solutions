#include <map>
#include <stack>
#include "leetcode_utils.h"

//            freq, stack
// std::map::<int, std::stack<int>> stack_;
//
// push(5)
// stack_:  1, [5]
//
// push(7)
// stack_:  1, [5, 7]
//
// push(5)
// stack_:  1, [5, 7]
//          2, [5]
//
// push(7)
// stack_:  1, [5, 7]
//          2, [5, 7]
//
// push(4)
// stack_:  1, [5, 7, 4]
//          2, [5, 7]
// push(5)
// stack_:  1, [5, 7, 4]
//          2, [5, 7]
//          3, [5]
//
// pop() => 5
// stack_:  1, [5, 7, 4]
//          2, [5, 7]
//
// pop() => 7
// stack_:  1, [5, 7, 4]
//          2, [5]
//
// pop() => 5
// stack_:  1, [5, 7, 4]
//
// pop() => 4
// stack_:  1, [5, 7]

class FreqStack1 {
 public:
  FreqStack1() {}

  void push(int val) {
    freq_[val]++;
    stack_[freq_[val]].push(val);
  }

  int pop() {
    auto freq = stack_.begin()->first;
    auto* stack = &stack_.begin()->second;

    int val = stack->top();
    stack->pop();
    freq_[val]--;

    if (stack->empty())
      stack_.erase(freq);

    return val;
  }

  //       char, frequency
  std::map<int, int> freq_;
  //       frequency, stack, sotred by most frequence
  std::map<int, std::stack<int>, std::greater<int>> stack_;
};

// std::map<int, std::stack<int>> timestamp_;
// int tm_ = 0; // simple timestamp
//
// push(5)
// timestamp_:  5, [1]
//
// push(7)
// timestamp_:  5, [1]
//              7, [2]
//
// push(5)
// timestamp_:  5, [1, 3]
//              7, [2]
// push(7)
// timestamp:  5, [1, 3]
//             7, [2, 4]
//
// push(4)
// timestamp_:  5, [1, 3]
//              7, [2, 4]
//              4, [5]
//
// push(5)
// timestamp_:  5, [1, 3, 6]
//              7, [2, 4]
//              4, [5]
//
// pop() => 5
// timestamp_:  5, [1, 3]
//              7, [2, 4]
//              4, [5]
//
// pop() => 7
// timestamp_:  5, [1, 3]
//              7, [2]
//              4, [5]
//
// pop() => 5
// timestamp_:  5, [1]
//              7, [2]
//              4, [5]
//
// pop() => 4
// timestamp_:  5, [1]
//              7, [2]
//

// NOTE: this version will see 'Time Limit' on leetcode.com
class FreqStack2 {
 public:
  FreqStack2() {}

  void push(int val) {
    timestamp_[val].push(tm_++);
    freq_max_ = std::max(freq_max_, static_cast<int>(timestamp_[val].size()));
  }

  int pop() {
    int find = 0;
    int find_char = 0;
    int max_timestamp = 0;
    int max_timestamp_char = 0;
    for (auto& [c, timestamp] : timestamp_) {
      if (timestamp.size() == freq_max_) {
        find++;
        find_char = c;
        if (timestamp_[c].top() > max_timestamp) {
          max_timestamp_char = c;
          max_timestamp = timestamp_[c].top();
        }
      }
    }

    int val = (find == 1) ? find_char : max_timestamp_char;
    timestamp_[val].pop();
    if (timestamp_[val].empty()) {
      timestamp_.erase(val);
    }
    if (find == 1)
      freq_max_--;
    return val;
  }

  //       char, timestamp
  std::map<int, std::stack<int>> timestamp_;
  int tm_ = 0;  // simple timestamp
  int freq_max_ = 0;
};
