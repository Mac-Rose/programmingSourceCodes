#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first

#define S second
#define all(c) (c).begin(), (c).end()

map<int, bool> dp;

string check(int n)
{
    if (n == 0 or (dp.find(n) != dp.end() and dp[n] == true))
        return "YES\n";
    else if (n < 0 or (dp.find(n) != dp.end() and dp[n] == false))
        return "NO\n";
    else
    {
        if (check(n - 11) == "YES\n")
        {
            dp[n] = true;
            return "YES\n";
        }
        else if (check(n - 111) == "YES\n")
        {
            dp[n] = true;
            return "YES\n";
        }
        else
        {
            dp[n] = false;
            return "NO\n";
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    dp[0] = true;
    dp[11] = true;
    dp[111] = true;
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        if (n > 1099)
            cout << "YES\n";
        else     
            cout << check(n);
    }
}