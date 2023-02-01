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

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;

    vi v(n + 1);
    int temp = 1;
    v[1] = m % MOD;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            temp *= i;
        v[i] = (((m / temp) % MOD) * v[i - 1]) % MOD;
        if (!v[i])
            break;
    }

    int ans = 0;
    temp = 1;
    for (int i = 1; i <= n; i++)
    {
        temp = (temp * (m % MOD)) % MOD;
        ans = (ans + temp) % MOD;
    }
    int i = 1;
    while (i <= n and v[i])
    {
        ans = (ans + MOD - v[i]) % MOD;
        i++;
    }
    cout << ans << Endl;
}