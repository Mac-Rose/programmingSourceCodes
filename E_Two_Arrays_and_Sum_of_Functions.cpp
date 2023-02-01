#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()
#define MOD 998244353

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        a[i] = (i + 1) * 1ll * (n - i) * g;
    }
    for (auto &it : b)
        cin >> it;
    sort(all(a));
    sort(all(b), greater<ll>());
    int min_ans = 0;
    for (int i = 0; i < n; i++)
    {
        min_ans = (min_ans + (a[i] % MOD * b[i] % MOD) % MOD) % MOD;
    }
    cout << min_ans;
}