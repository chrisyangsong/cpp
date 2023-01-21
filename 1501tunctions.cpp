#include <iostream>
using namespace std;

void my_function(){  // functions dont't need a return so return void
    cout << "I just got executed!";
}


int main()  //main is a main function that needs a return of int so it returns 0
{
    my_function(); // call the function
    return 0;

}