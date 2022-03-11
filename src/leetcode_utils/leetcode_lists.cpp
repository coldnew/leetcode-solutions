#include "leetcode_lists.h"
#include <string>

// ref:
// https://github.com/cdsama/LeetCode/blob/afc59f4c4a2b3ca393d7eea22d996a3b5eb2de5d/src/LeetCode.hpp

ListNode* ListCreate(std::initializer_list<int>&& lst) {
  auto iter = lst.begin();
  ListNode* head = lst.size() ? new ListNode(*iter++) : nullptr;
  for (ListNode* cur = head; iter != lst.end(); cur = cur->next)
    cur->next = new ListNode(*iter++);
  return head;
}

void ListNodePrint(ListNode* head) {
  auto* node = head;
  while (node) {
    std::cout << node->val << (node->next ? " -> " : " -> nullptr");
    node = node->next;
  }
  std::cout << std::endl;
}

bool IsListNodeEqual(ListNode* l, ListNode* r) {
  for (auto *curl = l, *curr = r;; curl = curl->next, curr = curr->next) {
    if (curl == nullptr || curr == nullptr)
      return curl == nullptr && curr == nullptr;
    else if (curl->val != curr->val)
      return false;
  }
}

std::string ToString(ListNode* l) {
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

ListNode* ToListNode(const std::string& l) {
  ListNode head(0);
  ListNode* node = &head;
  for (auto& c : l) {
    if ((c == '[') || (c == ',') || (c == ' '))
      continue;
    else if (c == ']')
      break;

    node->next = new ListNode(atoi(&c));
    node = node->next;
  }

  return head.next;
}
