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
        for (int &it : v)
            cin >> it;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        vector<pii> help;
        int temp = 1;
        int parity = 1;
        if (v[0] > v[1])
            parity = 1 - parity;
        for (int i = 1; i < n; i++)
        {
            if (v[i] > v[i - 1] and parity == 0)
            {
                help.push_back({parity, temp});
                parity = 1 - parity;
                temp = 2;
            }
            else if (v[i] > v[i - 1] and parity)
            {
                temp++;
            }
            else if (v[i] < v[i - 1] and parity == 1)
            {
                help.push_back({parity, temp});
                parity = 1 - parity;
                temp = 2;
            }
            else
            {
                temp++;
            }
        }
        help.push_back({parity, temp});
        int ans = n;
        for (int i = 0; i < help.size(); i++)
        {
            ans += (help[i].second) * (help[i].second + 1) / 2;
            ans -= help[i].second;
        }
        for (int i = 0; i < help.size() - 1; i++)
        {
            if (help[i].first == 0)
            {
                ans += (help[i].second - 1) * (help[i + 1].second - 1);
            }
        }
        cout << ans << endl;
    }
}