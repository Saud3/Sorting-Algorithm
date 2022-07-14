#include <iostream>
using namespace std;

int main()
{
    // Assignment Operators : used to assign values to variables.
    /*
    =	x = 5	x = 5
    +=	x += 3	x = x + 3
    -=	x -= 3	x = x - 3
    *=	x *= 3	x = x * 3
    /=	x /= 3	x = x / 3
    %=	x %= 3	x = x % 3
    &=	x &= 3	x = x & 3
    |=	x |= 3	x = x | 3
    ^=	x ^= 3	x = x ^ 3
    >>=	x >>= 3	x = x >> 3
    <<=	x <<= 3	x = x << 3
    */
    int a = 10;
    a += 5;
    cout << a << endl;

    // Comparison Operators : used to compare two values.
    /*
    ==	Equal to	x == y
    !=	Not equal	x != y
    >	Greater than	x > y
    <	Less than	x < y
    >=	Greater than or equal to	x >= y
    <=	Less than or equal to	x <= y
    */
    int x = 5;
    int y = 3;
    cout << (x > y) << endl; // returns 1 (true) because 5 is greater than 3

    //Logical Operators : used to determine the logic between variables or values.
    /*
    && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10	
    || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4	
    !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)
    */
   cout << (x > 3 && x < 10) <<endl; // returns true (1) because 5 is greater than 3 AND 5 is less than 10
   cout << (x > 3 || x < 4)<<endl; // returns true (1) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
   cout << (!(x > 3 && x < 10))<<endl; // returns false (0) because ! (not) is used to reverse the result


    return 0;
}