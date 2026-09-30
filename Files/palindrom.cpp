#include <iostream>
using namespace std;

int main(){
    int num=5432;
    int rev_num=0;
    int tem;
    int rem;

    while (num!=0)
    {
        rem=num%10;
        rev_num=rev_num*10+rem;
        tem =num/10;
    }
    cout<<"reverse number is:"<<rev_num;
    cout<<num;

    if (rev_num==tem){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    

    return 0;
}