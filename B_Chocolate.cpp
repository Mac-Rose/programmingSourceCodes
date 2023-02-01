#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
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
    vi v(n),g;
    for(int i=0;i<n;i++) {
        int it;
        cin>>it;
        if(it==1) g.pb(i);
    }
    int ans=1;
    if(g.size()==0)
    {
        cout<<0;
        exit(0);
    }
    if(g.size()==1) cout<<1;
    else 
    {
        for(int i=0;i<g.size()-1;i++)
        {
            if(g[i+1]-g[i]-1==0) continue;
            else  ans*=(g[i+1]-g[i]);
            
            
        }
        cout<<ans;
    }
}