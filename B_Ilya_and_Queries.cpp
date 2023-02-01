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
    string a;
    cin>>a;
    vi v;
    v.pb(0);
    v.pb(0);
    int temp=0;
    for(int i=1;i<a.size();i++)
    {
        if(a[i]==a[i-1]) temp++;
        v.pb(temp);
    }
    
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<v[r]-v[l]<<"\n";
    }
}