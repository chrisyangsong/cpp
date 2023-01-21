#include <iostream>
using namespace std;

int main()
{
    string food = "pizza";
    string &meal = food; //assign the reference of "pizza" to meal so food and meal all point to "pizza"

    cout << food << "\n"; // outputs pizza
    cout << meal << "\n"; // outputs pizza
    cout << &food << "\n"; // outputs the reference of food 0x7fff91b18600
    cout << &meal << "\n"; // outputs the reference of meal 0x7fff91b18600

    return 0;


}