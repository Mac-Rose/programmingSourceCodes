#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,left,ans;
    cin>>n;
    ans=0;
    ans+=n/100;
    left=n%100;
    
    ans+=left/20;
    left=left%20;
    
    ans+=left/10;
    left=left%10;

    ans+=left/5;
    left=left%5;
    
    ans+=left/1;
    cout<<ans;
    return 0;
}