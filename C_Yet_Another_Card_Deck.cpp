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
    int n, q;
    cin>>n>>q;
    list<int> v;
    for(int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        v.pb(g);
    }
    for(int i=0;i<q;i++)
    {
        int g;
        cin>>g;
        auto it=find(v.begin(),v.end(),g);
        cout<<distance(v.begin(),it)+1<<" ";
        v.erase(it);
        v.push_front(g);
    }
    
}