#include <bits/stdc++.h>
using namespace std;

// #define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define mod 1000000007
#define all(c) (c).begin(), (c).end()
vector<vi> dp;
int d, k;
inline int solve(const int &left, const int &msf) //left distance to travel, max so far
{
    if (left < 0)
        return 0;
    if (left == 0)
    {
        if (msf >= d)
            return 1;
        else
            return 0;
    }
    if (dp[left][msf] == -1)
    {
        int ans = 0;
        for (int i = 1; i <= k; i++)
        {
            ans += solve(left - i, max(msf, i));
            ans %= mod;
        }
        dp[left][msf] = ans;
    }
    return dp[left][msf];
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n >> k >> d;
    dp.resize(n + 1, vi(k + 1, -1));
    cout << solve(n, 0);
}