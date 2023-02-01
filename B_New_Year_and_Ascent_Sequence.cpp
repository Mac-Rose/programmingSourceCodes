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
    int n;
    cin >> n;
    vi mi, ma;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        int a = INT64_MAX, b = INT64_MIN;
        int k;
        for (int j = 0; j < g; j++)
        {
            cin >> k;
            a = min(k, a);
            if (k > a)
                s.emplace(i);
            b = max(k, b);
        }
        if (s.find(i) == s.end())
        {
            mi.pb(a);
            ma.pb(b);
        }
    }
    int k = n - s.size();
    sort(all(mi));
    sort(all(ma));
    int ans = n * n - k * k;
    for (int j = 0; j < k; j++)
    {
        ans += ma.end() - upper_bound(all(ma), mi[j]);
    }
    cout << ans;
}