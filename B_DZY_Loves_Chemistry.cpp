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

int ans = 1ll;
vector<bool> visited;
vector<vi> graph;

void dfs(int i)
{
    if (visited[i] == false)
    {
        ans <<= 1ll;
        visited[i] = true;
        for (int &it : graph[i])
            if (visited[it] == false)
                dfs(it);
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    visited.resize(n + 1);
    graph.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
            ans >>= 1ll;
        }
    }
    cout << ans;
}