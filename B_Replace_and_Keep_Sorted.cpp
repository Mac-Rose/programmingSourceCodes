#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,q,k;
    int count=0;
    cin>>n>>q>>k;
    int ar[n+2]={};
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    ar[n+1]=k+1;
    int a[n+2]={0};
    for(int i=1;i<=n;i++)
    {
        a[i]=ar[i+1]-ar[i-1]-2;
    }
    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
    }
    
    for(int i=0;i<q;i++)
    {
        count=0;
        int l,r;
        cin>>l>>r;
        if(l==r) cout<<k-1<<"\n";
        else
        {
            count=ar[l+1]-2;
            count+=k-ar[r-1]-1;
            count+=a[r-1]-a[l];
            cout<<count<<endl;
        }
    }
    return 0;
}