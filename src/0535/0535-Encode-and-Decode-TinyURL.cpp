#include <map>
#include <string>
#include "leetcode_utils.h"
using namespace std;

class Solution1 {
 public:
  // Encodes a URL to a shortened URL.
  string encode(string longUrl) {
    std::string url = "https://t/" + std::to_string(key_++);
    map_[url] = longUrl;
    return url;
  }

  // Decodes a shortened URL to its original URL.
  string decode(string shortUrl) { return map_[shortUrl]; }

 private:
  int key_ = 0;
  std::map<std::string, std::string> map_;
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
