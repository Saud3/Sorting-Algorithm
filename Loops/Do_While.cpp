#include <iostream>
using namespace std;

//do/while loop is a variant of the while loop. This loop will execute the code block once,
// before checking if the condition is true, then it will repeat the loop as long as the condition is true.
int main (){

    const string password  = "Hello";
    string input;

    

    do{
        cout << " Enter your password : " << flush;
        cin >> input;

        if(input != password){
            cout << "Access denied." << endl;
        }
    
    
    } while(input != password);
    
        cout << "password accepted." << endl;     

    return 0;
}