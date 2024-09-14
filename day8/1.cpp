#include <iostream>
#include <string>

using namespace std;

int stringLength(const string &str) {
    return str.length();
}

int main() {
    string str1 = "Hello, World!";
    cout << "Length of the string \"" << str1 << "\": " << stringLength(str1) << endl;
    
    string str2 = "Computer Science";
    cout << "Length of the string \"" << str2 << "\": " << stringLength(str2) << endl;

    return 0;
}
