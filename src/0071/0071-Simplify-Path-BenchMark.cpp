#include <benchmark/benchmark.h>
#include <vector>

#include "0071-Simplify-Path.cpp"

class TestData {
 public:
  TestData() {
    data.push_back("/home/");
    data.push_back("/../");
    data.push_back("/home//foo/");
    data.push_back("/a/./b/../../c/");
    data.push_back("/a//b////c/d//././/..");
    data.push_back("/...");
    data.push_back("/.");
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
        s.simplifyPath(d);                       \
    }                                            \
  }                                              \
  BENCHMARK(BM_##SolutionX);

LEETCODE_BENCHMARK(Solution1)
LEETCODE_BENCHMARK(Solution2)
BENCHMARK_MAIN();
