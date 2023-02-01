#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,w;
    long long n;
    cin>>k>>n>>w;
    long long ans=k*(w*(w+1)/2)-n;
    (ans<0) ? cout<<0 : cout<<ans;
    return 0;
}