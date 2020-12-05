#include "Node.h"

Node::Node(string value, node_type type, vector<unique_ptr<Node>> childNodes)
{
  this->value = value;
  this->type = type;
  this->childNodes = move(childNodes);
}
Node::Node() { childNodes.clear(); };
Node::~Node() { childNodes.clear(); };
void Node::addChildNode(unique_ptr<Node> childNode)
{
  this->childNodes.push_back(move(childNode));
}