/*
cout: is used to output (print) values. Now we will use cin to get user input.
cin : is a predefined variable that reads data from the keyboard with the extraction operator (>>).
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int sum;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "Sum is: " << sum << endl;

    return 0;
}