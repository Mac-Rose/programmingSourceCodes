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
#define MOD 1000000007

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
        int N = n;
        vi v(42, 0);
        int k = 1, i = 2;
        while (n)
        {
            k *= i / (__gcd(k, i));
            v[i] = n - N / k;
            n = N / k;
            i++;
        }
        int ans = 0;
        for (int i = 0; i < 42; i++)
        {
            ans = ans % MOD + ((v[i] % MOD) * (i % MOD)) % MOD;
            ans = ans % MOD;
        }
        cout << ans << endl;
    }
}