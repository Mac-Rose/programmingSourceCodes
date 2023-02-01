#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    
    cin>>tst;
    int n=tst;
    long long ar[tst],k=0;
    long long i=0;
    while(tst--)
    {
        long long n;
        cin>>ar[i];
        i++;
    }
    sort(ar,ar+n);
    for(int i=0;i<n-1;i++)
    {
        k+=ar[n-1]-ar[i];
    }
    cout<<k;
    return 0;
}