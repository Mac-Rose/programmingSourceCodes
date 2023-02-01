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

map<int, vi> trees;
vector<bool> visited;
int ans = 0;
void dfs(int src, int len)
{
    visited[src] = true;
    ans = max(ans, len);
    for (int &it : trees[src])
    {
        if (visited[it] == false)
        {
            dfs(it, len + 1);
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int nodes;
    cin >> nodes;
    visited.resize(nodes + 1);
    vi temp;
    for (int i = 0; i < nodes; i++)
    {
        int g;
        cin >> g;
        if (g != -1)
        {
            trees[i + 1].pb(g);
            trees[g].pb(i + 1);
        }
        else
            temp.pb(i + 1);
    }
    for (auto &it : temp)
    {
        if (visited[it] == false)
            dfs(it, 1);
    }
    cout << ans;
}