#include <iostream>
using namespace std;

class Employee {
  private: 
    // private attribute
    int salary;

  public:
    // Setter to set value for private attribute,we can do input test here (is legal or not)
    void set_salary(int s){
        salary = s;
    }
    // Getter to get value for private attribute
    int get_salary() {
        return salary;
    }
};

int main(){
    Employee my_obj;
    my_obj.set_salary(50000);
    cout << my_obj.get_salary();
    return 0;
}