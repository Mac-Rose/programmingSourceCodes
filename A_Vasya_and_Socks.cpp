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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    int rem=0;
    int ans=n;
    while(n>=m)
    {
        rem=n%m;
        n/=m;
        ans+=n;
        n+=rem;
    }
    cout<<ans;
}