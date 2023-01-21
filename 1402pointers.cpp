#include <iostream>
using namespace std;

int main()
{
    string food = "pizza";
    string* ptr = &food; //
    // string *ptr = &food; //ptr is a string that stores the reference of food, not "pizza"

    cout << food << "\n"; //outputs pizza
    cout << &food << "\n";

    cout << ptr << "\n"; //ptr is an address
    cout << *ptr << "\n"; //*ptr is the avlue corresponds to the address

    // change the value of the pointer
    *ptr = "hamburger";
    // output the new calue of the pointer (hamburger)
    cout << *ptr << "\n";
    // output the new value of the food cariable {hamburger}
    cout << food << "\n";

    return 0;


}