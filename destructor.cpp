#include <iostream>
using namespace std;

// Class definition
class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called: Object is created!" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called: Object is destroyed!" << endl;
    }
};

int main() {
   
    // Creating an object
    MyClass obj;

    return 0;
}
