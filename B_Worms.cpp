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
    int n;
    cin>>n;
    vi v;
    int s=0;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        s+=g;
        v.pb(s);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int q;
        cin>>q;
    cout<<lower_bound(v.begin(),v.end(),q)-v.begin()+1<<"\n";
    }
}