#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    cin >> a;
    cin >> b;
    cin >> c;
    if ( a < b && c < b){
        cout << " b is big";
    }
    if ( a >b && a > c){
        cout << " a is big "
    }
    if ( a < c && b < c){
        cout << "c is big"
    }
    return 0;
}