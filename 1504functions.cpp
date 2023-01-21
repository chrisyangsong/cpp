#include <iostream>
using namespace std;

void my_function(string country = "Norway"){
    cout << country << "\n";
}

int main()
{
    my_function("sweden"); 
    my_function();
    return 0;

}