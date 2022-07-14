#include <iostream>
using namespace std;
//Use the switch statement to select one of many code blocks to be executed.
int main()
{
    int val = 3;
    switch (val)
    {
    case 1:
        cout << "value is 1" << endl;
        break;

    case 2:
        cout << "value is 2" << endl;
        break;
    case 3:
        cout << "value is 3" << endl;
        break;

    default:
        cout << "Unrecognized value " << endl;
    }
}