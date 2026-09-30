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


    double amount = principal * pow(1.0 + (rate / 100.0), time);
    

    double compoundInterest = amount - principal;

    cout << "The Total Amount is: " << amount << endl;
    cout << "The Compound Interest is: " << compoundInterest << endl;

    return 0;
}