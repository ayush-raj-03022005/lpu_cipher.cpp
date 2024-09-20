#include <iostream>
using namespace std;

int main() {
    int arr[100][100];
    int rows, cols;
    int sum = 0;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    cout << "Sum of all values in the array: " << sum << endl;

    return 0;
}
