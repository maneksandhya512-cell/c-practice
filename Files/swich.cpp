include <iostream>
using name space std;

int main(){
    int month;
    cout <<"enter the month";
    cin >> month;

    switch(month){
        case 11:
        case 12:
        case 1:
        case 2:
        cout << "winter seson "<< endl;
        break


        case 3:
        case 4:
        case 5:
        case 6:
        cout << "summer seson "<< endl;
        break


        case 7:
        case 8:
        case 9:
        case 10:
        cout << " rainy seson "<< endl;
        break


        default{
            cout << "invalid output";
        }

        


    }

}