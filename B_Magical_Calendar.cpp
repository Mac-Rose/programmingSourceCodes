#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        long long n,r;
        cin>>n>>r;
        unsigned long long g;
        if(n<=r)
        {
            
            g=(n*(n-1))/2;
            g++;
            cout<<g<<endl;
        }
        
        else
        {
            g=(r*(r+1))/2;
            cout<<g<<endl;
        }
        
    }
    return 0;
}