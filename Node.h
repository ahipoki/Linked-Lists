#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node
{
 public:
  Node();
  ~Node();
  void setStudent(Student* newStudent);
  int getStudent();
  void setNext(Node* newNext);
  Node* getNext();
 private:
  Student* student;
  Node* next;
};
#endif
