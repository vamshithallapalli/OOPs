#include <iostream>
using namespace std;

// Abstract class
class Animal {
public:
    virtual void sound() = 0; // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog says: Woof Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat says: Meow Meow" << endl;
    }
};

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    dog->sound();
    cat->sound();

    delete dog;
    delete cat;

    return 0;
}
