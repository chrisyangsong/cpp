#include <iostream>
using namespace std;

void my_function(string fname,int age){
    cout << fname << " refsnes." << age << " years old. \n";
}

int main()
{
    my_function("Liam",3);
    return 0;
}