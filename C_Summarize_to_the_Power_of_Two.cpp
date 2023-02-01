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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<0;
        exit(0);
    }
    vi v(n),s;
    for(int i=0;i<31;i++) s.pb(1<<i);
    for(auto &it:v) cin>>it;
    sort(all(v));
    int j,ans=0;
    for(int i=0;i<n;i++)
    {
        j=upper_bound(all(s),v[i])-s.begin();
        for(;j<s.size();j++)
        {
            if(binary_search(v.begin(),v.begin()+i,s[j]-v[i])==true) break;
            if(binary_search(v.begin()+i+1,v.end(),s[j]-v[i])==true) break;
        }
        if(j==s.size()) ans++;
    }
    cout<<ans;
}