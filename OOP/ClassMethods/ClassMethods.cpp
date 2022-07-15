/*
Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:

Inside class definition
Outside class definition

*/
#include <iostream>
#include "Cat.cpp"

using namespace std;

int main(){
    Cat jim; // Create an object of cat
    jim.happy = false;
    jim.speak();    // Call the method

    Cat bob;
    bob.happy = true;
    bob.speak();
    return 0;
}