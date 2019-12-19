#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

void add(Student*, Node**);
//Add prototype
void print(Node*, Node*);
//Print prototype

int main()
{//Main function
  Node* head;
  //Add new students
  add(new Student("Gregory", "Feng", 1, 1.0), &head);
  add(new Student("Jason", "Zheng", 345, 4.0), &head);
  //Print the current list of students
  print(head, head);
  //Add more students
  add(new Student("Finn", "McKinley", 456, 4.0), &head);
  add(new Student("Joe", "Mama", 69, 4.20), &head);
  //Print all students
  print(head, head);
}

void add(Student* newStudent, Node** head)
{//Add function
  Node** current = head;
  if (*current == NULL)
  {//If it's the head
    *head = new Node(newStudent);
    //head->setStudent(newStudent);
  }
  else
  {//Else if it's not the head
    while ((*current)->getNext() != NULL)
    {//While there's another student in the list
      Node* temp = (*current)->getNext();
      current = &temp;
    }
    (*current)->setNext(new Node(newStudent));
    //Current is the next student in the list
  }
}

void print(Node* next, Node* head)
{//Print method
  if (next == head)
  {//If it's the start
    cout << "List:" << endl;
    //Print out "List"
  }
  if (next != NULL)
  {//If there's another entry in the list
    cout << "Student: " << next->getStudent()->getFirstName() << " " << next->getStudent()->getLastName() << " ID: " << next->getStudent()->getID() << " GPA: " << next->getStudent()->getGPA() << endl;
    print(next->getNext(), head);
    //Print out the student
  }
}
