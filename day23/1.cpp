#include <iostream>
#include <vector>
using namespace std;

string twoSum_n2(const vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == target) {
                return "YES";
            }
        }
    }
    return "NO";
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the target: ";
    cin >> target;
    cout << twoSum_n2(arr, target) << endl;
    return 0;
}
