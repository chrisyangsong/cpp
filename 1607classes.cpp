#include <iostream>
using namespace std;

// base class
class my_class{
  public:
    void my_function() {
        cout << "some content is parent class \n";
    }
};

// another base class
class my_other_class {
  public:
    void my_other_function() {
        cout << "some content in another class \n";
    }
};

//Derived class
class my_child_class: public my_class, public my_other_class{

};

int main() {
    my_child_class my_obj;
    my_obj.my_function();
    my_obj.my_other_function();
    return 0;
}