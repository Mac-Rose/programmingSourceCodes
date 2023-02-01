#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <complex>
#include <chrono>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(), c.end()
#define mp(x, y) make_pair(x, y)
#define mem(a, val) memset(a, val, sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

const int MX = 100010; // maximum no. of nodes in graph
vector<bool> visited(MX + 1, 0);

int n;
vector<vector<ll>> G(MX + 1); // adjacency list, (edge,cost) pair

void del(int a, int b)
{
    auto it = find(all(G[a]), b);
    if (it != G[a].end())
        G[a].erase(it);
}
void dfs(int x, int cont)
{
    visited[x] = true;
    cont++;
    for (auto &i : G[x])
    {
        if (visited[i] == false)
        {
            if (cont == 2)
                del(x, i);
            else
            {
                del(i, x);
                dfs(i, cont);
            }
        }
        else
            del(x, i);
    }
}
int main()
{

    std::ios::sync_with_stdio(false);

    for (int i = 0; i < MX + 1; i++)
    {
        G[i].clear();
    }
    fill(all(visited), 0);

    int m; // no. of edges
    cin >> n >> m;

    vector<pii> sto;
    for (int i = 1; i <= m; i++)
    {

        int u, v;
        cin >> u >> v; // 1 based indexing of nodes
        sto.push_back({u, v});
        G[u].eb(v);
        G[v].eb(u);
    }
    for (int i = 1; i <= n; i++)
        if (visited[i] == false)
            dfs(i, 0);
    cout << "YES\n";
    for (auto it : sto)
    {
        if (find(all(G[it.first]), it.second) == G[it.first].end())
        {
            cout << 1;
        }
        else
            cout << 0;
    }
}