#include <iostream>
using namespace std;

// base class=father
class Vehicle {
  public:
    string brand = "ford"; //attribute
    void honk() { //method
        cout << "tuut, tuut! \n";
    }
};

// derived class = ji cheng = son
// get all attributes and methods from father
class Car: public Vehicle {
  public:
    string model = "mustang";
};

int main() {
    Car my_car;
    my_car.honk();
    cout << my_car.brand + " " +my_car.model;
    return 0;


}