/*
A constructor  is a special method that is automatically called when an object of a class is created.


*/
#include <iostream>
#include "Cat.cpp"

using namespace std;

int main(){
    cout << "Starting program ..." << endl;

    Cat bob;
    bob.speak();

    cout << "Ending program ..." << endl;




    return 0;
}