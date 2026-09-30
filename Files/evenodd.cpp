# include <iostream>
using namespace std ;

int main(){
    int a =5;
    int b= 11;
    int n ;


    cout << "enter n :";
    cin >> n;
    
    if ( n % 5 ==0 || n % 11 ==0 ){
        cout << "print the number is divisible by 5 and 11";

    }
    else {
        cout << "the number is not divisible by 5 and 11";
        
    }
    
    return 0;
        


}