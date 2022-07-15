#include "Person.h"

Person::Person(){
    name = "Mohammed";
}

string Person::toString(){
    return name;
}
void Person :: setName(string newName){
    name = newName;

}

string Person :: getName(){
    return name;
}