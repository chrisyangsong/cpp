#include <iostream>
using namespace std;


class my_class{
    int b;      // by default it is private 
  public:       // public access specifier
    int x;      // public attribute
    int y;      
  private:      // private access specifier
    int a;      // private attribute

};

int main() {
    my_class my_obj;
    my_obj.x = 25;  // llowed (public)
    // my_obj.a = 50;  // not allowed (private)
    // my_obj.b = 10;  // not allowed (private)
    return 0; 
}