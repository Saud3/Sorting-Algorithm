#include <iostream>
using namespace std;
/*
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array, define the variable type, 
specify the name of the array followed by square brackets and specify the number of elements it should store:
*/

int main(){

    cout << "Array of integers " << endl;

    int val[3];
    val[0]= 88;
    val[1]= 12;
    val[2]= 3;

    cout << val[0] << endl;
    cout << val[1] << endl;
    cout << val[2] << endl;

    for(int i=0;i<3;i++){
    cout << "Elment at index" << i <<":"<<val[i]<<endl;
}

cout << "######################## " << endl;
cout << "Array of doubles " << endl;
double num[3] = {3.4,5.6,9.1};

for(int i=0;i<3;i++){
    cout << "Elment at index" << i <<":"<<num[i]<<endl;
}

    
}