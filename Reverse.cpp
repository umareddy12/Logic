//reverse of a string
#include <iostream>
using namespace std;

int main() {
    int rem,rev=0,n=567;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<rev<<endl;
    return 0;
}
