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
    ll n;
    cin>>n;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        ll g;
        cin>>g;
        v.pb(g);
    }
    ll ans=v[n-1];
    for(int i=n-2;i>-1;i--)
    {
        if(v[i+1]==0) break;
        if(v[i]>=v[i+1]-1) 
        {
            ans+=v[i+1]-1;
            v[i]=v[i+1]-1;
        }
        else 
        {
            ans+=v[i];
        }
    }
    cout<<ans;
}