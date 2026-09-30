#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    double diameter = 2 * radius;
    double circumference = 2 * M_PI * radius;
    double area = M_PI * radius * radius;

    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}