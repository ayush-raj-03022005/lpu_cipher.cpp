#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int countOdd = 0, countEven = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    cout << "Number of odd numbers: " << countOdd << endl;
    cout << "Number of even numbers: " << countEven << endl;

    return 0;
}
