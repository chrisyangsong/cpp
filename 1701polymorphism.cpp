#include <iostream>
using namespace std;

// base class
class Animal {
  public:
    void animal_sound(){
        cout << "the animal makes a sound \n";
    }
};


// derived class
class Pig : public Animal {
  public:
    void animal_sound(){
        cout << "the pig says: wee wee \n";
    }
};

// derived class
class Dog : public Animal {
  public:
    void animal_sound(){
        cout << "the dog says: bow wow \n";
    }
};

int main() {
    Animal my_animal;
    Pig my_pig;
    Dog my_dog;

    my_animal.animal_sound();
    my_pig.animal_sound();
    my_dog.animal_sound();

    return 0;
}