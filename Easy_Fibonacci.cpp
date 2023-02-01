#include <bits/stdc++.h>
using namespace std;

// #define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

ll ho2(ll x)
{

    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x |= x >> 32;
    x |= x >> 63;

    return x ^ (x >> 1);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi fib(60);
    fib[1] = 1;
    for (int i = 2; i < 60; i++)
        fib[i] = (fib[i - 1] + fib[i - 2]) % 10;
    int idx = 60;
    int tst;
    cin >> tst;
    while (tst--)
    {
        ll n;
        cin >> n;
        ll ans = ho2(n);
        ans--;
        cout << fib[ans % idx] << endl;
    }
}