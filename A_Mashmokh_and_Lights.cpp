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
    int n,m;
    cin>>n>>m;
    vi v(m);
    vi u(n,-1);
    for(auto &it:v) cin>>it;
    for(int i=0;i<m;i++)
    {
        for(int j=v[i]-1;j<n;j++)
        {
            if(u[j]==-1) u[j]=v[i];
        }
    }
    for(auto it:u) cout<<it<<" ";
}