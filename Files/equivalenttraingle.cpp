#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double side;
    cout << "Enter the side of the equilateral triangle: ";
    cin >> side;

    double area = (sqrt(3) / 4.0) * pow(side, 2);

    cout << "Area of Equilateral Triangle: " << area << endl;
    return 0;
}