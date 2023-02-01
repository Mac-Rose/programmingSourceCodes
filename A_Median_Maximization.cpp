// 1. You are given a 2d array where 0's represent land and 1's represent water.
// Assume every cell is linked to it's north, east, west and south cell.
// 2. You are required to find and count the number of islands.

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define Endl "\n"
#define S second
#define all(c) (c).begin(), (c).end()
#define int long long

vector<vector<bool>> visited;
void dfs(pii x, map<pii, vector<pii>> &G)
{
    visited[x.F][x.S] = true;
    for (auto &i : G[x])
    {
        if (visited[i.F][i.S] == false)
        {
            dfs(i, G);
        }
    }
}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    srand(time(NULL)); //for stress-testing
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    map<pii, vector<pii>> graph;
    int ans = 0;
    cin >> n >> m;
    vector<vi> matrix(n, vi(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    visited.resize(n);
    for (int i = 0; i < n; i++)
        visited[i].resize(m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                if (j != m - 1 and matrix[i][j + 1] == 0)
                {
                    graph[{i, j}].push_back({i, j + 1});
                }
                if (j != 0 and matrix[i][j - 1] == 0)
                {
                    graph[{i, j}].push_back({i, j - 1});
                }
                if (i != n - 1 and matrix[i + 1][j] == 0)
                {
                    graph[{i, j}].push_back({i + 1, j});
                }
                if (i != 0 and matrix[i - 1][j] == 0)
                {
                    graph[{i, j}].push_back({i - 1, j});
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (visited[i][j] == false and matrix[i][j] == 0)
            {
                dfs({i, j}, graph);
                ans++;
            }
    cout << ans;
}