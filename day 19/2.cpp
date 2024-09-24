#include <bits/stdc++.h>
using namespace std;

int main() {
    string filename = "input.txt";
    ifstream inFile(filename);

    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    cout << "Contents of " << filename << ":\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
