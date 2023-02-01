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

int c(int n, int r)
{
    if (r > n)
        return 0;
    r = min(r, n - r);
    int x = 1, y = 1;
    for (int i = 1; i <= r; i++)
    {
        x *= n;
        y *= i;
        int g = __gcd(x, y);
        x /= g;
        y /= g;
        n--;
    }
    return x;
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
        vector<pii> g;
        int n;
        cin >> n;
        vi m(n + 1), y(n + 1);
        int ans = c(n, 3);
        for (int i = 0; i < n; i++)
        {
            int t, r;
            cin >> t >> r;
            m[t]++;
            y[r]++;
            g.push_back({t, r});
        }

        for (auto &it : g)
        {
            ans -= ((m[it.F] - 1) * (y[it.S] - 1));
        }
        cout << ans << endl;
    }
}