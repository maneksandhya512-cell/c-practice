#include <iostream>
using namespace std;

int main(){
    int a ;
    int sum =0;

    cout<<"enter a number:";
    cin>>a;

    while (a !=0){
        a = a/10;
        sum++;


    }
    cout<<"the digits are:"<<sum<<endl;
    

    return 0;

    

}