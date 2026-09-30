
#include <iostream>
using namespace std;

int main(){
    int units;
    cout<<"Enter the units ";
    cin>>units;

    if(units <= 50){
        int amount = units * 0.5 * 1.2; 
        cout<<"Amount is : "<<amount<<endl;
    }

    else if(units <= 100){
        int amount = (25 + (units - 50) * 0.75)*1.2;
        cout<<"Amount is : "<<amount << endl; 
    }

    else if(units <= 150){
        int amount = (100 + (units - 150) * 1.2) * 1.2;
        cout<<"Amount is : "<<amount << endl; 
    }

    else {
        int amount = (220 + (units - 250) * 1.5) * 1.2;
         cout<<"Amount is : "<<amount << endl; 
    }


    return 0;
}