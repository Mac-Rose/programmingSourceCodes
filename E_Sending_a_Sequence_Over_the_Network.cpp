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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        vector<pii> seg;
        for (int &it : v)
            cin >> it;

        for (int i = 0; i < n; i++)
        {
            if (i + v[i] < n)
            {
                seg.push_back({i, i + v[i]});
            }
        }
        for (int i = n - 1; i > -1; i--)
        {
            if (i - v[i] > -1)
            {
                seg.push_back({i - v[i], i});
            }
        }
        // sort(all(seg));
        vector<vi> help(n);
        for (auto &it : seg)
        {
            help[it.first].pb(it.second);
        }
        vector<bool> dp(n + 1);
        dp.back() = true;
        for (int i = n - 1; i > -1; i--)
        {
            for (int j = 0; j < help[i].size(); j++)
            {
                if (help[i][j] < n and dp[help[i][j] + 1])
                {
                    dp[i] = true;
                    break;
                }
            }
        }
        if (dp.front())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}