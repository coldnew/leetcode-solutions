#include <benchmark/benchmark.h>
#include <vector>

#include "0763-Partition-Labels.cpp"

class TestData {
 public:
  TestData() {
    data.push_back("ababcbacadefegdehijhklij");
    data.push_back("eccbbbbdec");
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
        s.partitionLabels(d);                    \
    }                                            \
  }                                              \
  BENCHMARK(BM_##SolutionX);

LEETCODE_BENCHMARK(Solution1)
LEETCODE_BENCHMARK(Solution2)
BENCHMARK_MAIN();
