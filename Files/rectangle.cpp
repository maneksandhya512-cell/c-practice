#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double length1;
    double width;

    cout << "Enter length and width: ";
    cin >> length1;
    cin >> width;

    double area = length1 * width;
    double perimeter = 2 * (length1 + width);

    cout << "The area is: " << area << endl;
    cout << "The perimeter is: " << perimeter << endl;

    return 0;
}