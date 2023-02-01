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
    int n;
    cin>>n;
    vi v;
    map<int , int> m;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        m[g]++;
    }
    int big=(--(m.end()))->F;
    cout<<(--(m.end()))->F;
    for(auto it:m)
    {
        if(it.S==2) v.pb(it.F);
        else if(big%(it.F)!=0) v.pb(it.F);
    }
    cout<<" "<<v.back();
}