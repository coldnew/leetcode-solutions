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
