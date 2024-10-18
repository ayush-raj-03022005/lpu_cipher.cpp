#include <bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerElements(vector<int>& arr) {
    stack<int> st;
    vector<int> result;

    for (int i = 0; i < arr.size(); i++) {
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }

        if (st.empty()) {
            result.push_back(-1);
        } else {
            result.push_back(st.top());
        }

        st.push(arr[i]);
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> output = nearestSmallerElements(arr);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}