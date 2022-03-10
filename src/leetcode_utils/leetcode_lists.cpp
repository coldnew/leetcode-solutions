#include "leetcode_lists.h"

// ref:
// https://github.com/cdsama/LeetCode/blob/afc59f4c4a2b3ca393d7eea22d996a3b5eb2de5d/src/LeetCode.hpp

ListNode* ListCreate(std::initializer_list<int>&& lst) {
  auto iter = lst.begin();
  ListNode* head = lst.size() ? new ListNode(*iter++) : nullptr;
  for (ListNode* cur = head; iter != lst.end(); cur = cur->next) {
    cur->next = new ListNode(*iter++);
  }
  return head;
}

void ListPrint(ListNode* head) {
  auto* node = head;
  while (node) {
    std::cout << node->val << " -> ";
    node = node->next;
  }
  std::cout << std::endl;
}

bool ListEquals(ListNode* l, ListNode* r) {
  for (auto *curl = l, *curr = r;; curl = curl->next, curr = curr->next) {
    if (curl == nullptr || curr == nullptr)
      return curl == nullptr && curr == nullptr;
    else if (curl->val != curr->val)
      return false;
  }
}

std::string ListString(ListNode* l) {
  std::string result = "[";

  while (l) {
    result += std::to_string(l->val);
    l = l->next;
    if (l)
      result += ",";
  }

  result += "]";
  return result;
}
