#include <iostream>
using namespace std;

class Car{
    public: // must hae public
        string brand; // the name of variable in class is attribute
        string model;
        int year;
};  // must have ;

int main() {
    // create an obect of car
    Car car_obj_1; // car_obj_1 is the name of object
    car_obj_1.brand = "BMW"; // brand is attribute of object
    car_obj_1.model = "x5";
    car_obj_1.year = 1999;

    // create another obect of car
    Car car_obj_2;
    car_obj_2.brand = "Ford";
    car_obj_2.model = "Mustang";
    car_obj_2.year = 1969;

    // print attribute values
    cout << car_obj_1.brand <<" "<<car_obj_1.model<<" "<<car_obj_1.year << "\n";
    return 0;
}