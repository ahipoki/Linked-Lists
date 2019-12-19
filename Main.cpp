#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

void add(Student*, Node**);
void print(Node*, Node*);

int main()
{
  Node* head;
  add(new Student("Gregory", "Feng", 1, 1.0), &head);
  add(new Student("Jason", "Zheng", 345, 4.0), &head);
  print(head, head);
  add(new Student("Finn", "McKinley", 456, 4.0), &head);
  add(new Student("Joe", "Mama", 69, 4.20), &head);
  print(head, head);
  //cout << "Test" << endl;
}

void add(Student* newStudent, Node** head)
{
  Node** current = head;
  if (*current == NULL)
  {
    *head = new Node(newStudent);
    //head->setStudent(newStudent);
  }
  else
  {
    while ((*current)->getNext() != NULL)
    {
      Node* temp = (*current)->getNext();
      current = &temp;
    }
    (*current)->setNext(new Node(newStudent));
    //current->getNext()->setStudent(newStudent);
  }
}

void print(Node* next, Node* head)
{
  //Node* head;
  if (next == head)
  {
    cout << "List:" << endl;
  }
  if (next != NULL)
  {
    cout << "Student: " << next->getStudent()->getFirstName() << " " << next->getStudent()->getLastName() << " ID: " << next->getStudent()->getID() << " GPA: " << next->getStudent()->getGPA() << endl;
    print(next->getNext(), head);
  }
}
