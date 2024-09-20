#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    float marks;

    Student(string n, int r, float m) : name(n), rollNumber(r), marks(m) {}

    void displayDetails() {
        cout << "Name: " << this->name << endl;
        cout << "Roll Number: " << this->rollNumber << endl;
        cout << "Marks: " << this->marks << endl;
    }
};

int main() {
    Student student1("Alice", 101, 92.5);
    student1.displayDetails();

    return 0;
}
