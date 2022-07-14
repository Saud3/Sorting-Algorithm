#include <iostream>
using namespace std;
/*
A function is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
*/
void showMenu()
{
    cout << " 1. Search : " << endl;
    cout << " 2. View ecord : " << endl;
    cout << " 3. Quit : " << endl;
}

int main()
{

    showMenu();
    cout << "Enter Selection : " << flush;
    int input;
    cin >> input;

    switch (input)
    {
    case 1:
        cout << "Searching ..." << endl;
        break;

    case 2:
        cout << "Viewing ..." << endl;
        break;
    case 3:
        cout << "Quitting ..." << endl;
        break;

    default:
        cout << "Please select an item from the menu. " << endl;
    }

    return 0;
}
