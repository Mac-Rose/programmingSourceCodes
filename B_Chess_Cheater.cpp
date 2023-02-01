#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

ll max(ll a, ll b)
{
    if (a > b)
        return a;
    else
        return b;
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
        string s;
        cin >> s;
        vi v;
        int w = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
                w++;
        }
        if (w == 0)
        {
            cout << max(2 * k - 1, 0) << endl;
            continue;
        }
        w += k;
        if (w >= n)
        {
            cout << 2 * n - 1 << endl;
            continue;
        }
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                l++;
            else
            {
                v.pb(l);
                l = 0;
            }
        }
        if (l != 0)
            v.pb(l);
        if (s[0] == 'L')
            v.erase(v.begin());
        if (s[n - 1] == 'L')
            v.erase(v.begin() + v.size() - 1);
        sort(all(v));
        int sp = 0;
        int i;
        for (i = 0; i < v.size(); i++)
        {
            if (sp + v[i] > k)
                break;
            sp += v[i];
        }
        int wl = v.size() - i;
        cout << 2 * w - wl - 1 << endl;
    }
}