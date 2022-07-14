#include <iostream>
using namespace std;
/*
Information can be passed to functions as a parameter. Parameters act as variables inside the function.
Parameters are specified after the function name, inside the parentheses. 
You can add as many parameters as you want, just separate them with a comma.
*/
void showMenu()
{
    cout << " 1. Search : " << endl;
    cout << " 2. View ecord : " << endl;
    cout << " 3. Quit : " << endl;
}

int getInput()
{
    cout << "Enter Selection : " << flush;
    int input;
    cin >> input;

    return input;
}
void processSelection(int option)
{

    switch (option)
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
}

int main()
{
    showMenu();
    int selection = getInput();
    processSelection(selection);

    return 0;
}