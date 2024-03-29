#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Student.h"

/* Finn McKinley
 * 12/19/19
 * Linked Lists Part 1
*/

using namespace std;

class Node
{//Node.h file
 public:
  Node(Student*);
  ~Node();
  //Node destructor
  void setStudent(Student* newStudent);
  //Set student
  Student* getStudent();
  //Get student
  void setNext(Node* newNext);
  //Set next
  Node* getNext();
  //Get next
 private:
  Student* student;
  //Student
  Node* next;
  //Next
};
#endif
