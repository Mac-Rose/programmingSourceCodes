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
    int n;
    cin >> n;
    vi x(n), h(n);
    if (n == 1)
    {
        cout << 1;
        exit(0);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> h[i];
    }
    vector<vi> dp(n, vi(3));
    dp[0][1] = 1;
    if (x[0] + h[0] < x[1])
        dp[0][2] = 1;
    for (int i = 1; i < n - 1; i++)
    {
        int c = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
        dp[i][0] = c;
        if (x[i] - h[i] > x[i - 1])
            dp[i][1] = max(dp[i - 1][0], dp[i - 1][1]) + 1;

        if (x[i] - h[i] > x[i - 1] + h[i - 1])
            dp[i][1] = max(dp[i][1], dp[i - 1][2] + 1);

        if (x[i] + h[i] < x[i + 1])
        {
            dp[i][2] = c + 1;
        }
        else
            dp[i][2] = c;
    }
    int c = max({dp[n - 2][0], dp[n - 2][1], dp[n - 2][2]});
    cout << c + 1;
}