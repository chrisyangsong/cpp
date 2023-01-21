#include <iostream>
using namespace std;

// base class
class Employee {
  protected: // Protected access specifier
    int salary;
};

// derived class
class Programmer: public Employee {
  public:
    int bonus;
    void set_salary(int s){
        salary = s;
    }
    int get_salary() {
        return salary;
    }
};

int main() {
    Programmer my_obj;
    my_obj.set_salary(50000);
    my_obj.bonus = 15000;
    cout << "salary: " << my_obj.get_salary() << "\n";
    cout << "bonus: " << my_obj.bonus << "\n";
    return 0;
}