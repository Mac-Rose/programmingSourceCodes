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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, l, r, k;
        cin >> n >> l >> r >> k;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        sort(all(v));
        int ans = 0, j = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= l and v[i] <= r and j + v[i] <= k)
            {
                ans++;
                j += v[i];
            }
        }
        cout << ans << endl;
    }
}