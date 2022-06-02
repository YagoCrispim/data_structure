#include "./student/student.h"

class Hash {
  private:
    int HashFunc(Student student);

    int MAX_ITEMS; // always less than the size of the array
    int MAX_POSITIONS; // search: "fator de carga"
    int ITEMS_QUANT; // number of items in the hash table

    Student* structure; // array of students

  public:
    Hash(int length, int maxElements);
    ~Hash();

    bool isFull();
    int getItemsQuant();

    void insert(Student student);
    void delete(Student student);

    // the reason to use reference is change memory address value if the student is found
    Student search(Student& student, bool& found);

    void print();
};
