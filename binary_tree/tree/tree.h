#include <iostream>

#include "../student/student.h"

using namespace std;

struct Node { // pointer to root node
  Student student;
  Node* left;
  Node* right;
};

class BinarySearchTree { // BST
  private:
    Node* root;

  public:
    BinarySearchTree();
    ~BinarySearchTree();

    void deleteTree(Node* currentNode);
    Node* getRoot();

    bool isEmpty();
    bool isFull();

    void insert(Student student);
    void remove(Student student);

    void find(Student& student, bool& found);

    void printInOrder(Node* currentNode); // 
    void printPreOrder(Node* currentNode); // 
    void printPostOrder(Node* currentNode); // 
}

