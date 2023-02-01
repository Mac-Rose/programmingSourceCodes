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
    vector<pii> v;
    for(int i=0;i<n;i++)
    {
        int g,h;
        cin>>g>>h;
        if(g==0 and h==0) ;
        else
        v.pb(mp(g,h));
    }
    auto it=unique(v.begin(),v.end());
    v.resize(distance(v.begin(),it));
    
    if(v.size()==1) 
    {
        cout<<min(v[0].F,v[0].S)+1;
        exit(0);
    }
    if(v.size()==0) 
    {
        cout<<1;
        exit(0);
    }
    int ans=0;
    ans+=min(v[0].F,v[0].S);
    if(v[0].F==v[0].S) ;
    else ans++;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i].F>v[i].S)
        {
            if(v[i+1].S>=v[i].F)
            {
                if(v[i+1].S<v[i+1].F) ans+=(v[i+1].S-v[i].F)+1;
                else if(v[i+1].S>v[i+1].F) ans+=v[i+1].F-v[i].F+1;
                else ans+=v[i+1].F-v[i].F;
            }
        }
        else
        {
            if(v[i+1].F>=v[i].S)
            {
                if(v[i+1].F<v[i+1].S) ans+=(v[i+1].F-v[i].S)+1;
                else if(v[i+1].F>v[i+1].S) ans+=v[i+1].S-v[i].S+1;
                else ans+=v[i+1].S-v[i].S;
            }
        }
        
    }
    if(v[v.size()-1].F==v[v.size()-1].S) ans++;
    cout<<ans;
}