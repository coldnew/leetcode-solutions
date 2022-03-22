#include <benchmark/benchmark.h>
#include <map>

#include "1663-Smallest-String-With-A-Given-Numeric-Value.cpp"

class TestData {
 public:
  TestData() {
    data.emplace(2, 27);
    data.emplace(5, 73);
  }

  std::map<int, int> data;
};

TestData t;

#define LEETCODE_BENCHMARK(SolutionX)            \
  void BM_##SolutionX(benchmark::State& state) { \
    SolutionX s;                                 \
                                                 \
    for (auto _ : state) {                       \
      for (auto& [n, k] : t.data)                \
        s.getSmallestString(n, k);               \
    }                                            \
  }                                              \
  BENCHMARK(BM_##SolutionX);

LEETCODE_BENCHMARK(Solution1)
LEETCODE_BENCHMARK(Solution2)
LEETCODE_BENCHMARK(Solution3)
BENCHMARK_MAIN();
