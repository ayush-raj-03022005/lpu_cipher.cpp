#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int single = 0;
    
    for (int i = 0; i < n; i++) {
        single ^= nums[i];
    }
    
    cout << single;
    return 0;
}
