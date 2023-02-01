#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        long long n;
        cin>>n;
        while(n%2==0)
        {
            n/=2;
            if(n==1) break;
        }
        if(n==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}