#include <bits/stdc++.h>
using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    int age;

public:
    Person(const string& fName, const string& lName, int age) 
        : firstName(fName), lastName(lName), age(age) {}

    string getFullName() const {
        return firstName + " " + lastName;
    }

    tuple<string, string, int> getDetails() const {
        return make_tuple(firstName, lastName, age);
    }
};

int main() {
    Person person("John", "Doe", 30);
    cout << "Full Name: " << person.getFull
