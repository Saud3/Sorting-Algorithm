#include<iostream>

using namespace std;

/*
The while loop loops through a block of code as long as a specified condition is true:
    while (condition) {
  // code block to be executed
}
*/
int main() {

    int i = 0;
    while(i<5){
        cout << "Hello World " << i << endl;
        i = i + 1;
    }


    return 0;
}