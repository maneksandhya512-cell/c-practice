#include <iostream>

using namespace std;

int main() {
    double base, height;

    cout << "Enter base of the triangle: ";
    cin >> base;
    cout << "Enter height of the triangle: ";
    cin >> height;

    double area = (base * height) / 2.0;

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}