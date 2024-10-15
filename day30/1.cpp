#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArraySum(const vector<int>& arr) {
    int max_sum = arr[0];
    int current_sum = arr[0];

    for (size_t i = 1; i < arr.size(); ++i) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int max_sum = maxSubArraySum(arr);
    cout << "Maximum sum of subarray: " << max_sum << endl;

    return 0;
}
