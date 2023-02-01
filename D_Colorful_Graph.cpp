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
#define MOD 1000000007

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    map<int, vi> color;
    map<int, int> color1;
    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        color[g].pb(i + 1);
        color1[i + 1] = g;
    }
    vector<vi> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        adj[l].pb(r);
        adj[r].pb(l);
    }
    map<int, int> ans;
    for (auto &it : color)
    {
        set<int> s;
        s.emplace(it.F);
        for (auto &i : it.S)
        {
            for (auto &a : adj[i])
            {
                s.emplace(color1[a]);
            }
        }
        ans[it.F] = s.size() - 1;
    }
    int max = 0;
    int ans1 = color.begin()->F;
    for (auto &it : ans)
        if (it.S > max)
            max = it.S, ans1 = it.F;
    cout << ans1;
}