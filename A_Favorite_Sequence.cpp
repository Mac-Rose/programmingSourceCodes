#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        long long c[n];
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        for(int i=0;i<(n/2);i++)
        {
            cout<<c[i]<<" ";
            cout<<c[n-1-i]<<" ";
        }
        if(n%2!=0) cout<<c[n/2]<<"\n";
        else cout<<"\n";
    }
    return 0;
}