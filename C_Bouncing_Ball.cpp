// Problem: C. Bouncing Ball
// Contest: Codeforces - Technocup 2021 - Elimination Round 2
// URL: https://codeforces.com/problemset/problem/1415/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
typedef long long ll;
#define int ll
using namespace std;
string s;
int x, y, k;
inline int solve(string &s, int p, int t, vector<int> &dp)
{
    if (t <= p)
        return 0;
    else if (dp[p] != -1)
        return dp[p];
    else
    {
        int c1 = 0;
        if (s[p] == '0')
            c1 += x;
        c1 += solve(s, p + k, t, dp);
        int c2 = y;
        c2 += solve(s, p + 1, t, dp);
        dp[p] = min(c2, c1);
        return dp[p];
    }
}
signed main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n, p;
        cin >> n >> p >> k;
        vector<int> dp(n, -1);
        cin >> s;
        cin >> x >> y;
        int t = s.size();
        cout << solve(s, p - 1, t, dp);
        cout << endl;
    }
    return 0;
}

//////////////////////////////KharBooZi///////////////////////////////