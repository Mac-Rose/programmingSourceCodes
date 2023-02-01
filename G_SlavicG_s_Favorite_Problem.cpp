#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

vector<bool> visited;
void DFS1(int src, int temp, vi &bpath, map<int, vector<pii>> &graph)
{
    visited[src] = true;
    for (auto &[a, b] : graph[src])
    {
        if (visited[a] == false)
        {
            bpath.pb((temp) ^ (b));
            DFS1(a, (temp) ^ (b), bpath, graph);
        }
    }
}

void DFS(int src, int dest, int temp, vi &apath, map<int, vector<pii>> &graph)
{
    if (src == dest)
        return;
    visited[src] = true;
    for (auto &[a, b] : graph[src])
    {
        if (visited[a] == false)
        {
            apath.pb((temp) ^ (b));
            DFS(a, dest, (temp) ^ (b), apath, graph);
        }
    }
}

bool DFS2(int src, int dest, int temp, map<int, vector<pii>> &graph)
{
    if (src == dest)
    {
        if (temp == 0)
            return true;
        else
            return false;
    }
    visited[src] = true;
    for (auto &[a, b] : graph[src])
    {
        if (visited[a] == false)
        {
            if (DFS2(a, dest, (temp) ^ (b), graph))
                return true;
        }
    }
    return false;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        map<int, vector<pii>> graph;
        for (int i = 0; i < n - 1; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            graph[u].push_back({v, w});
            graph[v].push_back({u, w});
        }
        visited.clear();
        visited.resize(n + 1);
        if (DFS2(a, b, 0, graph))
        {
            cout << "YES" << Endl;
            continue;
        }
        vector<int> apath;
        vector<int> bpath;
        apath.pb(0);
        visited.clear();
        visited.resize(n + 1);
        visited[b] = true;
        DFS(a, b, 0, apath, graph);
        visited.clear();
        visited.resize(n + 1);
        DFS1(b, 0, bpath, graph);
        sort(all(apath));
        sort(all(bpath));
        bool ans = false;
        int i = 0, j = 0;
        while (i < apath.size() and j < bpath.size())
        {
            if (apath[i] > bpath[j])
            {
                j++;
            }
            else if (apath[i] < bpath[j])
            {
                i++;
            }
            else
            {
                ans = true;
                break;
            }
        }
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}