#include <iostream>
using namespace std;

int findMax(const int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr1[] = {1, 5, 3, 9, 2};
    int arr2[] = {10, 15, 7, 3, 22, 8};
    int arr3[] = {-1, -5, -3, -9, -2};

    cout << "Max of arr1: " << findMax(arr1, 5) << endl;
    cout << "Max of arr2: " << findMax(arr2, 6) << endl;
    cout << "Max of arr3: " << findMax(arr3
