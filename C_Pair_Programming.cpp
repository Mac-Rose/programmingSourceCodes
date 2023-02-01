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
        int n,m,k;
        cin>>n>>m>>k;
        vi v(m);
        for(auto &it:v)cin>>it;
        vi g(k);
        for(auto &it:g)cin>>it;
        int i=0;
        int l=0;
        vi ans;
        int flag=0;
        while(i+l<=m+k-1)
        {
            if(v[i]<=n and i<m)
            {

                if(v[i]==0)n++;
                ans.pb(v[i]);
                i++;
            }
            else if(g[l]<=n and l<k)
            {
                if(g[l]==0)n++;
                ans.pb(g[l]);
                l++;
            }
            else{flag=1;break;}
        }
        if(flag==0)
        {
            for(auto it:ans) cout<<it<<" ";
        }
        else cout<<-1;
        cout<<endl;
    }
}