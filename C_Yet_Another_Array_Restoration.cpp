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
    sort(all(divisors));
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
        int n, x, y;
        cin >> n >> x >> y;
        int diff = y - x;
        vi divisors = allDivisiors(diff);
        int idx = upper_bound(all(divisors), n - 1) - divisors.begin();
        idx--;
        int req = diff / divisors[idx];
        for (int i = 0; i < 1 + divisors[idx]; i++)
        {
            cout << x + i * req << ' ';
        }
        n -= 1 + divisors[idx];
        int i = 1, j = 1;
        while (n--)
        {
            if (x - i * req > 0)
            {
                cout << x - i * req << ' ';
                i++;
            }
            else
            {
                cout << y + j * req << ' ';
                j++;
            }
        }
        cout << endl;
    }
}