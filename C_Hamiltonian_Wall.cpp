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
vector<vector<int>> dp;
int minFallingPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    dp.resize(n, vector<int>(n, INT_MAX));

    for (auto &it : matrix)
    {
        for (int &i : it)
            cin >> i;
    }
    dp.back() = matrix.back();
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (j - 1 > -1)
            {
                dp[i - 1][j - 1] = min(dp[i - 1][j - 1], dp[i][j] + matrix[i - 1][j - 1]);
            }
            if (j + 1 < n)
            {
                dp[i - 1][j + 1] = min(dp[i - 1][j + 1], dp[i][j] + matrix[i - 1][j + 1]);
            }
            dp[i - 1][j] = min(dp[i - 1][j], dp[i][j] + matrix[i - 1][j]);
        }
        for (auto &it : dp)
        {
            for (int &i : it)
                cout << i << ' ';
            cout << endl;
        }
        cout << endl;
    }

    return *min_element(dp.front().begin(), dp.front().end());
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vi> mat{{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};
    cout << minFallingPathSum(mat);
}