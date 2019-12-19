#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

/* Finn McKinley
 * 12/19/19
 * Linked Lists Part 1
 */

using namespace std;

Node::Node(Student* s)
{//Node function
  student = s;
  next = NULL;
}

Node::~Node()
{//Node destructor
  delete student;
  next = NULL;
}

void Node::setStudent(Student* newStudent)
{//Set student method
  student = newStudent;
}

Student* Node::getStudent()
{//Get student method
  return student;
  //Return student
}

void Node::setNext(Node* newNext)
{//Set next method
  next = newNext;
}

Node* Node::getNext()
{//Get next method
  return next;
  //Return next
}
