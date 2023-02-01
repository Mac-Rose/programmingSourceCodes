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

vector<bool> visited;
map<int, vi> G;
void dfs(int a)
{
    visited[a] = true;
    for (auto &it : G[a])
    {
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
    int ans = 0;
    visited.resize(m + 1);

    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        if (g == 0)
        {
            ans++;
            continue;
        }
        vi temp;
        for (int j = 0; j < g; j++)
        {
            int a;
            cin >> a;
            temp.pb(a);
        }
        for (int j = 0; j < g; j++)
        {
            for (int k = j; k < g; k++)
            {
                G[temp[j]].pb(temp[k]);
                G[temp[k]].pb(temp[j]);
            }
        }
    }
    if (ans == n)
    {
        cout << ans;
        exit(0);
    }
    for (auto &it : G)
    {
        if (visited[it.F] == false)
        {
            ans++;
            dfs(it.F);
        }
    }
    cout << ans - 1;
}