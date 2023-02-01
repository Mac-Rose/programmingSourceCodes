#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 998244353;

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
        string a;
        cin >> a;
        int ans = 1;
        vi dp(n);
        dp.front() = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                dp[i] = dp[i - 1] << 1ll;
                dp[i] = dp[i] % MOD;
            }
            else
                dp[i] = 1;
            ans = ans + dp[i];
            ans = ans % MOD;
        }
        cout << ans << endl;
    }
}