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
    int l, r, k;
    cin >> l >> r >> k;
    vi v;
    v.pb(1);
    while (v.back() <= r)
    {
        v.pb(v.back() * k);
        if (v.back() <= 0 or v.back() > 1e18)
        {
            v.pop_back();
            break;
        }
        if (INT64_MAX / k < v.back())
            break;
    }
    int idx = lower_bound(all(v), l) - v.begin();
    if (v[idx] > r or idx == v.size())
    {
        cout << -1;
        exit(0);
    }
    while (v[idx] <= r and idx < v.size())
    {
        cout << v[idx] << ' ';
        idx++;
    }
}