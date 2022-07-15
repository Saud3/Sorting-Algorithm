/*
A class is a user-defined data type that we can use in our program,
 and it works as an object constructor, or a "blueprint" for creating objects.
*/
#include <iostream>
#include "Cat.cpp"

using namespace std;



int main(){

    Cat cat; // Create an object of cat
    cat.speak();
    cat.jump();
    
    return 0;

}