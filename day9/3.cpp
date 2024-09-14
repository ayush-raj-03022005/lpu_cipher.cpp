#include <iostream>
using namespace std;

int main() {
    int num = 100;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;

    cout << "Value of num using variable: " << num << endl;
    cout << "Value of num using pointer: " << *ptr1 << endl;
    cout << "Value of num using pointer to pointer: " << **ptr2 << endl;

    return 0;
}
