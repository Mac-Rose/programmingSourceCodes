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

void addEdge(vector<vi> &adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<vi> &adj, int V)
{
    int count=0;
    for (int v = 0; v < V; ++v)
    {
        int flag=1;
        for (auto x : adj[v])
        {
            if(x>v) 
            {
                flag=0;
                break;
            }
        }
        if(flag==1) count++;
    }
    cout<<count<<endl;
}

void delEdge(vector<vi> &adj, int u, int v)
{
    // Traversing through the first vector list
    // and removing the second element from it
    for (int i = 0; i < adj[u].size(); i++) {
        if (adj[u][i] == v) {
            adj[u].erase(adj[u].begin() + i);
            break;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<vi> adj(n),adj1(n);

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        addEdge(adj,a-1,b-1);
    }
    adj1=adj;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int a;
        cin>>a;
        if(a==3)
        {
            printGraph(adj,n);
            adj=adj1;
        }
        else if(a==1) 
            {
                int g,h;
                cin>>g>>h;
                addEdge(adj,g-1,h-1);
            }
        else
        {
            int g,h;
            cin>>g>>h;
            delEdge(adj,g-1,h-1);
        }
    }
}