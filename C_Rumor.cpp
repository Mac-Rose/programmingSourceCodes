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
vector<vector<int>> G(MX + 1); // adjacency list, (edge,cost) pair

ll dfs(int x, vector<bool> &visited, vector<int> &ans, ll &ans1, vector<ll> &wt)
{
    visited[x] = true;
    ans.eb(x);
    if (wt[x - 1] < ans1)
        ans1 = wt[x - 1];
    for (auto &i : G[x])
    {
        if (visited[i] == false)
        {
            dfs(i, visited, ans, ans1, wt);
        }
    }
    return ans1;
}

int main()
{
    std::ios::sync_with_stdio(false);
    int m; // no. of edges
    cin >> n >> m;
    vector<ll> wt(n, 0);
    for (auto &it : wt)
        cin >> it;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v; // 1 based indexing of nodes
        G[u].eb(v);
        G[v].eb(u);
    }

    ll ans1 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            vector<int> ans;
            ll j = inf;
            ll ma = dfs(i, visited, ans, j, wt);
            ans1 += ma;
        }
    }
    cout << ans1;
    return 0;
}