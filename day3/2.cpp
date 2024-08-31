#include <iostream>
using namespace std;

int main() {
    double real1 = -3, imag1 = 4;
    double real2 = 1, imag2 = 2;
    
    double real_sum = 0, imag_sum = 0;
    double real_diff = 0, imag_diff = 0;
    
    for (int i = 0; i < 1; ++i) {
        real_sum = real1 + real2;
        imag_sum = imag1 + imag2;
    }
    
    for (int i = 0; i < 1; ++i) {
        real_diff = real1 - real2;
        imag_diff = imag1 - imag2;
    }
    
    cout << "Complex Number 1: " << real1 << " + " << imag1 << "i" << endl;
    cout << "Complex Number 2: " << real2 << " + " << imag2 << "i" << endl;
    
    cout << "Sum: " << real_sum << " + " << imag_sum << "i" << endl;
    cout << "Difference: " << real_diff << " + " << imag_diff << "i" << endl;
    
    return 0;
}
