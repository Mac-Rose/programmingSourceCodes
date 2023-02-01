#include <iostream>
using namespace std;
long long fun(long long a) {
    
    long long summm=0;
    long long n;
    while(a!=0){
       n=a%10;
       summm=summm+n;
       a=a/10;
    }
    
    return summm;
}

int main() {
    long long a,summm;
    cin>>a;
    summm=fun(a);
    cout << summm ;
}
