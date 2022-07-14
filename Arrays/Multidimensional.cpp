#include <iostream>

using namespace std;
//A multi-dimensional array is an array of arrays.


int main()
{

    string animals[2][3] = {
        {"dog", "cat", "fox"},
        {"mouse", "squirrel", "rabbit"}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }

    return 0;
}