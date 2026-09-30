
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    double square = num * num;
    double cube = num * num * num;
    double squareRoot = sqrt(num);

    cout << "Square: " << square << endl;
    cout << "Cube: " << cube << endl;
    cout << "Square Root: " << squareRoot << endl;

    return 0;
}