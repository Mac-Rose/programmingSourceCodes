#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    vector<vi> m(n + 1);
    vector<vi> query(n + 1);
    reverse(all(v));
    int g;
    cin >> g;
    vi order;
    for (int i = 0; i < g; i++)
    {
        int l, r;
        cin >> l >> r;
        order.pb(l);
        query[l].pb(l - r);
    }
    for (int i = 0; i < query[n].size(); i++)
    {
        m[n].pb(v[query[n][i]]);
    }
    vector<pii> a;
    for (int i = 0; i < n; i++)
    {
        a.push_back
    }
    for (int i = n - 1; i > 0; i--)
    {
        auto it = min_element(v.begin(), v.end());
        v.erase(it);
        for (int j = 0; j < query[i].size(); j++)
        {
            m[i].pb(v[query[i][j]]);
        }
    }
    vi count(n + 1, 0);
    for (auto &it : order)
    {
        cout << m[it][count[it]] << '\n';
        count[it]++;
    }
}