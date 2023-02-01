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
    vi v;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        v.pb(g);
    }
    int ans=v[0];
    int po=0;
    for(int i=0;i<n-1;i++)
    {
        if(po+v[i]-v[i+1]<0)
        {
            ans+=-(po+v[i]-v[i+1]);
            po=0;
        }
        else po+=v[i]-v[i+1];
    }
    cout<<ans;
}