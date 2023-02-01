#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()

int nodes;
vi dst;
vector<vector<pii>> Graph;
inline void Dijkstra()
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, 1});
    dst[1] = 0;
    while (!pq.empty())
    {
        int parent = pq.top().S;
        int x = pq.top().F;
        pq.pop();
        if (dst[parent] != x)
            continue;
        for (pii &i : Graph[parent])
        {
            if (dst[i.S] > dst[parent] + i.F)
            {
                dst[i.S] = dst[parent] + i.F;
                pq.push({dst[i.S], i.S});
            }
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int edges;
    cin >> nodes >> edges;
    Graph.resize(nodes + 1);
    for (int i = 1; i <= edges; ++i)
    {
        int u, v, c;
        cin >> u >> v >> c;
        Graph[u].push_back({c, v});
        // Graph[v].push_back({c, u});
    }
    dst.resize(nodes + 1, 1e18);
    Dijkstra();
    for (int i = 1; i <= nodes; i++)
        cout << dst[i] << ' ';
}