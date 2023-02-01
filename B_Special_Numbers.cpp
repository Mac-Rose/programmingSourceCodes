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
#define mod ll(1e9 + 7)

long long binpow(long long a, long long b)
{
    a %= mod;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    vi v(32);
    for (int i = 1; i <= 32; i++)
    {
        v[i - 1] = (1ll << i) - 1;
    }

    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        vi ans;
        while (k)
        {
            int idx = lower_bound(all(v), k) - v.begin();
            ans.pb(idx);
            if (idx == 0)
                break;
            k -= v[--idx] + 1;
        }
        int a = 0, b = 0;
        for (auto &it : ans)
        {
            b = binpow(n, it) % mod;
            a = a % mod + b % mod;
            a = a % mod;
        }
        cout << a << '\n';
    }
}