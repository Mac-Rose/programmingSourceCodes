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

int knapSack(int W, vi wt, vi val, int n)
{
    // making and initializing dp array
    int dp[W + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i < n + 1; i++)
    {
        for (int w = W; w >= 0; w--)
        {

            if (wt[i - 1] <= w)
                // finding the maximum value
                dp[w] = max(dp[w],
                            dp[w - wt[i - 1]] + val[i - 1]);
        }
    }
    return dp[W]; // returning the maximum value of knapsack
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
        int n, k;
        cin >> n >> k;
        vi b(n), c(n);
        for (int &it : b)
            cin >> it;
        for (int &it : c)
            cin >> it;
        vi cost(n);
        for (int i = 0; i < n; i++)
        {
            int k1 = 0;
            int j = 1;
            while (j < b[i])
            {
                j *= 2;
                k1++;
            }

            cost[i] = k1;
        }
        cout << knapSack(k, cost, c, n) << endl;
    }
}