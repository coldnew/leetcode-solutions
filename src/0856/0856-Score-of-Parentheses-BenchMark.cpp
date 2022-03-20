#include <benchmark/benchmark.h>
#include <vector>

#include "0856-Score-of-Parentheses.cpp"

class TestData {
 public:
  TestData() {
    data.push_back("()");
    data.push_back("()()");
    data.push_back("(())");
    data.push_back("()(()))");
  }

  std::vector<std::string> data;
};

TestData t;

#define LEETCODE_BENCHMARK(SolutionX)            \
  void BM_##SolutionX(benchmark::State& state) { \
    SolutionX s;                                 \
    for (auto _ : state) {                       \
      for (auto& d : t.data)                     \
        s.scoreOfParentheses(d);                 \
    }                                            \
  }                                              \
  BENCHMARK(BM_##SolutionX);

LEETCODE_BENCHMARK(Solution1)
BENCHMARK_MAIN();
