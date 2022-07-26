#include "leetcode_node.h"
#include "leetcode_string.h"

#include <algorithm>
#include <map>
#include <string>
#include <vector>

class NodeT : public Node {
 public:
  int random_index = -1;  // -1 denote random->nullptr

  explicit NodeT(int _val) : Node(_val) {}
};

Node* ToNode(const std::string& str) {
  if ((str == "[]") || (str == ""))
    return nullptr;

  NodeT* head = nullptr;
  NodeT* head_ptr = nullptr;

  // node_map store  <index, current Node ptr>
  std::map<int, NodeT*> node_map;

  // first split str to find match group
  // [[7,null],[13,0],[11,4],[10,2],[1,0]]
  // ->
  //   [[7,null]
  //   13,0]
  //   11,4]
  //   10,2]
  //   1,0]]
  auto elms = StringSplit(str, ",[");
  int index = 0;
  for (auto& e : elms) {
    // split through every element
    // [[7,null]
    // ->
    //   7
    //   null
    auto nelms = StringSplit(StringRemoveSquareBreaket(e), ",");
    auto* node = new NodeT(std::stoi(nelms.front()));

    if (nelms.back() == "null")
      node->random_index = -1;  // denote random->nullptr
    else
      node->random_index = std::stoi(nelms.back());
    node_map.insert(std::pair<int, NodeT*>(index, node));
    index++;

    if (!head) {
      head = node;
      head_ptr = head;
    } else {
      head->next = node;
      head = static_cast<NodeT*>(head->next);
    }
  }

  // update random ptr
  for (auto* p = head_ptr; p; p = static_cast<NodeT*>(p->next)) {
    if (p->random_index == -1) {
      p->random = NULL;
      continue;
    }
    p->random = node_map[p->random_index];
  }

  // cast back to Node* instead of our NodeT*
  return static_cast<Node*>(head_ptr);
}

std::string ToString(Node* node) {
  // build node_map first
  std::map<Node*, int> node_map;
  int index = 0;
  for (auto* p = node; p; p = p->next) {
    node_map.insert(std::pair<Node*, int>(p, index));
    index++;
  }

  std::string result = "[";
  while (node) {
    result += "[";
    result += std::to_string(node->val);
    result += ",";
    if (node->random == NULL)
      result += "null";
    else
      result += std::to_string(node_map[node->random]);
    result += "]";

    node = node->next;
    if (node)
      result += ",";
  }
  result += "]";
  return result;
}

std::string ToString(std::shared_ptr<Node> node) {
  return ToString(node.get());
}

bool IsNodeEqual(Node* node1, Node* node2) {
  for (auto *p1 = node1, *p2 = node2; p1;) {
    if (p1 == p2)
      return true;
    p1 = p1->next;
    p2 = p2->next;
  }

  return false;
}

void NodeDestroy(Node* node) {
  if (node)
    delete node;
}
