#include <iostream>
using namespace std;

// Base class: Car
class Car {
public:
    void drive() {
        cout << "Driving on the road." << endl;
    }
};

// Base class: Airplane
class Airplane {
public:
    void fly() {
        cout << "Flying in the sky." << endl;
    }
};

// Derived class: CarFly (inherits from both Car and Airplane)
class CarFly : public Car, public Airplane {
public:
    void carFlyMode() {
        cout << "Switching between driving and flying modes." << endl;
    }
};

int main() {
    CarFly hybridVehicle; // Create an object of CarFly class

    // Accessing methods from both base classes
    hybridVehicle.drive();
    hybridVehicle.fly();

    // Accessing the derived class method
    hybridVehicle.carFlyMode();

    return 0;
}
