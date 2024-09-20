#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    *p = 42;
    cout << "Value of dynamic variable: " << *p << endl;
    cout << "Address of dynamic variable: " << p << endl;
    delete p;
    p = nullptr;
    return 0;
}
