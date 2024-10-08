#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows (n): ";
    cin >> n;
    cout << "Enter number of columns (m): ";
    cin >> m;

    vector<vector<int>> array(n, vector<int>(m));
    
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> array[i][j];
        }
    }

    vector<int> flatArray;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            flatArray.push_back(array[i][j]);
        }
    }

    sort(flatArray.begin(), flatArray.end());

    cout << "Sorted array:\n";
    for (int i = 0; i < flatArray.size(); ++i) {
        cout << flatArray[i] << " ";
    }
    cout << endl;

    return 0;
}
