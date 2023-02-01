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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    ll ans = v.back() - v.front();
    vi a;
    for (int i = 1; i < n; i++)
        a.pb(v[i - 1] - v[i]);
    sort(all(a));
    ans += accumulate(a.begin(), a.begin() + k - 1, 0);
    cout << ans;
}