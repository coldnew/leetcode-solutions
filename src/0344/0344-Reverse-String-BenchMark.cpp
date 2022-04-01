#include <benchmark/benchmark.h>

#include "0344-Reverse-String.cpp"

class TestData {
 public:
  TestData() {
    {
      std::vector<char> str = {
          'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
          'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
          'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
          'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
      };
      data.push_back(str);
    }
  }

  std::vector<std::vector<char>> data;
};

TestData t;

#define LEETCODE_BENCHMARK(SolutionX)            \
  void BM_##SolutionX(benchmark::State& state) { \
    SolutionX s;                                 \
                                                 \
    for (auto _ : state) {                       \
      for (auto& str : t.data)                   \
        s.reverseString(str);                    \
    }                                            \
  }                                              \
  BENCHMARK(BM_##SolutionX);

LEETCODE_BENCHMARK(Solution1)
LEETCODE_BENCHMARK(Solution2)
BENCHMARK_MAIN();
