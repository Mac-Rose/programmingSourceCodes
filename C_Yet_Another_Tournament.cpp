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

int inc(int n)
{
    return ++n;
}

void solve(int wins, vector<pii> &temp, vi &noWins)
{
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
        int n, m;
        cin >> n >> m;
        vi v(n);
        for (int &it : v)
            cin >> it;
        vector<pii> temp;
        reverse(all(v));
        for (int i = 0; i < n; i++)
        {
            temp.push_back({v[i], i});
        }
        vi noWins(n);
        sort(all(temp));
        iota(all(noWins), 0);
        int sum = 0, wins = 0;
        for (int i = 0; i < n; i++)
        {
            sum += temp[i].F;
            if (sum <= m)
            {
                wins++;
            }
            else
                break;
        }
        if (sum <= m)
        {
            cout << 1 << endl;
            continue;
        }
        solve(wins, temp, noWins);
        int ans = 1;
        for (int i = 0; i < n; i++)
            if (noWins[i] > wins)
                ans++;
        cout << ans << endl;
    }
}