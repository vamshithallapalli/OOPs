#include <iostream>
using namespace std;

// Base class Walker
class Walker {
public:
    void walk() {
        cout << "Walking" << endl;
    }
};

// Base class Speaker
class Speaker {
public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

// Derived class Robot inheriting from Walker and Speaker
class Robot : public Walker, public Speaker {
public:
    void perform() {
        walk();  // Access Walker's method
        speak(); // Access Speaker's method
    }
};

int main() {
    Robot robot; // Create an object of Robot
    robot.perform(); // Call perform method

    return 0;
}
