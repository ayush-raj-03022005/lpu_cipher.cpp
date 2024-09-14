#include <iostream>
#include <string>

using namespace std;

int countCharacter(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "Hello, World!";
    char ch = 'l';
    cout << "Number of occurrences of '" << ch << "' in \"" << str << "\": " << countCharacter(str, ch) << endl;
    
    string str2 = "Mississippi";
    cout << "Number of occurrences of 's' in \"" << str2 << "\": " << countCharacter(str2, 's') << endl;

    return 0;
}
