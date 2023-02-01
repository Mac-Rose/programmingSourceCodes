#include <bits/stdc++.h>
using namespace std;

// #define int long long
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
int const MOD = 1000000007;

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
        vi r(n), b(n);
        for (int &it : r)
            cin >> it;
        for (int &it : b)
            cin >> it;

        int sum = accumulate(all(r), 0);
        vi dp(sum + 1, -1);
        dp.front() = accumulate(all(b), 0);
        for (int j = 0; j < n; j++)
            for (int i = sum; i >= r[j]; i--)
                dp[i] = max(dp[i - r[j]] - b[j], dp[i]);

        int ans = 0;
        for (int i = 0; i <= sum; i++)
        {
            int temp = min(i, dp[i]);
            ans = max(ans, temp);
        }
        cout << ans << endl;
    }
}