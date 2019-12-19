#include <iostream>
#include <cstring>
#include "Student.h"

/* Finn McKinley
 * 12/19/19
 * Linked Lists Part 1
 */

Student::Student(char* newFirstName, char* newLastName, int newID, float newGPA)
{
  firstName = new char[strlen(newFirstName)+1];
  strcpy(firstName, newFirstName);
  //First name
  lastName = new char[strlen(newLastName)+1];
  strcpy(lastName, newLastName);
  //Last name
  ID = newID;
  //ID
  GPA = newGPA;
  //GPA
}

char* Student::getFirstName()
{//Get the student's first name
  return firstName;
}

char* Student::getLastName()
{//Get the student's last name
  return lastName;
}

int Student::getID()
{//Get the student's ID
  return ID;
}

float Student::getGPA()
{//Get the student's GPA
  return GPA;
}
