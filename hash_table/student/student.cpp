#include "student.h"

// empty stutend
Student::Student()
{
  ra = -1; // available
  name = " ";
}

// student to insert in table
Student::Student(int studentRa, string studentName) {
  ra = studentRa;
  name = studentName;
}

int Student::getRa()
{
  return ra;
}

string Student::getName()
{
  return name;
}

