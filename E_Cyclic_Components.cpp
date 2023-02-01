#include <bits/stdc++.h>
using namespace std;

// #define int long long
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
vector<vi> G;

inline void dfs(int src, vi &temp)
{
    visited[src] = true;
    temp.pb(src);
    for (auto &it : G[src])
        if (visited[it] == false)
            dfs(it, temp);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    visited.resize(n + 1);
    G.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        G[l].pb(r);
        G[r].pb(l);
    }
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == false)
        {
            vi temp;
            dfs(i, temp);
            int k = 0;
            bool flag = true;
            for (auto &it : temp)
            {
                k += G[it].size();
                if (G[it].size() == 1)
                    flag = false;
            }
            if (temp.size() * 2 == k and flag)
                c++;
        }
    }
    cout << c;
}