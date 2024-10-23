#include <iostream>
#include <vector>
using namespace std;

void playGame(int t) {
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int res = a[0];
        for (int i = 1; i < n; i += 2) {
            res = max(res, a[i]);
        }
        cout << res << endl;
    }
}

int main() {
    int t;
    cin >> t;
    playGame(t);
    return 0;
}
