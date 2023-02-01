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
        int n,x,t;
        cin>>n>>x>>t;
        unsigned long long ans=0;
        t=t/x;
        if(n<=t) ans=(n*n-n)/2;
        else ans=t*(n-t)+(t*t-t)/2;
        cout<<ans<<"\n";
    }
}