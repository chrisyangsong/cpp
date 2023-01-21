#include <iostream>
using namespace std;

class Car{          // the class
  public:           // access specifier
    string brand;   // attribute
    string model;   // attribute
    int year;       // attribute
    Car(string x, string y, int z); // constructor declaration = gou zao han shu
};

// constructor definition outside the class
Car::Car(string x, string y,int z){
    brand = x;
    model = y;
    year = z;
}

int main() {
    // create Car objects and call the constructor with different values
    Car car_obj_1("bmw","xs",1999); // here the constructor is used to construct
    Car car_obj_2("ford","mustang",1969);

    //print values
    cout << car_obj_1.brand << " " << car_obj_1.model <<" "<< car_obj_1.year <<"\n";
    cout << car_obj_2.brand << " " << car_obj_2.model <<" "<< car_obj_2.year <<"\n";


}