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
    int k;
    int cp=0,cz=0,cn=0;
    vi p,n,z;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int g;
        cin>>g;
        if(g>0)
        {
            cp++;
            p.pb(g);
        }
        else if(g==0) 
        {
            cz++;
            z.pb(0);
        }
        else
        {
            cn++;
            n.pb(g);
        }
        
    }
    if(cp==0) 
    {
        p.pb(n.back());
        n.pop_back();
        p.pb(n.back());
        n.pop_back();
        cp+=2;
        cn-=2;
    }
    if(!(cn&1))
    {
        cn--;
        cz++;
        z.pb(n.back());
        n.pop_back();
    }
    cout<<cn<<" ";
    for(auto it:n) cout<<it<<" ";
    cout<<endl;
    cout<<cp<<" ";
    for(auto it:p) cout<<it<<" ";
    cout<<endl;
    cout<<cz<<" ";
    for(auto it:z) cout<<it<<" ";
    cout<<endl;
}