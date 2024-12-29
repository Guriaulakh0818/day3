#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) {
        return 1; 
    }
    return a * power(a, b - 1); 
}

int main() {
    int a, b;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;

    if (b < 0) {
        cout << "Exponent should be non-negative." << endl;
    } else {
        cout << a << " raised to the power " << b << " is " << power(a, b) << endl;
    }

    return 0;
}
