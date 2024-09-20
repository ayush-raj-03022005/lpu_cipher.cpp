#include <iostream>
using namespace std;

bool keyExists(int arr[][100], int rows, int cols, int key) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[100][100];
    int rows, cols, key;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }

    cout << "Enter the key to search: ";
    cin >> key;

    if (keyExists(arr, 
