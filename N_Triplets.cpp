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
int const MOD = 1000000007;
#define N 31623
vector<int> prime(N, -1);
vi primes, primes2;
void precomputation()
{
    for (int i = 2; i < N; i++)
    {
        if (prime[i] == -1)
        {
            for (int j = i * i; j < N; j += i)
            {
                prime[j] = i;
            }
            primes.pb(i);
            primes2.pb(i * i);
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    precomputation();
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        int a = n;

        if (a == 1 or binary_search(all(primes), a))
        {
            cout << -1 << endl;
            continue;
        }
        if (binary_search(all(primes2), a))
        {
            cout << -1 << endl;
            continue;
        }
        vector<pii> ans;
        for (int &it : primes)
        {
            int cnt = 0;
            while (n % it == 0)
            {
                cnt++;
                n /= it;
            }
            if (cnt)
                ans.push_back({it, cnt});
        }
        if (n != 1)
            ans.push_back({n, 1});
        int x = ans.front().F;
        if (x != a / x)
            cout << 1 << ' ' << x << ' ' << a / x;
        else
            cout << -1;
        cout << endl;
    }
}