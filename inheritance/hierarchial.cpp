#include<bits/stdc++.h>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started!" << endl;
    }
};

class Bike : public Vehicle {
public:
    void ride() {
        cout << "Riding the bike!" << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Driving the car!" << endl;
    }
};

int main() {
    // Create objects for Bike and Car
    Bike myBike;
    Car myCar;

    // Demonstrating the functionality of Bike
    myBike.start(); // Inherited method
    myBike.ride();  // Specific to Bike

    // Demonstrating the functionality of Car
    myCar.start(); // Inherited method
    myCar.drive(); // Specific to Car

    return 0;
}
