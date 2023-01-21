#include <iostream>
using namespace std;


// function declaration
void my_function(); //must be declared before main because its definition is after the main.

// the main method
int main() {
    my_function(); //call the function
    return 0;
}

// function definition
void my_function() {
    cout << "I just got executed" <<"\n"; 
}