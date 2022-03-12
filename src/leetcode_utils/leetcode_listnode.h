#ifndef _LEETCODE_LISTNODE_H_
#define _LEETCODE_LISTNODE_H_

#include <initializer_list>
#include <iostream>

struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// My extra utils
ListNode* ListNodeCreate(std::initializer_list<int>&& lst);

#define LISTNODE(...) ListNodeCreate({__VA_ARGS__})

void ListNodePrint(ListNode* head);
bool IsListNodeEqual(ListNode* l, ListNode* r);

std::string ToString(ListNode* l);

ListNode* ToListNode(const std::string& l);

#endif /* _LEETCODE_LISTNODE_H_ */
