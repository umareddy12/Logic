//If a number is a palindrome are not:
#include <iostream>
using namespace std;

int main() {
    
    int rem,rev=0,n=235;
    int temp=n;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    
    cout<<rev<<endl;
    if(temp==rev)
    {
        cout<<" number is palindrome"<<endl;
    }
        else{
            cout<<" number is  not a palindrome"<<endl;
        
    }
    
    return 0;
}
