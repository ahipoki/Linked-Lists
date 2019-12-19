#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

Node::Node(Student* s)
{
  student = s;
  next = NULL;
}

Node::~Node()
{
  delete student;
  next = NULL;
}

void Node::setStudent(Student* newStudent)
{
  student = newStudent;
}

Student* Node::getStudent()
{
  return student;
}

void Node::setNext(Node* newNext)
{
  next = newNext;
}

Node* Node::getNext()
{
  return next;
}
