#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows (n): ";
    cin >> n;
    cout << "Enter number of columns (m): ";
    cin >> m;

    vector<vector<int>> image(n, vector<int>(m));
    
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> image[i][j];
        }
    }

    vector<vector<int>> rotated(m, vector<int>(n));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            rotated[j][n - 1 - i] = image[i][j];
        }
    }

    cout << "Rotated matrix:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
