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
    string a;
    cin >> a;
    int n = a.size();
    vector<vector<bool>> dp(n, vector<bool>(8));
    vector<vector<int>> caller(n, vector<int>(8, -1));
    dp[0][(a[0] - 48) % 8] = true;
    for (int i = 1; i < n; i++)
    {
        dp[i][(a[i] - 48) % 8] = true;
        for (int j = 0; j < 8; j++)
        {
            if (dp[i - 1][j])
            {
                dp[i][j] = true;
                caller[i][j] = j;
                dp[i][((a[i] - 48) + 10 * j) % 8] = true;
                caller[i][((a[i] - 48) + 10 * j) % 8] = j;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (dp[i][0])
        {
            string ans;
            int curI = i, curJ = 0;

            while (true)
            {
                if (caller[curI][curJ] == -1 or caller[curI][curJ] != curJ)
                {
                    ans = a[curI] + ans;
                }

                if (caller[curI][curJ] == -1)
                    break;

                curJ = caller[curI][curJ];
                curI--;
            }
            cout << "YES\n";
            cout << ans;
            exit(0);
        }
    }
    cout << "NO";
}