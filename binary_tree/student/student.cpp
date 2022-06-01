#include "student.h"

using namespace std;
 
Student::Student()
{
  ra = -1;
  name = " ";
}

Student::Student(int, ra, string name)
{
  this->ra = ra;
  this->name = name;
}

string Student::getName() 
{
  return name;
}

int Student::getRa()
{
  return ra;
}
