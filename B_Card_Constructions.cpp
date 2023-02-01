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
    vi dp; //State here is the number of cards required to build pyramid
    dp.pb(0);
    dp.pb(0);
    for (int i = 2; dp[i - 1] < 1e9; i++)
    {
        dp.pb(dp[i - 1] + 2 * (i - 1) + i - 2);
    }
    int tst;
    cin >> tst;
    while (tst--)
    {
        int ans = 0;
        int n;
        cin >> n;
        while (n > 1)
        {
            int idx = upper_bound(all(dp), n) - dp.begin();
            idx--;
            ans++;
            n -= dp[idx];
        }
        cout << ans << '\n';
    }
}