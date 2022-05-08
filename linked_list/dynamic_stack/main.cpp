#include <iostream>
#include "dynamic_stack.h"

using namespace std;

int main()
{
    DynamicStack stack1;
    DSItem item;
    int option;

    cout << "\n";
    cout << "Dynamic Stack generator\n";

    do
    {
        cout << "\n";
        cout << "0 - Stop program.\n";
        cout << "1 - Insert element.\n";
        cout << "2 - Remove element.\n";
        cout << "3 - Print stack.\n";

        cin >> option;

        if (option == 1)
        {
            cout << "Write element to insert: \n";
            cin >> item;

            stack1.push(item);
        }

        else if (option == 2)
        {
            item = stack1.pop();

            cout << "Removed element: " << item << endl;
        }
        
        else if (3)
        {
            stack1.print();
        }
    } while (option != 0);

    return 0;
}
