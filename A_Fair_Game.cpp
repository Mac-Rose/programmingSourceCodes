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
    set<int> s(all(v));
    if(s.size()==2)
    {
        int ca=0,cb=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==v[0]) ca++;
            else cb++;
            
        }
        (ca==cb)?cout<<"YES\n": cout<<"NO\n";
            if(ca==cb)
            for(auto it:s) cout<<it<<" ";
    }
    else cout<<"NO";
}