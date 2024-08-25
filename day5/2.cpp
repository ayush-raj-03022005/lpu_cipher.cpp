#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        swap(str[left], str[right]);
        ++left;
        --right;
    }
}

int main() {
    string input;
    getline(cin, input);
    reverseString(input);
    cout << input << endl;
    return 0;
}
