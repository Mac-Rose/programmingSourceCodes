#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

int flag = 0;
void dfs(int a, map<int, vi> &graph, vi &ans, vector<bool> &visited)
{
    visited[a - 1] = true;

    for (auto it : graph[a])
    {
        if (visited[it - 1] == false)
        {
            ans.pb(it);
            dfs(it, graph, ans, visited);
            ans.pop_back();
            visited[it - 1] = false;
        }
    }
}
void addEdge(int a, int b, map<int, vi> &graph)
{
    graph[a].pb(b);
    graph[b].pb(a);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int nodes;
    cin >> nodes;
    map<int, vi> graph;
    int edges;
    cin >> edges;
    for (int i = 0; i < edges; i++)
    {
        int a, b;
        cin >> a >> b;
        addEdge(a, b, graph);
    }
    int source, destination;
    cin >> source >> destination;
    vi ans;
    ans.pb(source);
    vector<bool> visited(nodes, false);
    for (int i = 1; i <= nodes; i++)
        if (visited[i] == false)
            dfs(source, graph, ans, visited);
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    cout << '\n';
}