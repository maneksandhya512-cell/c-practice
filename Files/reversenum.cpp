#include <iostream>
using namespace std;

int main(){
    int num =5432;
    int rev_num=0;
    int rem;

    while (num!=0){
        rem=num%10;
        rev_num=rev_num*10+rem;
        num=num/10;
    }
   cout<<"reverse number:"<<rev_num;

}