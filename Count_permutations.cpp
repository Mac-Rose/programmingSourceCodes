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
#define mod 1000000007

vi fact(1e6 + 5, 1);
ll binPow(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    ll ret = binPow(a, b / 2);
    if (b % 2 == 0)
        return (ret * ret) % mod;
    return ((ret * ret) % mod * a) % mod;
}

ll inv(ll a)
{
    return (binPow(a, mod - 2) % mod + mod) % mod;
}

ll binom(ll a, ll b)
{
    if (b < 0 or a < 0)
        return 0;
    return (((fact[a] * inv(fact[b])) % mod * inv(fact[a - b])) % mod + mod) % mod;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 1; i <= 1e6; i++)
        fact[i] = (i * fact[i - 1]) % mod;
    int n, l;
    cin >> n >> l;
    vi v(l);
    for (int &it : v)
        cin >> it;
    set<int> s(all(v));
    if (s.size() != l)
        cout << 0;
    else
    {
        int ans = (binom(n, l) * fact[n - l]) % mod;
        cout << ans;
    }
}