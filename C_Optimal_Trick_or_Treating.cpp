#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    map<string, int> m;
    vi g;
    while(tst--)
    {
        string a;
        cin>>a;
        int y;
        cin>>y;
        m.insert(mp(a,y));
    }
    int x,y;
    cin>>x>>y;
    for(int i=0;i<x;i++)
    {
        int u;
        cin>>u;
        string b;
        int s=0;
        int k=0;
        for(int j=0;j<u;j++)
        {
            cin>>b;
            cin>>k;
            auto it = m.find(b);
            s+=k*(it->second);
        }
        g.pb(s);
    }
    sort(g.begin(),g.end(),greater<int>());
    int ans=0;
    int i=0;
    for(auto it=g.begin();i<y;it++,i++)
    {
        ans+=*it;
    }
    cout<<ans;
}