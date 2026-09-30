#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double centimeter;

    cout<<"enter the centimeter:";
    cin >> centimeter;

    double meter = centimeter/100;
    double km   = centimeter / 10000;

    cout<<" the cm to m is :"<< meter << endl;
    cout << " the cm to km is :"<< km << endl;

    return 0;
}