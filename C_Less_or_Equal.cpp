#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,k;
    cin>>n>>k;
    vector<long long> v;
    long long d;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        v.push_back(d);
    }
    sort(v.begin(),v.end());
    if(n==k) cout<<v[n-1];
    else if (k==0)
    {
        if(v[0]-1<1) cout<<-1;
        else cout<<v[0]-1;
    }
    else
{    if(v[k-1]==v[k] ) cout<<-1;
    else cout<<v[k-1]; }
    return 0;
}