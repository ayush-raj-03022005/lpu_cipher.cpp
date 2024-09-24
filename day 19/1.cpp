#include <bits/stdc++.h>
using namespace std;

int main() {
    string filename = "details.txt";
    ofstream outFile(filename);

    if (!outFile) {
        cerr << "Error creating file!" << endl;
        return 1;
    }

    outFile << "Name: John Doe\n";
    outFile << "Age: 30\n";
    outFile << "Email: johndoe@example.com\n";
    outFile.close();

    cout << "Details written to " << filename << endl;

    ifstream inFile(filename);
    string line;

    cout << "Details from file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}
