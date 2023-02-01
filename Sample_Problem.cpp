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
int const MOD = 1000000007;

vector<int> dp;
int solve(int n, int egg)
{
    if (egg == 1)
        return n;
    if (n == 0)
        return 0;

    if (dp[n])
        return dp[n];
    int ans = 50000;
    for (int i = 1; i <= n; i++)
    {
        ans = min(ans, 1 + max(solve(n - i, 2), solve(i - 1, 1)));
    }
    return dp[n] = ans;
}
int twoEggDrop(int n)
{
    dp.resize(n + 1);
    return solve(n, 2);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << twoEggDrop(100);
}