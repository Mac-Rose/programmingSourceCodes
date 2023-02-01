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
int const MOD = 998244353;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int tst;
    // cin >> tst;
    // while (tst--)
    {
        int n;
        n = 6;
        vi v(n);
        for (int &it : v)
        {
            cin >> it;
            it = it % MOD;
        }

        for (int i = 1; i < 3; i++)
        {
            v[i] = v[i] * v[i - 1];
            v[i] = v[i] % MOD;
        }
        for (int i = 4; i < 6; i++)
        {
            v[i] = v[i] * v[i - 1];
            v[i] = v[i] % MOD;
        }

        v[2] += MOD;
        v[2] -= v.back();
        cout << v[2] % MOD;
    }
}