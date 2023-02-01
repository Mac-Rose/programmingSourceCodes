#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        vi visited(n+1,0);
        
        visited[0]=1;
        vi vis(n,0);
        vector<long long > r;
        auto it =vis.begin();
        for(int i=0;i<n;i++) 
        {
            ll g;
            cin>>g;
            
            if(visited[g]==1) 
            {
                auto k=find(visited.begin(),visited.end(),0);
                int u=distance(visited.begin(),k);
                cout<<u;
                visited[u]++;
                k=find(it,vis.end(),0);
                u=distance(k,vis.end());
                vis[n-u]++;
                r.pb(u);

            }
            else 
            {
                cout<<g;
                r.pb(g);
                visited[g]++;
                vis[n-g]++;
                it=vis.begin()+(n-g);
            }
            cout<<" ";
        }
        cout<<endl;
        for(auto z:r)
        {
            cout<< z <<" ";
        }
        cout<<endl;
    }
}