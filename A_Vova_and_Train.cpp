#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
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
        long long n,v,l,r,ans=0,k=0;
        cin>>n>>v>>l>>r;
        ans=n/v;
        k=(r/v)-((l-1)/v);
        ans-=k;
        cout<<ans<<endl;
    }
}