#include <iostream>
using namespace std;

void my_function(string fname){
    cout << fname << " refsnes\n";
}

int main(){
    my_function("Liam");
    my_function("Jenny");
    my_function("Anja");

}