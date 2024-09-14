#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string &str) {
    int left = 0, right = str.length() - 1;

    while (left < right) {
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    string str1 = "A man, a plan, a canal, Panama";
    string str2 = "racecar";
    string str3 = "Hello, World";

    cout << "Is str1 a palindrome? " << (isPalindrome(str1) ? "true" : "false") << endl;
    cout << "Is str2 a palindrome? " << (isPalindrome(str2) ? "true" : "false") << endl;
   
