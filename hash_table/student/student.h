#include <iostream>

using namespace std;

class Student {
  private:
    int ra;
    string name;

  public:
    Student(); // 
    Student(int studentRa, string studentName); // 

    int getRa();
    string getName();
}
