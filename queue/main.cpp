#include <iostream>
#include "queue.h"

using namespace std;

int main() {
  Queue queue1;
  int option;
  QueueItem item;

  cout << "Queue generator\n";

  do {
    cout << "\n0 - Stop program\n";
    cout << "1 - Enqueue element\n";
    cout << "2 - Dequeue element\n";
    cout << "3 - Print queue\n";
    cout << "Option: ";

    cin >> option;

    if (option == 1) {
      
      cout << "\nElement to enqueue: ";
      cin >> item;

      queue1.enqueue(item);

    } else if (option == 2) {
      
      item = queue1.dequeue();
      cout << "\nRemoved element: " << item << endl;
      queue1.print();

    } else if (option == 3) {

      queue1.print();

    } else {
      
      cout << "\nInvalid option!\n";

    }
  } while (option != 0);

  return 0;
}
