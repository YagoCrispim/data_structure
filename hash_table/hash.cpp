#include <iostream>
#include "hash.h"

using namespace std;

int Hash::HashFunc(Student student)
{
  return (aluno.getRa() % MAX_POSITIONS);
}


Hash::Hash(int length, int maxElements)
{
  ITEMS_QUANT = 0;
  MAX_ITEMS = maxElements;
  MAX_POSITIONS = length;

  structure = new Student[length];
}

Hash::~Hash() 
{ 
  delete[] structure;
}

bool Hash::isFull() 
{ 
  return (ITEMS_QUANT == MAX_ITEMS);
}

int Hash::getItemsQuant() 
{ 
  return ITEMS_QUANT;
}

void Hash::insert(Student student) 
{ 
  int positionToInsert = HashFunc(student);
  structure[positionToInsert] = student;
  ITEMS_QUANT++;
}

void Hash::delete(Student student) 
{ 
   int positionToRemove = HashFunc(student);
   structure[positionToRemove] = -1;

   if (structure[positionToRemove].getRa() != -1) {
    structure[positionToRemove] = Student(-1, " ");
    ITEMS_QUANT--;
   }
}

Student Hash::search(Student& studentRef, bool& found)
{
  int studentPosition = HashFunc(student);
  Student studentInsideStructure = structure[studentPosition];

  if (student.getRa() == studentInsideStructure.getRa()) {`
    found = true;
    student = studentInsideStructure;
  } else {
    found = false;
  }
}

void Hash::print()
{
  cout << "Hash Table: " << endl;
}

