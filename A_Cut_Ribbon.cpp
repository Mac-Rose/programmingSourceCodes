#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back

#define F first
#define S second
map<ll,ll> mp;

ll ans(int n,int a, int b, int c)
{
    if(n==0)
        return 0;
    else if(n<0) 
        return INT_MIN;
    else
    {
        if(mp.count(n)==0)
        return mp[n]=1+max({ans(n-a,a,b,c),ans(n-b,a,b,c),ans(n-c,a,b,c)});
        else 
        return mp[n];
    }
    
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,c;
    
    cin>>n>>a>>b>>c;
    cout<<ans(n,a,b,c);
    
}