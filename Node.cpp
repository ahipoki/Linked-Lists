#include <iostream>
#include <cstring>
#include "Node.h"

Node::Node(char* newNode)
{
  node = newNode;
}

Node* Node::getNext()
{
  return node;
}

void Node::setNext(Node*)
{
  
}
