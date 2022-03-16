#include <benchmark/benchmark.h>
#include <vector>

#include "0946-Validate-Stack-Sequences.cpp"

struct Data {
  std::vector<int> pushed;
  std::vector<int> popped;
};

class TestData {
 public:
  TestData() {
    {
      struct Data d;
      d.pushed = {1, 2, 3, 4, 5};
      d.popped = {4, 5, 3, 2, 1};
      data.push_back(d);
    }

    {
      struct Data d;
      d.pushed = {2, 1, 0};
      d.popped = {1, 2, 0};
      data.push_back(d);
    }
  }

  std::vector<struct Data> data;
};

TestData t;

#define LEETCODE_BENCHMARK(SolutionX)                 \
  void BM_##SolutionX(benchmark::State& state) {      \
    SolutionX s;                                      \
                                                      \
    for (auto _ : state) {                            \
      for (auto& d : t.data)                          \
        s.validateStackSequences(d.pushed, d.popped); \
    }                                                 \
  }                                                   \
  BENCHMARK(BM_##SolutionX);

LEETCODE_BENCHMARK(Solution1)
LEETCODE_BENCHMARK(Solution2)
BENCHMARK_MAIN();
