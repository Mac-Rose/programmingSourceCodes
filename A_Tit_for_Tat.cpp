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
    int tst;
    cin>>tst;
    while (tst--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int g;
            cin>>g;
            v.pb(g);
        }
        int xo=0;
        for(int i=0;i<n;i++)
        {
            xo^=v[i];
        }
        int re=xo,count=0;
        if(xo==0) cout<<"YES\n";
        else
        {
            xo=0;
            for(int i=0;i<n;i++)
            {
                xo^=v[i];
                if(xo==re) count++;
            }
            if(count>2) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
