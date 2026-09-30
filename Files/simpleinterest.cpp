#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal;
    double rate;
    double time;

    cout << "Enter Principal, Rate, and Time: ";
    cin >> principal;
    cin >> rate;
    cin >> time;
    
    // Simple Interest formula: (P * R * T) / 100
    double simpleinterest = (principal * rate * time) / 100.0;
    
    cout << "The simple interest is: " << simpleinterest << endl;

    return 0;
}