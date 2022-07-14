#include <iostream>
using namespace std;
//To get the size of an array, you can use the sizeof() operator.
int main(){
    int val[] = {3,8,2,9};
    cout << sizeof(val)<< endl;
    cout << sizeof(int)<< endl;
    for (int i = 0; i < sizeof(val)/sizeof(int); i++)
    {
       cout << val[i] << " " << flush;
    }
    cout << endl;

    return 0;
}