/*
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this,
 you must declare class variables/attributes as private (cannot be accessed from outside the class). 
If you want others to read or modify the value of a private member, you can provide public get and set methods.
*/

#include <iostream>
#include "Person.cpp"
#include "Person.h"
using namespace std;

int main(){
    Person person;
    person.setName("Ahmed");
    cout << person.toString() << endl;

    cout << "name of Person with get method "<< person.getName() << endl;

    return 0;
}
