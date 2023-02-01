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

int sieve(vector<bool> &prime, int n)
{
    int ans = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == false)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (prime[j] == false)
                    ans++;
                prime[j] = true;
            }
        }
    }
    return n - ans;
}

int countPrimes(int n)
{
    vector<bool> prime(n + 1);
    return sieve(prime, n);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << countPrimes(10);
}