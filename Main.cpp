#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

void add(int newStudent);
void print(Node* next);

Node* head = NULL;

int main()
{
  add(5);
  print(head);
  add(7);
  print(head);
  add(2);
  print(head);
}

void add(int newStudent)
{
  Node* current = head;
  if (current == NULL)
  {
    head = new Node();
    head->setStudent(newStudent);
  }
  else
  {
    while (current->getNext() != NULL)
    {
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setStudent(newStudent);
  }
}

void print(Node* next)
{
  if (next == head)
  {
    cout << "list:";
  }
  if (next != NULL)
  {
    cout << next->getStudent() << " ";
    print(next->getNext());
  }
}
