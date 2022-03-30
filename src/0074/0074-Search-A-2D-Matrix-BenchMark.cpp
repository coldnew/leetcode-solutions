#include <benchmark/benchmark.h>
#include <map>
#include <vector>
#include "0074-Search-A-2D-Matrix.cpp"

class TestData {
 public:
  TestData() {
    {
      std::vector<std::vector<int>> matrix = {
          {1, 3, 5, 7},
          {10, 11, 16, 20},
          {23, 30, 34, 60},
      };
      data.emplace(matrix, 60);
    }
  }

  std::map<std::vector<std::vector<int>>, int> data;
};

TestData t;

#define LEETCODE_BENCHMARK(SolutionX)                                       \
  void BM_##SolutionX(benchmark::State& state) {                            \
    SolutionX s;                                                            \
                                                                            \
    for (auto _ : state) {                                                  \
      for (auto& d : t.data)                                                \
        s.searchMatrix(const_cast<std::vector<std::vector<int>>&>(d.first), \
                       d.second);                                           \
    }                                                                       \
  }                                                                         \
  BENCHMARK(BM_##SolutionX);

LEETCODE_BENCHMARK(Solution1)
LEETCODE_BENCHMARK(Solution2)
LEETCODE_BENCHMARK(Solution3)
BENCHMARK_MAIN();
