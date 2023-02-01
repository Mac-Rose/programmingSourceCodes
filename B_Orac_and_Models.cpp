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
#define MOD 1000000007

vector<vi> dp(2005, vi(2005, -1)); //State of our dp is the no of ways to reach ith position in exactly k moves

inline int maximum(int &n, int &k, const int &i) //n->position to reach k->steps left i->current value
{
    if (k <= 0)
        return 1;
    else if (dp[i][k] != -1)
        return dp[i][k];
    int ans = 0;
    for (int j = i; j <= n; j += i)
    {
        if (j % i == 0)
        {
            ans += maximum(n, k - 1, j) % MOD;
            ans %= MOD;
        }
    }
    dp[i][k] = ans;
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    dp.resize(n + 1, vi(n + 1));
    cout << maximum(n, k, 1);
}