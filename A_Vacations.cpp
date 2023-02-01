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

vector<vi> dp;
/*state of dp in this case will be the no
of days vasya has not taken rest till the ith day if
he perform jth task on ith day.*/
vi v;
int n;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    v.resize(n);
    dp.resize(n + 1, vi(3));
    for (auto &it : v)
        cin >> it;
    for (int i = 1; i <= n; i++)
    {
        int k = v[i - 1];
        dp[i][0] = min({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]}) + 1;
        if (k == 1 or k == 3)
        {
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        }
        else
        {
            dp[i][1] = dp[i - 1][1] + 1;
        }
        if (k == 2 or k == 3)
        {
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
        else
        {
            dp[i][2] = dp[i - 1][2] + 1;
        }
    }
    cout << min({dp[n][0], dp[n][1], dp[n][2]});
}