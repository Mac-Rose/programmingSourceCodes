#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vi v(n,0);
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        if(g<=n)
        v[g-1]++;
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==0) 
        {cout<<i+1;
        exit(0);}
    }
    cout<<n+1;
}