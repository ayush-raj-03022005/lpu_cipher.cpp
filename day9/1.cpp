#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int *ptr = &num;

    cout << "Value of num using variable: " << num << endl;
    cout << "Value of num using pointer: " << *ptr << endl;

    return 0;
}
