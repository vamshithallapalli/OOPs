#include <iostream>
using namespace std;

// Single class definition
class MyClass {
public:
    MyClass() {
        cout << "Default constructor called." << endl;
    }

    MyClass(int value) {
        cout << "Parameterized constructor called with value: " << value << endl;
    }

    MyClass(const MyClass& obj) {
        cout << "Copy constructor called." << endl;
    }

    void display() {
        cout << "Object is working!" << endl;
    }
};

int main() {
    // 1. Object created on the stack (automatic memory allocation)
    MyClass stackObject;
    stackObject.display();

    // 2. Object created on the heap (dynamic memory allocation)
    MyClass* heapObject = new MyClass();
    heapObject->display();
    delete heapObject; // Free memory

    // 3. Object created using parameterized constructor
    MyClass paramObject(10);
    paramObject.display();

    // 4. Object created using copy constructor
    MyClass copyObject = paramObject;
    copyObject.display();

    // 5. Object created using direct initialization
    MyClass directObject(20);
    directObject.display();

    // 6. Object created using pointer reference (without dynamic memory)
    MyClass pointerRefObject;
    MyClass* pointerRef = &pointerRefObject;
    pointerRef->display();

    // 7. Array of objects created
    MyClass objectArray[2];
    objectArray[0].display();
    objectArray[1].display();

    // 8. Dynamic array of objects
    MyClass* dynamicArray = new MyClass[2];
    dynamicArray[0].display();
    dynamicArray[1].display();
    delete[] dynamicArray; // Free memory

    // 9. Object created using factory method
    MyClass factoryObject = MyClass(30);
    factoryObject.display();

    return 0;
}
