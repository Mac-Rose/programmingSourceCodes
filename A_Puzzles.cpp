#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    
    int ar[m];
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+m);
    int s=ar[m-1]-ar[0];
    for(int i=0;i<=m-n;i++)
    {
        s=min(s,ar[i+n-1]-ar[i]);
    }
    cout<<s;
    return 0;
}