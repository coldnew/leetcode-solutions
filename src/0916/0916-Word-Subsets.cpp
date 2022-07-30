#include <vector>
#include "leetcode_utils.h"

using namespace std;

class Solution1 {
 public:
  vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    std::vector<int> words2Freq = calFreqs(words2[0]);
    for (auto i = 0; i < words2.size(); i++) {
      std::vector<int> words2ChildFreq = calFreqs(words2[i]);
      for (auto j = 0; j < 26; j++)
        words2Freq[j] = std::max(words2Freq[j], words2ChildFreq[j]);
    }

    std::vector<std::string> result;
    for (auto& w : words1) {
      std::vector<int> words1ChildFreq = calFreqs(w);
      bool ok = true;
      for (int i = 0; i < 26; i++) {
        if (words1ChildFreq[i] < words2Freq[i]) {
          ok = false;
          break;
        }
      }
      if (ok)
        result.push_back(w);
    }

    return result;
  }

 private:
  std::vector<int> calFreqs(const std::string& word) {
    std::vector<int> freq(26, 0);
    for (auto& c : word)
      freq[c - 'a']++;
    return freq;
  }
};
