#include <iostream>
using namespace std;
/*
C++ supports the usual logical conditions from mathematics:

Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
Equal to a == b
Not Equal to: a != b
You can use these conditions to perform different actions for different decisions.

C++ has the following conditional statements:

Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed

*/
int main()
{
    // if statement to specify a block of C++ code to be executed if a condition is true.
    int x = 20;
    int y = 18;
    if (x > y)
    {
        cout << "x is greater than y" << endl;
    }
    // else statement to specify a block of code to be executed if the condition is false.
    int age = 21;
    if (age < 18)
    {
        cout << "child";
    }
    else
    {
        cout << "adult." << endl;
    }

    // else if statement to specify a new condition if the first condition is false.
    int time = 22;
    if (time < 10)
    {
        cout << "Good morning.";
    }
    else if (time < 20)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }

    // Ternary Operator : ternary operator because it consists of three operands.
    // It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements
    //variable = (condition) ? expressionTrue : expressionFalse;
    int t = 20;
    string result = (t < 18) ? "Good day." : "Good evening.";
    cout << result << endl;

    return 0;
}