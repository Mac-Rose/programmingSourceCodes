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
int N, M, K;
string a, b, c;
int dp[2][101][101];
bool solve(int chance, int i, int j, int k)
{
    if (dp[chance][i][j] != -1)
        return dp[chance][i][j];
    if (chance)
    {
        if (i == N)
        {
            if (b.substr(j, M - j) == c.substr(k, K - k))
                return dp[chance][i][j] = true;
            return dp[chance][i][j] = false;
        }
        int x = 0;
        while (j + x < M and k + x < K and b[j + x] == c[k + x])
        {
            if (solve(1 - chance, i, j + x + 1, k + x + 1))
                return dp[chance][i][j] = true;
            x++;
        }
        return dp[chance][i][j] = false;
    }
    else
    {
        if (j == M)
        {
            if (a.substr(i, M - i) == c.substr(k, K - k))
                return dp[chance][i][j] = true;
            return dp[chance][i][j] = false;
        }
        int x = 0;
        while (i + x < N and k + x < K and a[i + x] == c[k + x])
        {
            if (solve(1 - chance, i + x + 1, j, k + x + 1))
                return dp[chance][i][j] = true;
            x++;
        }
        return dp[chance][i][j] = false;
    }
}
bool isInterleave(string s1, string s2, string s3)
{
    a = s1, b = s2, c = s3;
    N = s1.size(), M = s2.size(), K = s3.size();
    memset(dp, -1, sizeof(dp));
    return (solve(1, 0, -1, 0) or solve(0, 0, -1, 0));
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << isInterleave("a", "", "a");
}