#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{//Student.h file
 public:
  Student(char*, char*, int, float);
  char* getFirstName();
  //Get first name method
  char* getLastName();
  //Get last name method
  int getID();
  //Get ID method
  float getGPA();
  //Get GPA method
 private:
  char* firstName;
  //First name
  char* lastName;
  //Last name
  int ID;
  //ID
  float GPA;
  //GPA
};
#endif
