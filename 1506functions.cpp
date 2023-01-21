#include <iostream>
using namespace std;

int my_function(int x,int y){
    return x + y;
}


int main()
{
    cout << my_function(5,3) << endl;
    int z = my_function(5,3);
    cout << z << endl;
    return 0;
}