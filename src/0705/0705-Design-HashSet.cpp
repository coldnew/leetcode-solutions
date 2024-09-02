#include <list>
#include <set>
#include "leetcode_utils.h"

class MyHashSet1 {
 public:
  MyHashSet1() {}

  void add(int key) { set_.emplace(key); }

  void remove(int key) { set_.erase(key); }

  bool contains(int key) { return set_.count(key); }

 private:
  std::set<int> set_;
};

class MyHashSet2 {
 public:
  MyHashSet2() {}

  void add(int key) {
    if (contains(key))
      return;
    list_.push_back(key);
  }

  void remove(int key) {
    for (auto it = list_.begin(); it != list_.end();) {
      if (*it == key)
        it = list_.erase(it);
      else
        ++it;
    }
  }

  bool contains(int key) {
    for (auto& l : list_) {
      if (l == key)
        return true;
    }
    return false;
  }

 private:
  std::list<int> list_;
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
