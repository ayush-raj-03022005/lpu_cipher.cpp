#include <iostream>
#include <string>
using namespace std;

// Base class: Vehicle
class Vehicle {
protected:
    string make;
    int year;
    float fuel;

public:
    // Constructor to initialize vehicle details
    Vehicle(string make, int year, float fuel) : make(make), year(year), fuel(fuel) {}

    // Method to refuel the vehicle
    void refuel(float amount) {
        fuel += amount;
        cout << "Refueled by " << amount << " liters. Now it has " << fuel << " liters of fuel." << endl;
    }

    // Virtual method to display basic vehicle details
    virtual void display() {
        cout << "Make: " << make << ", Year: " << year << ", Fuel: " << fuel << " liters" << endl;
    }
};

// Derived class: Car
class Car : public Vehicle {
private:
    int doors;

public:
    // Constructor to initialize car details, including number of doors
    Car(string make, int year, float fuel, int doors) : Vehicle(make, year, fuel), doors(doors) {}

    // Method to simulate opening car doors
    void openDoors() {
        cout << "The car doors are now open." << endl;
    }

    // Overriding display method to include car-specific details
    void display() override {
        Vehicle::display();
        cout << "This car has " << doors << " doors." << endl;
    }
};

// Derived class: Bike
class Bike : public Vehicle {
private:
    bool hasCarrier;

public:
    // Constructor to initialize bike details, including carrier information
    Bike(string make, int year, float fuel, bool hasCarrier) : Vehicle(make, year, fuel), hasCarrier(hasCarrier) {}

    // Method to simulate kick-starting the bike
    void kickStart() {
        cout << "The bike is kick-started and ready to go!" << endl;
    }

    // Overriding display method to include bike-specific details
    void display() override {
        Vehicle::display();
        cout << "This bike " << (hasCarrier ? "has a carrier." : "does not have a carrier.") << endl;
    }
};

int main() {
    // Create a Car object with details
    Car myCar("Toyota", 2020, 50.5, 4);
    myCar.refuel(10);  // Refuel the car
    myCar.display();   // Show car details
    myCar.openDoors(); // Open car doors

    cout << endl;

    // Create a Bike object with details
    Bike myBike("Honda", 2018, 15.2, true);
    myBike.refuel(5);  // Refuel the bike
    myBike.display();  // Show bike details
    myBike.kickStart(); // Kick-start the bike

    return 0;
}
