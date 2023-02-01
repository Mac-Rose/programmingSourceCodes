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
#define MOD 1000000007

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, d;
        cin >> n >> d;
        vi v(n);
        for (int &it : v)
            cin >> it;
        vector<pii> gap(n);
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                gap[i] = {v[i], i};
            }
            else
            {
                gap[i] = {v[i] - v[i - 1], i};
            }
        }
        sort(all(gap));
        vector<pii> possible(all(gap));
        possible.pb({d - v.front(), n});
        int ans = gap.begin()->F;
        if (gap.front().F != possible.back().F)
        {
            if (possible.back().F / 2 > gap.front().F)
            {
                shift(gap.front().S, possible.back().S);
                ans = max(helper, ans);
            }
        }
        cout << ans << endl;
    }
}