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
    vi v;
    for(int i=0;i<4;i++)
    {
        int g;
        cin>>g;
        v.pb(g);
    }
    auto ma=max_element(v.begin(),v.end());
    for(int i=0;i<4;i++)
    {
        if(*ma-v[i]) cout<<*ma-v[i]<<" ";
    }
}