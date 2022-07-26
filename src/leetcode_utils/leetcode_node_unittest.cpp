#include <gtest/gtest.h>

#include "leetcode_node.cpp"

TEST(LeetCodeNodeTest, ToNode) {
  {
    EXPECT_EQ(nullptr, ToNode(""));
    EXPECT_EQ(nullptr, ToNode("[]"));
  }

  {
    Node* node = ToNode("[[1,null]]");
    EXPECT_EQ(1, node->val);
    EXPECT_EQ(NULL, node->random);
  }

  {
    Node* node = ToNode("[[2,0]]");
    EXPECT_EQ(2, node->val);
    EXPECT_EQ(node, node->random);
  }

  {
    Node* node = ToNode("[[2,1],[1,0]]");

    EXPECT_EQ(2, node->val);
    EXPECT_EQ(node->next, node->random);

    auto* p = node;
    p = p->next;

    EXPECT_EQ(1, p->val);
    EXPECT_EQ(node, p->random);
  }
}

TEST(LeetCodeNodeTest, ToString) {
  {
    Node* node = new Node(1);
    node->random = NULL;

    EXPECT_EQ("[[1,null]]", ToString(node));
  }

  {  // "[[2,1],[1,0],[3,null]]"
    auto* node0 = new Node(2);
    auto* node1 = new Node(1);
    auto* node2 = new Node(3);

    node0->random = node1;
    node0->next = node1;

    node1->random = node0;
    node1->next = node2;

    node2->random = NULL;
    node2->next = NULL;

    Node* node = node0;
    EXPECT_EQ("[[2,1],[1,0],[3,null]]", ToString(node));
  }

  EXPECT_EQ("[[2,1],[1,0],[3,null]]", ToString(NODE("[[2,1],[1,0],[3,null]]")));
  EXPECT_EQ("[[7,null],[13,0],[11,4],[10,2],[1,0]]",
            ToString(NODE("[[7,null],[13,0],[11,4],[10,2],[1,0]]")));
}

TEST(LeetCodeNodeTest, IsNodeEqual) {
  {
    auto node1 = NODE("[[1,0],[2,1]]");
    auto node2 = NODE("[[1,0],[2,1]]");

    EXPECT_FALSE(IsNodeEqual(node1.get(), node2.get()));
  }

  {
    auto node = NODE("[[1,null],[3,0]]");
    EXPECT_TRUE(IsNodeEqual(node.get(), node.get()));
  }
}
