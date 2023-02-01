#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
// #define int long long
#define S second
#define all(c) (c).begin(), (c).end()

vi v(2 * 1e5 + 1);
int n;
inline int maximum(int i, vector<ll> &dp)
{
    if (dp[i] != -1)
        return dp[i];
    int ans;
    if (i + v[i] >= n)
        ans = v[i];
    else
        ans = v[i] + maximum(i + v[i], dp);
    dp[i] = ans;
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        cin >> n;
        v.resize(n);
        for (auto &it : v)
            cin >> it;
        vector<ll> dp(n, -1); //State of the dp is the max point that can be scored starting from the given index
        dp[n - 1] = v[n - 1];
        for (int i = 0; i < n; i++)
        {
            if (dp[i] == -1)
                maximum(i, dp);
        }
        cout << *max_element(all(dp)) << '\n';
    }
}