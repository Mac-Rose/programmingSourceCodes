#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int flag=0;
    cin>>k;
    for(int i=1;i<=n;i++)
    {
        if((240-k)-(5*(i*(i+1)/2) )<0 ) 
        {
            flag=1;
            cout<<i-1;
            break;}
    }
    if(flag==0) cout<<n;
    return 0;
}