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
        int d=n%2020;
        if(d>n/2020) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}