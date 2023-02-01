#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
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
        int n, h;
        cin >> n >> h;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        sort(all(v));
        int a = v.back() + v[n - 2];
        int ans = 2 * (h / a);
        h = h % a;
        if (h)
        {
            if (h <= v.back())
                ans++;
            else
                ans += 2;
        }
        cout << ans << '\n';
    }
}