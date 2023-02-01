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
    vi lim;
    vector<vi> dp;
    vi pos;
    int n;
    int d, k;
    cin >> n >> d >> k;
    /*state of the dp is minimum time required to reach ith gate 
    after exactly j skips*/
    pos.resize(n);
    dp.resize(n + 1, vi(k + 1, INT64_MAX));
    lim.resize(n);
    for (int &it : pos)
        cin >> it;
    pos.pb(d);
    for (int &it : lim)
        cin >> it;
    dp[0][0] = 0;
    for (int i = k; i > -1; i--)
    {
        dp[i + 1][i] = pos[i + 1] * lim[0];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j > -1; j--) //j batara rha h ki abhi tak kitne skips karliye h
        {
            for (int m = k - j; m > -1; m--)
            {
                if (i + m + 1 > n)
                    continue;
                dp[i + m + 1][j + m] = min(dp[i + m + 1][j + m],
                                           dp[i][j] + (pos[i + m + 1] - pos[i]) * lim[i]);
            }
        }
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= k; j++)
    //         cout << dp[i][j] << ' ';
    //     cout << endl;
    // }
    int ans = INT64_MAX;
    for (int i = 0; i <= k; i++)
    {
        ans = min(ans, dp[n][i]);
    }
    cout << ans;
}