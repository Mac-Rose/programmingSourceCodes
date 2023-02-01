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

vector<long long> allDivisiors(long long n)
{
    vector<long long> divisors;
    ll limit = sqrt(n + 1);
    for (ll i = 1; i <= limit; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                divisors.push_back(i);
            else
                divisors.push_back(i), divisors.push_back(n / i);
        }
    }
    return divisors;
}

vector<ll> findPrimeFactors(ll n)
{
    vector<ll> primeFactors;
    while (n % 2 == 0)
        primeFactors.push_back(2), n = n / 2;
    for (ll i = 3; i * i <= n; i = i + 2)
    {
        while (n % i == 0)
        {
            primeFactors.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        primeFactors.push_back(n);
    return primeFactors;
}
bool check(int i)
{
    vi v;
    v = findPrimeFactors(i);
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            return false;
        }
    }
    return true;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        exit(0);
    }
    vi v;
    v = allDivisiors(n);
    sort(all(v), greater<int>());
    for (int i = 0; i < v.size(); i++)
    {
        if (check(v[i]))
        {
            cout << v[i];
            break;
        }
    }
}