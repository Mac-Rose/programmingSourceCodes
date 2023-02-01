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

set<long long> allDivisiors(long long n)
{
    set<long long> divisors;
    ll limit = sqrt(n + 1);
    for (ll i = 1; i <= limit; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                divisors.emplace(i);
            else
                divisors.emplace(i), divisors.emplace(n / i);
        }
    }
    return divisors;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi v(n);
    for (int &it : v)
        cin >> it;
    int g = v[0];
    for (int i = 0; i < n; i++)
    {
        g = __gcd(g, v[i]);
    }
    set<int> s = allDivisiors(g);
    cout << s.size();
}