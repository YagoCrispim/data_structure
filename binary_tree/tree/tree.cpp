#include <iostream>
#include <cstddef>

#include "./tree.h"

using namespace std;

BinarySearchTree::BinarySearchTree()
{
    root = NULL;
}

BinarySearchTree::~BinarySearchTree(){}

void BinarySearchTree::deleteTree(Node* currentNode){}

Node* BinarySearchTree::getRoot()
{
  return root;
}

bool BinarySearchTree::isEmpty()
{
  return root == NULL;
}

bool BinarySearchTree::isFull()
{
  try {
    Node* temp = new Node; // if node is full, this will throw an exception
    delete temp; // delete the node

    return false; // if node is not full, return false
  }
  catch (bad_alloc) {
    return true;
  }
}

void BinarySearchTree::insert(Student student)
{
  if (isEmpty()) {
    Node* newNode = new Node;

    newNode->student = student;
    newNode->left = NULL;
    newNode->right = NULL;

    if (root == NULL) {
      root = newNode;
    } else {
      Node* temp = root;

      while(temp != NULL) {
        if (student.getRa() < temp->student.getRa()) {
          if (temp->left == NULL) {
            temp->left = newNode;
            break;
          }
          else {
            temp = temp->left;
          }
        }
        else {
          if (temp->right == NULL) {
            temp->right = newNode;
            break;
          }
          else {
            temp = temp->right;
          }
        }
      }
    }
    else {
      cout << "The three is full. Element not inserted.\n";
    }
  }
}

void BinarySearchTree::remove(Student student)
{

}

void BinarySearchTree::find(Student& student, bool& found)
{

}

void BinarySearchTree::printInOrder(Node* currentNode)
{

}

void BinarySearchTree::printPreOrder(Node* currentNode)
{

}

void BinarySearchTree::printPostOrder(Node* currentNode)
{

}

