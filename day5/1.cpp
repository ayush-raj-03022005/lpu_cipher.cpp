#include <iostream>
using namespace std;

void checkOddEven(int number) {
    if (number % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

int main() {
    int num;
    cin >> num;
    checkOddEven(num);
    return 0;
}
