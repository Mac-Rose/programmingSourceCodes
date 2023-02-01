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
    int n,count=1;
    cin>>n;
    vi v,ans;
    int u;
    cin>>u;
    v.pb(1);
    for(int i=1;i<n;i++)
    {
        int g;
        cin>>g;
        if(g==1) 
        {
            ans.pb(v.back());
            count++;
        }
        v.pb(g);
    }
    ans.pb(v.back());
    cout<<count<<endl;
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}