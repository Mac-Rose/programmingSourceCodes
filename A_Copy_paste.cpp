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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,m;
        cin>>n>>m;
        vi v(n);
        for(auto &it:v) cin>>it;
        sort(all(v));
        int ans=0,s=v[0];
        for(int i=1;i<n;i++)
        {
            if(m-v[i]<=0) break;
            ans+=(m-v[i])/s;
        }
        cout<<ans<<endl;
    }
}