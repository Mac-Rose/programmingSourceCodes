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
    vector<vi> dp(2, vi(n)); //state of the dp is max height that you can achieve by selecting this player
    vector<vi> matrix(2, vi(n));
    for (auto &it : matrix)
    {
        for (auto &i : it)
            cin >> i;
    }
    int umax = 0, lmax = 0;
    for (int i = n - 1; i > -1; i--)
    {
        dp[0][i] = matrix[0][i] + lmax;
        dp[1][i] = matrix[1][i] + umax;
        if (dp[0][i] > umax)
            umax = dp[0][i];
        if (dp[1][i] > lmax)
            lmax = dp[1][i];
    }
    cout << max(umax, lmax);
}