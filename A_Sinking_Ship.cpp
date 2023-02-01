#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<string,string>> v;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a>>b;
        v.pb(mp(a,b));
    }
    vector<string> r,w,m,c;
    for(auto it:v)
    {
        if(it.S=="rat") r.pb(it.F);
        else if(it.S=="woman" or it.S=="child") w.pb(it.F);
        else if(it.S=="man") m.pb(it.F);
        else c.pb(it.F);
    }
    for(auto it:r)
    {
        cout<<it<<endl;
    }
    for(auto it:w)
    {
        cout<<it<<endl;
    }
    for(auto it:m)
    {
        cout<<it<<endl;
    }
    for(auto it:c)
    {
        cout<<it<<endl;
    }
}