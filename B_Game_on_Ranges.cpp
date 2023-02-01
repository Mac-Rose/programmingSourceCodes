#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
#define MAX 1000000

vector<bool> isPrime(MAX + 1, true);
vi primes;
void seive()
{
    for (int i = 2; i * i <= MAX; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= MAX; i++)
    {
        if (isPrime[i] == true)
        {
            primes.pb(i);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    seive();
    vi v;
    for (int i = 2; i * i * i <= MAX; i++)
    {
        v.pb(i * i * i);
    }
    // cout << primes.size() << endl;
    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = i + 1; j < primes.size(); j++)
        {
            v.pb(primes[i] * primes[j]);
            if (v.back() > MAX)
                break;
        }
    }
    sort(all(v));
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        int idx = upper_bound(all(v), n) - v.begin();
        idx--;
        cout << v[idx] << endl;
    }
}