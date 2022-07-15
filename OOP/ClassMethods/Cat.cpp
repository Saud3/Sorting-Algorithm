#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak(){
    if(happy){
        cout << "Meouwww" << endl;
    }else{
        cout << "Sssss" << endl;
    }
    
}
void Cat::jump(){
    cout << "jumping to top of bookcase" << endl;
}