#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

string freqSort(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    vector<pair<int, char>> arr;
    for (auto& p : freq) arr.push_back({p.second, p.first});
    sort(arr.rbegin(), arr.rend());
    string res;
    for (auto& p : arr) res += string(p.first, p.second);
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << freqSort(s) << endl;
    return 0;
}
