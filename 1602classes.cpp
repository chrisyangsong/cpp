#include <iostream>
using namespace std;

class Car{
    public:
      int speed(int max_speed); //just clarification not definition
      void my_method() {
          cout << "Hello World!";
      }
}; // must have ;

int Car::speed(int max_speed ) { //here is definition 
    return max_speed;
} // no ;

int main() {
    Car my_obj; // create an object of car
    cout << my_obj.speed(200) << endl; // call the method with an argument
    my_obj.my_method();
    return 0;
}

