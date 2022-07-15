#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat(){
    cout << "Cat summoned" << endl;
    happy = true;

}
Cat::~Cat(){
    cout << "Cat dismissed" << endl;
}

void Cat::speak(){
    if(happy){
        cout << "Meouwww" << endl;
    }else{
        cout << "Sssss" << endl;
    }
    
}