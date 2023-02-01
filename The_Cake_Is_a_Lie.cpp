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
    while(tst--)
    {
        int x,y,d;
        cin>>x>>y>>d;
        int re=y-1+(y)*(x-1);
        if(re!=d) cout<<"NO\n";
        else cout<<"YES\n";
    }
}