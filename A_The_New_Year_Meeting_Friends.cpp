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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi v;
    for(int i=0;i<3;i++)
    {
        int g;
        cin>>g;
        v.pb(g);
    }
    sort(v.begin(),v.end());
    int ans=v[2]-v[0];
    cout<<ans;
}