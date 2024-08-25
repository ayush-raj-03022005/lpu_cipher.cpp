#include <iostream>
#include <string>
using namespace std;

void countVowelsConsonants(const string &str, int &vowelCount, int &consonantCount) {
    vowelCount = 0;
    consonantCount = 0;
    for (int i = 0; i < str.length(); ++i) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            ++vowelCount;
        } else if (c >= 'b' && c <= 'z') {
            ++consonantCount;
        }
    }
}

int main() {
    string input;
    getline(cin, input);
    int vowels, consonants;
    countVowelsConsonants(input, vowels, consonants);
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    return 0;
}
