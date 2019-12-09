#include <iostream>
#include <cstring>
#include "Student.h"

Student::Student(char* newFirstName, char* newLastName, int newID, float newGPA)
{
  firstName = new char[strlen(newFirstName)+1];
  strcpy(firstName, newFirstName);
  lastName = new char[strlen(newLastName)+1];
  strcpy(lastName, newLastName);
  ID = newID;
  GPA = newGPA;
}

char* Student::getFirstName()
{
  return firstName;
}

char* Student::getLastName()
{
  return lastName;
}

int Student::getID()
{
  return ID;
}

float Student::getGPA()
{
  return GPA;
}
