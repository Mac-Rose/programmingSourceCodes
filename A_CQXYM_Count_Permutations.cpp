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

pair<ll, pair<ll, ll>> egcd(ll a, ll b) //solves ax + by = gcd(a,b) = g
{                                       //returns (g,(x,y))
    pair<ll, pair<ll, ll>> ret;

    if (a == 0)
    {
        ret.F = b;
        ret.S.F = 0;
        ret.S.S = 1;
    }
    else
    {
        ll g, x, y;
        pair<ll, pair<ll, ll>> temp = egcd(b % a, a);
        g = temp.F;
        x = temp.S.F;
        y = temp.S.S;
        ret.F = g;
        ret.S.F = y - (b / a) * x;
        ret.S.S = x;
    }

    return ret;
}

ll modinv(ll den, ll m)
{
    pair<ll, pair<ll, ll>> ans = egcd(den, m);
    if (ans.F == 1)
    {
        return (ans.S.F + m) % m;
    }
}

ll moddiv(ll num, ll den, ll m) // den and m must be coprime
{
    return (num * modinv(den, m)) % m;
}

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
        int n;
        cin >> n;
        n *= 2;
        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            ans = ((ans % MOD) * (i % MOD)) % MOD;
        }
        ans = moddiv(ans, 2, MOD);
        cout << ans << '\n';
    }
}