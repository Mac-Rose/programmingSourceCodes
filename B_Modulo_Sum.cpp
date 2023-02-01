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
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        cout << "YES";
        exit(0);
    }
    vi v(n);
    for (int &it : v)
    {
        cin >> it;
        it %= m;
        if (it == 0)
        {
            cout << "YES";
            exit(0);
        }
    }

    vector<vector<bool>> dp(2, vector<bool>(m));

    for (int i = 0; i < n; i++)
    {
        dp[i % 2][v[i]] = true;
        for (int j = 0; j < m; j++)
        {
            if (dp[(i + 1) % 2][j] == true)
            {
                dp[i % 2][j] = true;
                dp[i % 2][(j + v[i]) % m] = true;
            }
        }
        if (dp.front().front())
        {
            cout << "YES";
            exit(0);
        }
        if (dp.back().front())
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
}