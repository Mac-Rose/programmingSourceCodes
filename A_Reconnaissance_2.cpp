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
    cin>>n;
    vi v(n);
    for(auto &it:v) cin>>it;
    v.pb(v.front());
    pii ans;
    int f=INT_MAX;
    for(int i=0;i<v.size()-1;i++)
    {
        if(abs(v[i]-v[i+1])<f) 
        {
            f=abs(v[i]-v[i+1]);
            if(i+2>n) ans={i+1,1};
            else ans={i+1,i+2};
        }
    }
    cout<<ans.F<<" "<<ans.second;
}