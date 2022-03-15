#include <benchmark/benchmark.h>
#include <vector>

#include "1249-Minimum-Remove-to-Make-Valid-Parentheses.cpp"

class TestData {
 public:
  TestData() {
    data.push_back("))((");
    data.push_back("lee(t(c)o)de)");
  }

  std::vector<std::string> data;
};

TestData t;

#define LEETCODE_BENCHMARK(SolutionX)            \
  void BM_##SolutionX(benchmark::State& state) { \
    SolutionX s;                                 \
                                                 \
    for (auto _ : state) {                       \
      for (auto& d : t.data)                     \
        s.minRemoveToMakeValid(d);               \
    }                                            \
  }                                              \
  BENCHMARK(BM_##SolutionX);

LEETCODE_BENCHMARK(Solution1)
LEETCODE_BENCHMARK(Solution2)
BENCHMARK_MAIN();
