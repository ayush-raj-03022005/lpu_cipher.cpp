#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string model;
    string engine;
    int numberOfSeats;

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << numberOfSeats << endl;
    }
};

int main() {
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.engine = "1.8L";
    car1.numberOfSeats = 5;

    car1.displayInfo();

    return 0;
}
