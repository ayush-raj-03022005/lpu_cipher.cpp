#include <iostream>
using namespace std;

void checkTarget(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int arr[] = {2, 4, 6, 7, 8};
    int target = 6;

    checkTarget(arr, 5, target);

    return 0;
}
