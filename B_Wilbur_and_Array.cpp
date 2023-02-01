#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(),(c).end()

ll abs(ll a,ll b)
{
    if(a>b) return a-b;
    else return b-a;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vi v(n);
    
    for(auto &it:v) cin>>it;
    int ans=abs(v[0]);
    for(int i=1;i<n;i++)
    {
        ans+=abs(v[i],v[i-1]);
    }
    cout<<ans;
}