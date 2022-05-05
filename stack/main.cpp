#include <iostream>
#include "stack.h"

using namespace std;

int main() {
  Stack stack1;
  StackItem item;
  int option;

  cout << "\nStack generator\n";

  do {
    cout << "\n0 - Stop program.\n";
    cout << "1 - Insert element.\n";
    cout << "2 - Remove element.\n";
    cout << "3 - Print stack.\n";
    cout << "4 - Print stack length.\n";

    cin >> option;

    if (option == 1) {
      cout << "Write element to insert: \n";
      cin >> item;

      stack1.push(item);
    } else if (option == 2) {
      item = stack1.pop();

      cout << "Removed element: " << item << endl;
    } else if (3) {
      stack1.print();
    } else if (4) {
      stack1.stackSize();
    }
  } while(option != 0);

  return 0;
}
