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
        int n;
        cin >> n;
        vi a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cin >> b[i];
        }
        vi dp(n + 1);
        vi dp1(n);
        for (int i = 2; i <= n; i++) //1->1->1     2->1->2
        {
            dp[i] = max(0ll, a[i - 1] - b[i - 2]) + dp[i - 1];
        }

        for (int i = 1; i < n; i++)
        {
            dp1[i] = max(0ll, a[i - 1] - b[((i - 2) + n) % n]) + dp1[i - 1];
        }
        int ans = INT64_MAX;
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            temp += a[i];
            temp += dp.back() - dp[i + 1];
            temp += dp1[i];
            ans = min(temp, ans);
        }
        cout << ans << endl;
    }
}