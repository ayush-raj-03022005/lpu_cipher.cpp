#include <iostream>
#include <vector>
using namespace std;

void minGas(int t) {
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int gap = max(a[0], x - a[n-1]);
        for (int i = 1; i < n; ++i) {
            gap = max(gap, a[i] - a[i-1]);
        }
        cout << gap << endl;
    }
}

int main() {
    int t;
    cin >> t;
    minGas(t);
    return 0;
}
