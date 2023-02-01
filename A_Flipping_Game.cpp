#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vi v;
    int ans=0;
    int o=0;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        if(g>0) 
        {
            o++;
            v.pb(-1);
        }
        else 
        {
            v.pb(1);
        }
    }
    if(o==n) 
    {
        cout<<n-1;
        exit(0);
    }
    int x=0;
    for(int i=0;i<n;i++)
    {
        x=max(0,x+v[i]);
        ans=max(ans,x);
    }
    cout<<ans+o;
}