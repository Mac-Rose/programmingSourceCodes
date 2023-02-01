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
    vi a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = a[i] - b[i];
    }
    sort(all(v));
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int idx = upper_bound(v.begin() + i, v.end(), -v[i]) - v.begin();
        ans += n - idx;
        if (idx <= i)
            ans--;
    }
    cout << ans;
}