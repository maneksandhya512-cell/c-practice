#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double base, exponent;
    cout << "Enter base (x): ";
    cin >> base;
    cout << "Enter exponent (y): ";
    cin >> exponent;

    double result = pow(base, exponent);

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}