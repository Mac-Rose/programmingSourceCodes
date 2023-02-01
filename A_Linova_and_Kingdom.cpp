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

vector<vi> m;
vi level, subsz;
vi parent;
vector<bool> visited;
void dfs(int src)
{
    // visited[src] = true;
    for (int &it : m[src])
    {
        if (parent[it] == it)
        {
            parent[it] = src;
            level[it] = level[src] + 1;
            dfs(it);
        }
    }
    for (int j = 0; j < m[src].size(); j++)
        if (m[src][j] != parent[src])
            subsz[src] += subsz[m[src][j]] + 1;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    level.resize(n + 1);
    subsz.resize(n + 1);
    parent.resize(n + 1);
    // visited.resize(n + 1);
    m.resize(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        m[a].pb(b);
        m[b].pb(a);
    }
    dfs(1);
    vi distance(n);

    for (int i = 0; i < n; i++)
    {
        distance[i] = level[i + 1] - subsz[i + 1];
    }
    sort(all(distance), greater<int>());
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += distance[i];
    }
    cout << ans;
}