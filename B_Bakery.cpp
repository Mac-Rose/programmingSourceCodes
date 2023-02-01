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

//her bakery k neighbour me sabse pass wala city answer hoga
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int ans = -1;
    map<int, vector<pii>> Graph;
    for (int i = 0; i < m; i++)
    {
        int a, b, l;
        cin >> a >> b >> l;
        Graph[a].push_back({b, l});
        Graph[b].push_back({a, l});
    }
    set<int> s;
    for (int i = 0; i < k; i++)
    {
        int g;
        cin >> g;
        s.emplace(g);
    }
    int min = INT64_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (s.find(i) != s.end())
            for (auto &it : Graph[i])
            {
                if (s.find(it.F) == s.end())
                {
                    if (it.S < min)
                        min = it.S, ans = it.F;
                }
            }
    }
    if (ans == -1)
        cout << -1;
    else
        cout << min;
}