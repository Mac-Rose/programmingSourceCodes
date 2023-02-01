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

struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

#define N 31623

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<bool> prime(N);
    vi primes;
    for (int i = 2; i < N; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j < N; j += i)
            {
                prime[j] = true;
            }
            primes.pb(i);
        }
    }

    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        bool flag = false;
        int one = 0;
        for (int &it : primes)
        {
            int freq = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] % it == 0)
                {
                    if (freq == 1)
                    {
                        flag = true;
                        break;
                    }
                    while (v[i] % it == 0)
                        v[i] /= it;
                    if (v[i] == 1)
                        one++;
                    freq++;
                }
            }
            if (flag)
                break;
        }
        if (flag)
        {
            cout << "YES" << endl;
            continue;
        }
        unordered_set<int, custom_hash> s;
        for (int &it : v)
            if (it != 1 and s.emplace(it).second == false)
            {
                flag = true;
                break;
            }

        (flag) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}