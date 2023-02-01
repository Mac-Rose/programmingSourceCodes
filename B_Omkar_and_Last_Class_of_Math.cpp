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
    divisors.pb(1);
    for (ll i = 2; i <= limit; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                divisors.pb(i);
            else
                divisors.pb(i), divisors.pb(n / i);
        }
    }
    return divisors;
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
        int n;
        cin >> n;
        vi v = allDivisiors(n);
        pair<int, int> ans;
        int temp = n;
        if (n & 1)
            for (int i = 0; i < v.size(); i++)
            {
                ll x = lcm(v[i], n - v[i]);
                if (x < temp)
                {
                    temp = x;
                    ans = {v[i], n - v[i]};
                }
            }
        else
            ans = {n / 2, n / 2};
        cout << ans.F << " " << ans.S;
        cout << endl;
    }
}