#include <bits/stdc++.h>
using namespace std;

#define int long long
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
int const MOD = 998244353;
ll binPow(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    ll ret = binPow(a, b / 2);
    if (b % 2 == 0)
        return (ret * ret) % MOD;
    return ((ret * ret) % MOD * a) % MOD;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        int no_of_set_bits = 0;
        int j = i;
        while (j)
        {
            if (j & 1)
                no_of_set_bits++;
            j >>= 1;
        }
        int temp = binPow(2, no_of_set_bits) - 1;
        temp = binPow(temp, n - 1);
        ans = ans + temp;
        ans = ans % MOD;
    }
    cout << ans;
}