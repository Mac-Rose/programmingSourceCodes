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
    string a,b;
    cin>>a>>b;
    map<char,char> v;
    int flag=0;
    for(int i=0;i<a.size();i++)
    {
        {
            if(v.find(a[i])==v.end() and v.find(b[i])==v.end())
            v.insert({a[i],b[i]});
            else 
            {
                if(v.find(a[i])==v.end())
                {
                    if(a[i]!=v[b[i]] )
                    {
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(b[i]!=v[a[i]] )
                    {
                        flag=1;
                        break;
                    }
                }
                
            }
        }
    }
    
    vector<char> g;
    set<char> s(all(g));
    for(auto it=v.begin();it!=v.end();it++)
    {
        char j=it->F;
        if(it->F==it->S) g.pb(j);
        s.emplace(it->S);
    }
    if(v.size()!=s.size()) flag=1;
    for(int i=0;i<g.size();i++)
    {
        v.erase(g[i]);
    }
    
    if(flag==1) {cout<<-1;exit(0);}
    cout<<v.size()<<endl;
    for(auto it:v) cout<<it.F<<" "<<it.S<<endl;
}