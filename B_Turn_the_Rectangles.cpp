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
    vector<pii> v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    if(v[0].F>v[0].S) swap(v[0].F,v[0].S);
    for(int i=1;i<n;i++)
    {
        if(v[i].S>v[i-1].S) swap()
    }
}