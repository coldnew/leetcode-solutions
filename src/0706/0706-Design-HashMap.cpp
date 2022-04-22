#include <vector>
#include "leetcode_utils.h"

class MyHashMap1 {
 public:
  MyHashMap1() { data_.resize(10000000, -1); }

  void put(int key, int value) { data_[key] = value; }

  int get(int key) { return data_[key]; }

  void remove(int key) { data_[key] = -1; }

 private:
  std::vector<int> data_;
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
