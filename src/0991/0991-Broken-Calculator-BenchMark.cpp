#include <benchmark/benchmark.h>
#include <map>
#include <vector>
#include "0991-Broken-Calculator.cpp"

class TestData {
 public:
  TestData() {
    data.emplace(2, 3);
    data.emplace(5, 8);
    data.emplace(3, 10);
  }

  std::map<int, int> data;
};

TestData t;

#define LEETCODE_BENCHMARK(SolutionX)            \
  void BM_##SolutionX(benchmark::State& state) { \
    SolutionX s;                                 \
                                                 \
    for (auto _ : state) {                       \
      for (auto& d : t.data)                     \
        s.brokenCalc(d.first, d.second);         \
    }                                            \
  }                                              \
  BENCHMARK(BM_##SolutionX);

LEETCODE_BENCHMARK(Solution1)
LEETCODE_BENCHMARK(Solution2)
BENCHMARK_MAIN();
