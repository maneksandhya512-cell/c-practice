#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Enter a first value: ";
    cin >> a;

    cout << "Enter a second value: ";
    cin >> b;

    cout << "The sum of number: " << a + b << endl;
    cout << "The subtraction of number: " << a - b << endl;
    cout << "The multiplication of number: " << a * b << endl;
    cout << "The quotient of number: " << a / b << endl;
    cout << "The remainder of number: " << a % b << endl;

    return 0;
}