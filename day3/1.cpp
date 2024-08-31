#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter first integer: ";
    cin >> num1;
    
    cout << "Enter second integer: ";
    cin >> num2;
    
    int addition = num1;
    for (int i = 0; i < num2; ++i) {
        addition++;
    }
    
    int subtraction = num1;
    for (int i = 0; i < num2; ++i) {
        subtraction--;
    }
    
    int multiplication = 0;
    for (int i = 0; i < abs(num2); ++i) {
        multiplication += num1;
    }
    if (num2 < 0) {
        multiplication = -multiplication;
    }
    
    double division = 0.0;
    if (num2 != 0) {
        double tempNum1 = num1;
        while (tempNum1 >= num2) {
            tempNum1 -= num2;
            division++;
        }
        division += tempNum1 / num2;
    } else {
        cout << "Error: Division by zero is not allowed.\n";
    }
    
    int modulus = num1;
    if (num2 != 0) {
        while (modulus >= num2) {
            modulus -= num2;
        }
    } else {
        cout << "Error: Modulus by zero is not allowed.\n";
    }
    
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    if (num2 != 0) {
        cout << fixed << setprecision(5) << "Division: " << division << endl;
        cout << "Modulus: " << modulus << endl;
    }
    
    return 0;
}
