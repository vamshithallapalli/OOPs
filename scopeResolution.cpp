//explicitly defines the function outside the class while maintaining association.

#include <iostream>
using namespace std;

class A {
public:
    void show(); // Function declaration
};

void A::show() { // Using scope resolution to define the function outside the class
    cout << "Hello from class A!" << endl;
}

int main() {
    A obj;
    obj.show();
    return 0;
}
