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
    int n,t;
    cin>>n>>t;
    vi v(10e5+4,0);
    for(int i=0;i<n;i++)
    {
        int s,d;
        cin>>s>>d;
        for(;s<10e5+4;s+=d) v[s]=i+1;
    }
    for(;t<10e5+4;t++)
    {
        if(v[t]!=0)
        {
            cout<<v[t];
            break;
        }
    }
}