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
int const m = 1000000007;
#define N 10000000

unordered_map<int, vi> primeFactorizationRegister;
map<pii, int> dp;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Recursive function to return (x ^ n) % m
ll modexp(ll x, ll n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return modexp((x * x) % m, n / 2);
    }
    else
    {
        return (x * modexp((x * x) % m, (n - 1) / 2) % m);
    }
}

// Function to return the fraction modulo mod
ll getFractionModulo(ll a, ll b)
{
    ll c = gcd(a, b);

    a = a / c;
    b = b / c;

    // (b ^ m-2) % m
    ll d = modexp(b, m - 2);

    // Final answer
    ll ans = ((a % m) * (d % m)) % m;

    return ans;
}
vector<int> prime(N, -1);

// sieve
void precomputation()
{
    for (int i = 2; i < N; i++)
    {
        if (prime[i] == -1)
        {
            for (int j = i; j < N; j += i)
            {
                prime[j] = i;
            }
        }
    }
}

vector<pii> primeFactorization(int n)
{
    vector<pair<int, int>> ans;
    while (n > 1)
    {
        int largest = prime[n];
        int c = 0;
        while (n % largest == 0)
        {
            c++;
            n /= largest;
        }
        ans.push_back({largest, c});
    }
    return ans;
}

// generates divisors from prime factorisation
vi divisorGenerator(vector<pii> div)
{
    vi ans;
    ans.push_back(1);
    for (int i = 0; i < div.size(); i++)
    {
        int n = ans.size();
        for (int j = 1; j <= div[i].second; j++)
        {
            for (int k = 0; k < n; k++)
            {
                ans.push_back(pow(div[i].first, j) * ans[k]);
            }
        }
    }
    return primeFactorizationRegister[ans.back()] = ans;
}

int solve(int n, int k) // recursion with memoization
{
    if (k == 0)
        return n;
    if (dp[{n, k}])
        return dp[{n, k}];
    vector<pii> divisor1;
    vi divisor;
    if (primeFactorizationRegister[n].size())
    {
        divisor = primeFactorizationRegister[n];
    }
    else
    {
        divisor1 = primeFactorization(n);
        divisor = divisorGenerator(divisor1);
    }
    int divisorCount = divisor.size();
    int ans = 0;
    for (int i = 0; i < divisorCount; i++)
    {
        ans = (ans + solve(n / divisor[i], k - 1)) % m;
    }
    return dp[{n, k}] = getFractionModulo(ans, divisorCount);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    precomputation();
    cout << solve(n, k);
}