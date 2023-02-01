#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define f first
#define endl '\n'
#define Endl '\n'
#define s second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;
pair<ll, pair<ll, ll>> egcd(ll a, ll b) // solves ax + by = gcd(a,b) = g
{                                       // returns (g,(x,y))
    pair<ll, pair<ll, ll>> ret;

    if (a == 0)
    {
        ret.f = b;
        ret.s.f = 0;
        ret.s.s = 1;
    }
    else
    {
        ll g, x, y;
        pair<ll, pair<ll, ll>> temp = egcd(b % a, a);
        g = temp.f;
        x = temp.s.f;
        y = temp.s.s;
        ret.f = g;
        ret.s.f = y - (b / a) * x;
        ret.s.s = x;
    }

    return ret;
}

ll modinv(ll den, ll m)
{
    pair<ll, pair<ll, ll>> ans = egcd(den, m);
    if (ans.f == 1)
    {
        return (ans.s.f + m) % m;
    }
}

ll moddiv(ll num, ll den, ll m) // den and m must be coprime
{
    return (num * modinv(den, m)) % m;
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
        int N;
        cin >> N;
        int n = N - 1;
        int ans = (n * (n + 1));
        ans = ans % MOD;

        ans = ans * ((2 * n + 1)) % MOD;
        ans = moddiv(ans, 3, MOD);
        ans = ans % MOD;

        ans = ans + (n * (n + 1) / 2) % MOD;
        ans = ans % MOD;

        ans = ans + (N * N) % MOD;
        ans = ans % MOD;

        ans = ans * 2022;
        ans = ans % MOD;
        cout << ans << endl;
    }
}