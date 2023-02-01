#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

int max(int a, int b)
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
    int n, d;
    cin >> n >> d;
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }
    sort(all(v));
    vi v1(n);
    for (auto &it : v)
    {
        v1[&it - &v[0]] = it.F;
    }
    vi temp, prefix(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        temp.pb(lower_bound(v1.begin() + i, v1.end(), v1[i] + d) - v1.begin() - 1);
    }
    for (int i = 0; i < n; i++)
    {
        prefix[i + 1] = prefix[i] + v[i].S;
    }
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, (prefix[temp[i] + 1] - prefix[i]));
    }
    cout << ans;
}