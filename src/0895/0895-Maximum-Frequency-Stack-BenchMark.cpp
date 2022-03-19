#include <benchmark/benchmark.h>
#include <vector>

#include "0895-Maximum-Frequency-Stack.cpp"

#define LEETCODE_BENCHMARK(FreqStackX)            \
  void BM_##FreqStackX(benchmark::State& state) { \
    FreqStackX freqStack;                         \
                                                  \
    for (auto _ : state) {                        \
      freqStack.push(5);                          \
      freqStack.push(7);                          \
      freqStack.push(5);                          \
      freqStack.push(7);                          \
      freqStack.push(4);                          \
      freqStack.push(5);                          \
      freqStack.pop();                            \
      freqStack.pop();                            \
      freqStack.pop();                            \
      freqStack.pop();                            \
      freqStack.pop();                            \
      freqStack.pop();                            \
    }                                             \
  }                                               \
  BENCHMARK(BM_##FreqStackX);

LEETCODE_BENCHMARK(FreqStack1)
LEETCODE_BENCHMARK(FreqStack2)
BENCHMARK_MAIN();
