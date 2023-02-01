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
vi dst, caller;
map<int, vector<pii>> Graph;

void Dijkstra()
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, 1});
    dst[1] = 0;
    while (pq.size())
    {
        int parent = pq.top().S, wsf = pq.top().F;
        pq.pop();
        if (dst[parent] != wsf)
            continue;
        for (pii &i : Graph[parent])
        {
            if (dst[i.S] > wsf + i.F)
            {
                caller[i.S] = parent;
                dst[i.S] = wsf + i.F;
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
    for (int i = 1; i <= edges; ++i)
    {
        int u, v, c;
        cin >> u >> v >> c;
        Graph[u].push_back({c, v});
        Graph[v].push_back({c, u});
    }
    dst.resize(nodes + 1, 1e18);
    caller.resize(nodes + 1);
    Dijkstra();
    if (dst[nodes] == 1e18)
    {
        cout << -1;
        exit(0);
    }
    stack<int> st;
    while (nodes)
    {
        st.push(nodes);
        nodes = caller[nodes];
    }
    while (st.size())
    {
        cout << st.top() << ' ';
        st.pop();
    }
}