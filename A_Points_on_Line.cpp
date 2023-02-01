#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long n,d;
    cin>>n>>d;
    vector<long> v(n,0);
    for(int i=0;i<n;i++)
    {
        long g;
        cin>>g;
        v[i]=g;
    }
    long  u=0;
    int flag=1;
    unsigned long ans=0;
    for(int i=0;i<=n-3;i++)
    {
        u=0;
        flag=1;
        for(int j=n-1;j>i+1;j--)
        {
            if(v[j]-v[i]<=d) 
            {
                u=j;
                flag=0;
                break;
            }
        }
        if(flag==0)
        {u-=i;
        ans+=u*(u-1)/2;}
    }
    cout<<ans;
    return 0;
}