# include <iostream>
using namepscae std;

int main(){
    int amount = 3887;

    if (amount>=500){
        int notes = amount /500;
        amount = amount % 500;

        cout << "total count of 500 notes :" << notes << endl;

    }

    if (amount >=200){
        int notes = amount /200;
        amount = amount % 200;

        cout << "total count of 200 notes :" << notes << endl; 
    }
    if (amount >=100){
        int notes = amount /100;
        amount = amount % 100;

        cout << "total count of 100 notes :" << notes << endl; 
    }
    if (amount >=50){
        int notes = amount /50;
        amount = amount % 50;

        cout << "total count of 50 notes :" << notes << endl; 
    }
    if (amount >=20){
        int notes = amount /20;
        amount = amount % 20;

        cout << "total count of 20 notes :" << notes << endl; 
    }
    if (amount >=10){
        int notes = amount /10;
        amount = amount % 10;

        cout << "total count of 10 notes :" << notes << endl; 
    }
    if (amount >=5){
        int notes = amount /5;
        amount = amount % 5;

        cout << "total count of 5 notes :" << notes << endl; 
    }
    if (amount >=2){
        int notes = amount /2;
        amount = amount % 2;

        cout << "total count of 2 notes :" << notes << endl; 
    }
    if (amount >=1){
        int notes = 1;
        
        amount = amoun

        cout << "total count of 200 notes :" << notes << endl; 
    }

}