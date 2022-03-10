#ifndef _LEETCODE_LISTS_H_
#define _LEETCODE_LISTS_H_

#include <gtest/gtest.h>
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
ListNode* ListCreate(std::initializer_list<int>&& lst);

#define LIST(...) ListCreate({__VA_ARGS__})

void ListPrint(ListNode* head);
bool ListEquals(ListNode* l, ListNode* r);

std::string ListString(ListNode* l);

#define EXPECT_LIST_EQ(val1, val2) EXPECT_EQ(val1, ListString(val2))

#endif /* _LEETCODE_LISTS_H_ */
