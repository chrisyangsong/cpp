#include <iostream>
using namespace std;

int plus_func(int x, int y){
    return x+y;
}

double plus_func(double x, double y){ // function overloading with the same name
    return x -y;
}

int main() {
    int my_num_1 = plus_func(8,5);
    double my_num_2 = plus_func(4.3,6.26);
    cout << "int: " << my_num_1 << "\n";
    cout << "double: " << my_num_2 << "\n";

    return 0;
}