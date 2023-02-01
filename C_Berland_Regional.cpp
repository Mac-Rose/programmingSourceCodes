#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        map<int, vi> m; //First contain university no second contain skill of student
        for (auto &it : v)
            cin >> it;
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            m[v[i]].pb(g);
        }
        for (auto &it : m)
            sort(all(it.S), greater<ll>());
        for (auto &it : m)
        {
            int x = it.S.size();

            for (int i = 1; i < x; i++)
                it.S[i] += it.S[i - 1];
        }
        vi ans(n, 0);
        for (int i = 1; i <= m.size(); i++)
        {
            int u = m[i].size();
            for (int j = 1; j <= u; j++)
            {
                ans[j - 1] += m[i][u - 1 - u % j];
            }
        }
        for (auto it : ans)
            cout << it << ' ';
        cout << "\n";
    }
}