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
    vi v;
    v.pb(0);
    cin>>n;
    v.pb(1);
    for(int i=2;v[i-1]+v[i-2]<=n;i++)
    {
        v.pb(v[i-1]+v[i-2]);
    }
    auto it=upper_bound(all(v),n);
    it--;
    cout<<*it<<" ";
    n-=*it;
    it=upper_bound(all(v),n);
    it--;
    cout<<*it<<" ";
    n-=*it;
    cout<<n;
}