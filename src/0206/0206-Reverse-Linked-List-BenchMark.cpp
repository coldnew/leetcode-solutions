#include <benchmark/benchmark.h>
#include <vector>

#include "0206-Reverse-Linked-List.cpp"

class TestData {
 public:
  TestData() {
    data.push_back(ToListNode("[]"));
    data.push_back(ToListNode("[1]"));
    data.push_back(ToListNode("[6,5]"));
    data.push_back(ToListNode("[8,0,7]"));
    data.push_back(ToListNode("[1,2,3,4,5,6,7,8,9]"));
  }

  std::vector<ListNode*> data;
};

TestData t;

#define LEETCODE_BENCHMARK(SolutionX)            \
  void BM_##SolutionX(benchmark::State& state) { \
    SolutionX s;                                 \
                                                 \
    for (auto _ : state) {                       \
      for (auto& d : t.data)                     \
        s.reverseList(d);                        \
    }                                            \
  }                                              \
  BENCHMARK(BM_##SolutionX);

LEETCODE_BENCHMARK(Solution1)
LEETCODE_BENCHMARK(Solution2)
BENCHMARK_MAIN();
